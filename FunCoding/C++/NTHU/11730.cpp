#include <iostream>

using namespace std;


void diffLenghtChar(char correct[100], char check[100])
{
    int correctCnt = 0;
    int checkCnt = 0;
    for (int i = 0; correct[i] != '\0'; i++)
        correctCnt++; 
    for (int i = 0; check[i] != '\0'; i++)
        checkCnt++;
    if (correctCnt != checkCnt)
        cout << "Different length" << endl;
    else
        cout << "Same length" << endl;
    
}

void wrongChar(char correct[100], char check[100])
{
    int cnt = 0;
    for(int i=0; i<100 && correct[i]!='\0'; i++)
    {
        if (correct[i] != check[i])
        {

            if (correct[i+1] == check[i+1])
            {
                cout << "One wrong char" << endl;
                cnt++;
                break;
            }
            else if (correct[i] == check[i+1])
            {
                cout << "Switch place Char" << endl;
                cnt++;
                break;
            }
            else 
            {
                cout << "More than one wrong char" << endl;
                cnt++;
                break;
            }
        }
        
    }
    if (cnt == 0)
        cout << "All same char" << endl;
}


int main()
{
    char correct[100];
    char input[100];
    int t;
    cin >> t;
    while (t--)
    {
        cin >> correct >> input;
        diffLenghtChar(correct,input);
        wrongChar(correct,input);
    }

}