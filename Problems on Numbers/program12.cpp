
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FactRev
//  Description     :   Accept number from user and display its factors in decreasing order
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
//////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2); iCnt > 0; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactRev(iValue);
    return 0;
}