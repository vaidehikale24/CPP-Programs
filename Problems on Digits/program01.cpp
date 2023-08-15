
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigit
//  Description     :   Accept number from user and display its digits in 
//                      reverse order
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Digits
{
    public:
        void DisplayDigit(int iNo)
        {
            int iDigit = 0;

            if (iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                cout<<iDigit<<"\n";
                iNo = iNo / 10;
            }
        }
};

int main()
{
    int iValue = 0;
    Digits dobj;

    cout<<"Enter number: \n";
    cin>>iValue;

    dobj.DisplayDigit(iValue);

    return 0;
}
