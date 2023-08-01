#include<iostream>
using namespace std;

//////////////////////////////////////////////////
//
//  Function Name   :   Divide
//  Description     :   Performs division of 2 numbers
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//  
//////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;
    return iAns;
}

int main ()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter number 1 : \n";
    cin>>iValue1;

    cout<<"Enter number 2 : \n";
    cin>>iValue2;

    iRet = Divide(iValue1,iValue2);
    cout<<"Division of two numbers : "<<iRet;

    return 0;
}
