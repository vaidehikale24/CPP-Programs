#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkEqual
//  Description     :   Accept two numbers from user and check whether numbers are equal or 
//                      not.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//  
//////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0,iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers \n");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);
    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}