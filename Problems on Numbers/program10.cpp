
#include<iostream>
using namespace std;

/////////////////////////////////////////////////
//
//  Function Name   :   ChkEven
//  Description     :   Check if the accepted number is Even or Odd
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
/////////////////////////////////////////////////


bool ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number \n";
    cin>>iValue;

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" is Even number";
    }
    else
    {
        cout<<iValue<<" is Odd number";
    }
}