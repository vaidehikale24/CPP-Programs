
#include<iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Display "*" for n times using while. Accept n from user
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
//////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    
    while(iNo > 0)
    {
        cout<<"* ";
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    Display(iValue);
    return 0;
}