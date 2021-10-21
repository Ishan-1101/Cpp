#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)

int main()
{
    int n,i,j;
    string s[102];
    sd(n);
    for(i=0;i<n;i++)
    {
    	cin>>s[i];
    	for(j=0;j<i;j++)
    	{
    		if(s[i]==s[j])
    			break;
    	}
    	if(j==i)
    		printf("NO\n");
    	else
    		printf("YES\n");
    }
    return 0;
}