
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkZero
//  Description     :   Accept number from user and check whether it contains
//                      0 in it or not
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Digits
{
    public:
        bool ChkZero(int iNo)
        {
            int iDigit = 0;
            bool bFlag = false;

            if (iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo > 0)
            {
                iDigit = iNo % 10;

                if(iDigit == 0)
                {
                    bFlag = true;
                    break;
                }
                iNo = iNo / 10;
            }
            return bFlag;
        }
};

int main()
{
    int iValue = 0;
    bool bRet = false;

    Digits dobj;

    cout<<"Enter number: \n";
    cin>>iValue;

    bRet = dobj.ChkZero(iValue);
    if(bRet == true)
    {
        cout<<"It Contains Zero";
    }
    else
    {
        cout<<"There is no Zero";
    }

    return 0;
}