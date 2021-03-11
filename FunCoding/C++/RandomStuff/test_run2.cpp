#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    char a[3];
    int n, tmp, ans, b;
    char store[10];
    ans = 0;
    cin.getline(a,5);
    cin >> n;
    tmp = 0;

    while(n--)//!!! not cnt<n
    {
        cin >> store; // enter test value ex. 1212 ==> 2
        for (int i = 0; i < 10; i++)
        {
            for(int j =0; j <= 3; j++)
            {
                if (store[i] == a[j])
                {
                    if (store[i+1] == a[j+1])
                    {
                        //cout << "found 12" << endl;
                        tmp++;
                    }
                    else
                    break;
                }
                else 
                break;
            }

        }
            if (tmp > ans)
            ans = tmp;
            tmp = 0;
    }

    cout << "ans is : " << ans;

}