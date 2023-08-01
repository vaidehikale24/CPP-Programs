
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   NonFact
//  Description     :   Accept number from user and display all its non factors 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
///////////////////////////////////////////////////////////////////////////////


void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            cout<<iCnt<<" ";
        }
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    NonFact(iValue);
    return 0;
}