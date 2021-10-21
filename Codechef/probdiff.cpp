#include <bits/stdc++.h>
using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define si(x) scanf("%d", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define ps(s) printf("%s\n", s)
typedef pair<int, int> pii;
typedef vector<int> vi;

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        map<long long int,long long int>mp;
        int x;
        f(4){
            cin>>x;
            mp[x]++;
        }
        if(mp.size()<=1)
        cout<<"0"<<endl;
        else if(mp.size()==4||mp.size()==3){
            cout<<"2"<<endl;
        }
        else{
            long long int h,k;
            auto itr=mp.begin();
            h=itr->second;
            itr++;k=itr->second;
            if(h==k){
                cout<<"2"<<endl;
            }else{
                cout<<"1"<<endl;
            }
        }
    }

    return 0;
}
