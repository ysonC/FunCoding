#include <iostream>

using namespace std;

// int counter(int a)
// {
//    return a++;
// }

int diffLenghtChar(char correct[100], char check[100])
{
    int correctCnt = 0;
    int checkCnt = 0;
    int totalCnt = 0;
    for (int i = 0; correct[i] != '\0'; i++)
        correctCnt++; 
    for (int i = 0; check[i] != '\0'; i++)
        checkCnt++;
    if (correctCnt != checkCnt)
    {
        //cout << "Different length" << endl;
        totalCnt++;
    }
    // else
    //     cout << "Same length" << endl;
    
    return totalCnt;
}

int wrongChar(char correct[100], char check[100])
{
    int cnt = 0;
    for(int i=0; i<100 && correct[i]!='\0'; i++)
    {
        if (correct[i] != check[i])
        {

            if (correct[i+1] == check[i+1])
            {
                //cout << "One wrong char" << endl;
                cnt++;
                break;
            }
            else if (correct[i] == check[i+1] && correct[i+1] == check[i])
            {
                //cout << "Switch place Char" << endl;
                cnt++;
                break;
            }
            else 
            {
                //cout << "More than one wrong char" << endl;
                cnt += 2;
                break;
            }
        }
        
    }
    // if (cnt == 0)
    //     cout << "All same char" << endl;

    return cnt;
}


int main()
{
    char correct[100];
    char input[100];
    int t;
    int rightOrWrong;
    cin >> t;
    while (t--)
    {
        cin >> correct >> input;
        
        rightOrWrong = diffLenghtChar(correct,input) + wrongChar(correct,input);
        //cout << rightOrWrong << endl;
        //diffLenghtChar(correct,input);
        //wrongChar(correct,input);
        if (rightOrWrong > 1 || rightOrWrong == 0)
            cout << "No" << endl;
        else
            cout<< "Yes" << endl;
    }

}