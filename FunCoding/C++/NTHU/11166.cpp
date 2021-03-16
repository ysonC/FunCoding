#include <iostream>

using namespace std;

int main()
{
    int cases, n,tmp;
    int store[100];

    cin >> cases;
    while (cases--)
    {
    cin >> n;
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
                i = -1;
            }
            else if (store[i] == store[i+1])
            {
                continue;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << store[i];
        }
        cout << endl;
    }
}