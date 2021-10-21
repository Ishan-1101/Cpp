#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cntA=0,cntB=0;
        int A[3];
        int B[3];
        cin>>A[0]>>A[1]>>A[2];
        cin>>B[0]>>B[1]>>B[2];
        for(int i=0;i<3;i++)
        {
            if(A[i]>B[i])
            {
                cntA++;
            }else{
                cntB++;
            }
        }
        if(cntA>cntB)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;
    }
    return 0;
}