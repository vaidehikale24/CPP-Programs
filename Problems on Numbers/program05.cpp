
#include<iostream>
using namespace std;

/////////////////////////////////////////////////
//
//  Function Name   :   Accept
//  Description     :   Display "*" for 5 times
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//
/////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= 5;iCnt++)
    {
        cout<<"* ";
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter the value : \n";
    cin>>iValue;

    Accept(iValue);
    return 0;
}
