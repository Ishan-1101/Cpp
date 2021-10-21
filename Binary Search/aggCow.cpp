#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, cows;
int positions[N];

bool canPlaceCows(int minDist)
{
    int last_pos=-1;
    int cow_cnt=cows;
    for(int i=0;i<n;i++){
        if(positions[i]-last_pos>=minDist)
        {
            cow_cnt--;
            last_pos=positions[i];
        }
        if(cow_cnt==0)
        break;
    }
    return cow_cnt==0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> cows;
        for (int i = 0; i < n; i++)
        {
            cin >> positions[i];
        }
        sort(positions,positions+n);//sorting the positions array in nlogn
        //TTTTTTTTFFFFFFFF
        int lo = 0, hi = 1e9, mid;
        while (hi - lo > 1)
        {
            int mid=(hi+lo)/2;
            if(canPlaceCows(mid)){
                lo=mid;
            }else{
                hi=mid-1;
            }
        }
        if(canPlaceCows(hi)){
            cout<<hi<<endl;
        }else{
            cout<<lo<<endl;
        }
    }
}