
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumNonFact
//  Description     :   Accept number from user and return summation of all its non factors 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
///////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    iRet = SumNonFact(iValue);
    cout<<iRet;

    return 0;
}