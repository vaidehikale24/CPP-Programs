
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Display "*" for n times using for loop. Accept n from user 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        cout<<"* ";
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number\n";
    cin>>iValue;

    Display(iValue);
    return 0;
}
