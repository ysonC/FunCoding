#include <iostream>
#include <cstring>

using namespace std;

// function :: oneWrong, oneSwitch, oneMissing, oneMore
// govern ment gover ment
// 012345 6789 01234 5678

// int checkRest(char right[], char wrong[],int rightLen, int wrongLen)
// {
//     int larger = abs(rightLen - wrongLen);
//     for(int i = 0; i < larger; i++)
//     {

//     }

// }

void oneMissing(char right[], char wrong[], int rightLen, int wrongLen)
{
    int missing;
    bool check;
    int cnt;
    missing = rightLen - wrongLen;
    cout << missing << endl;
    
    if (missing == 1)
    {
        for (int i = 0; i < rightLen; i++)
        {
            if (right[i] != wrong[i])
            {   
                cout << right[i] << endl;
                cout << wrong[i] << endl;
                for(int j = i+1; j < rightLen; j++)
                {
                    if (right[j] != wrong[j-1])
                    {
                        cout << "More than one wrong" << endl;
                    }
                }
            }
        }
        cout << "Only one missing" << endl;
    }
    cout << "None missing" << endl;
}
 
int main()
{

    string input1;
    string input2;

    cin >> input1;
    cin >> input2;

    char right[input1.length()+1];
    strcpy (right, input1.c_str());
    char wrong[input2.length()+1];
    strcpy (wrong, input2.c_str());

    oneMissing(right,wrong,input1.length(),input2.length());
}

// int research()
// {   
//     string myWord = "myWord";
//     char myArray[myWord.size()+1];
//     strcpy(myArray, myWord.c_str());
// }