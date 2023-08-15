
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultDigits
//  Description     :   Accept number from user and return multiplication of all digits
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Digits
{
    public:
        int MultDigits(int iNo)
        {
            int iDigit = 0;
            int iMult = 1;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                
                iMult = iMult * iDigit;

                iNo = iNo / 10;
            }
            return iMult;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    Digits dobj;

    cout<<"Enter number: ";
    cin>>iValue;

    iRet = dobj.MultDigits(iValue);
    cout<<iRet<<endl;
    
    return 0;
}