
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description     :   Accept and Check if number is divisible by 5
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
/////////////////////////////////////////////////////////////////

int Check(int iNo)
{

    if((iNo % 5) == 0)
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

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0;
}