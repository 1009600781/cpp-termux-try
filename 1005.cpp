#include<iostream>
using namespace std;

int main(void)
{
    int a[30]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 
               15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    int temp = 0;
    int previous = 0;

    for(int i = 0; i < n; i++)
    {
        if(i == n - 1)
        {
            previous = temp;
            cin >> temp;
            break;
        }
        cin >> temp;
    }

    if(previous > temp)
    {
        cout << "DOWN" << endl;
    }
    else if(previous < temp)
    {
        if(temp == 15)
        {
            cout << "DOWN" << endl;
        }
        else
        {
            cout << "UP" << endl;
        }
    }

    return 0;
}