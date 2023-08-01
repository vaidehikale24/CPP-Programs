#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Multiply
//  Description     :   Accept total marks and obtained marks from user and calculate percentage 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//  
//////////////////////////////////////////////////////////////////////////

float Percentage(int tmarks,int omarks)
{
    float fResult;
    float t = (float)tmarks;
    float o = (float)omarks;

    fResult = (o/t)*100;

    return fResult;

}
int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0f;

    cout<<"Please enter total marks \n";
    cin>>iValue1;

    cout<<"Please enter obtained marks \n";
    cin>>iValue2;

    fRet = Percentage(iValue1,iValue2);
    cout<<"Percentage : "<<fRet<< " %";
    
    return 0;
}