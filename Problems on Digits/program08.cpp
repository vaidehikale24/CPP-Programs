
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountRange
//  Description     :   Accept number from user and return the count of 
//                      digits in between 3 and 7
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Digits
{
    public:
        int CountRange(int iNo)
        {
            int iDigit = 0;
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit > 3 && iDigit < 7) 
                {
                    iCnt++;
                }
                iNo = iNo / 10;
            }
            return iCnt;
        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    Digits dobj;

    cout<<"Enter number: ";
    cin>>iValue;

    iRet = dobj.CountRange(iValue);
    cout<<iRet<<endl;
    
    return 0;
}