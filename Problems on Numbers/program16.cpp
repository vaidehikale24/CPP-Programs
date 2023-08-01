#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkGreater
//  Description     :   Accept one number from user and check whether that 
//                      number is greater than 100 or not.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//  
//////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
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

    cout<<"Please enter number \n";
    cin>>iValue;

    bRet = ChkGreater(iValue);
    
    if(bRet == true)
    {
        cout<<"Greater";
    }
    else
    {
        cout<<"Smaller";
    }
    return 0;
}