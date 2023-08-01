#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Multiply
//  Description     :   Accept three numbers from user and prints its multiplication 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//  
//////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 == 0  && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    if(iNo1 == 0)
    {
        iNo1 = 1;
    }
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }
    return iNo1*iNo2*iNo3;

}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0;
    int iRet = 0;

    cout<<"Please enter three numbers \n";
    cin>>iValue1>>iValue2>>iValue3;

    iRet = Multiply(iValue1,iValue2,iValue3);
    
    cout<<"Multiplication is : "<<iRet;
    
    return 0;
}