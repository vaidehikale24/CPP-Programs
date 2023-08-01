
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Display "Hello" if accepted number from user is less than 10 otherwise "Demo"
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{

    if(iNo < 10)
    {
        cout<<"Hello";
    }
    else
    {
        cout<<"Demo";
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