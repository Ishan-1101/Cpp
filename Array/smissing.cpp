// SMALLEST NON-NEGATIVE MISSING NUMBER 
//AMAZON 
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int flag=-1;
    const int N = 1e6 +2; //10^6
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            check[a[i]] = true;
    }
    for (int i = 0; i < N; i++)
    {
        if (check[i] == false)
        {
            flag=i;
            break;
        }
    }
    cout<<flag << endl;
    return 0;
}