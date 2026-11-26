#include<iostream>
using namespace std;
int main(void)
{
    int n;
    int m;
    cin>>n>>m;
    int a[n];
    int b[m];
    int c[n+m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int top_a;
    int top_b;
    top_a = 0;
    top_b = 0;
    for(int i=0;i<n+m;++i)
    {
        if(top_a<n&&top_b<m)
        {
            if(a[top_a]<b[top_b])
            {
                c[i] = a[top_a];
                top_a++;
            }
            else
            {
                c[i] = b[top_b];
                top_b++;
            }
        }
        else if(top_a<n)
        {
            c[i] = a[top_a];
            top_a++;
        }
        else
        {
            c[i] = b[top_b];
            top_b++;
        }
    }
    for(int i=0;i<n+m;++i)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}