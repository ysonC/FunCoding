#include <iostream>

using namespace std;

int main()
{
    int cases, n,tmp;
    cin >> n;
    int store[100];


    // while (n--)
    // {
    //     int cnt = 0;
    //     cin >> store[cnt];
    //     cnt ++;
    // }

    for (int i = 0; i < n; i++)
    {
        cin >> store[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (store[i] > store[i+1])
        {
            tmp = store[i+1];
            store[i+1] = store[i];
            store[i] = tmp;
            i = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << store[i];
    }
}