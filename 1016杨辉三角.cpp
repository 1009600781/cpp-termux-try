#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin>>n;
    int a[n][n];
    a[0][0] = 1;
    a[1][0] = 1;
    a[1][1] = 1;
    if(n==1)
    {
        cout<<a[0][0]<<endl;
        return 0;
    }
    else if(n==2)
    {
        cout<<a[0][0]<<endl;
        cout<<a[1][0]<<" "<<a[1][1]<<endl;
        return 0;
    }
    else
    {
        cout<<a[0][0]<<endl;
        cout<<a[1][0]<<" "<<a[1][1]<<endl;
    }
    for(int i=2;i<n;i++)
    {
        a[i][0] = 1;
        cout<<a[i][0]<<" ";
        for(int j=1;j<i;++j)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
            cout<<a[i][j]<<" ";
        }
        a[i][i] = 1;
        cout<<a[i][i]<<endl;
    }
    return 0;
}