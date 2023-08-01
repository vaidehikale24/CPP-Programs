
#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   21   3
//  Output          :   21   21  21
//  Description     :   Accept two numbers n1 and n2. Print n1 for n2 times.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
//////////////////////////////////////////////////////////////////////////

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iFrequency; iCnt++)
    {
        cout<<iNo<<" ";
    }
}
int main(){
    int iValue = 0;
    int iCount = 0;

    cout<<"Enter number \n";
    cin>>iValue;

    cout<<"Enter frequency \n";
    cin>>iCount;

    Display(iValue,iCount);
    return 0;
}