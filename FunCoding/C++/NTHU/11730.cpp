#include <iostream>

using namespace std;

// int counter(int a)
// {
//    return a++;
// }

bool diffLenghtChar(char correct[100], char check[100])
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
        //cout << "Different length" << endl; // return true 
        totalCnt++;
    }
    // else
    //     cout << "Same length" << endl; // return false

    //cout << "diffCnt = " << totalCnt << endl;

    if (totalCnt == 1)
        return true;
    else
        return false;

}

int wrongChar(char correct[100], char check[100])
{
    int cnt = 0;
    for(int i=0; i<100 && correct[i]!='\0'; i++)
    {
        if (correct[i] != check[i])
        {

            if (correct[i+1] == check[i+1] && diffLenghtChar(correct,check) == false)
            {
                //cout << "One wrong char" << endl;
                cnt++;
                break;
            }
            else if (correct[i] == check[i+1] && correct[i+1] == check[i] && diffLenghtChar(correct,check) == false)
            {
                //cout << "Switch place Char" << endl;
                cnt++;
                break;
            }
            else if (diffLenghtChar(correct,check) == true && correct[i] == check[i+1] || diffLenghtChar(correct,check) == true)
            {
                cnt++;
                //cout << "Missing one" << endl;
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

    if (cnt == 0 && diffLenghtChar(correct,check) == true)
    {
        cnt++;
    }

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
        
        //rightOrWrong = diffLenghtChar(correct,input) + wrongChar(correct,input);

        rightOrWrong = wrongChar(correct,input);

        //cout << rightOrWrong << endl;
        //cout << rightOrWrong << endl;
        //cout << diffLenghtChar(correct,input) << endl;

        if (rightOrWrong > 1 || rightOrWrong == 0)
            cout << "No" << endl;
        else
            cout<< "Yes" << endl;
    }
}