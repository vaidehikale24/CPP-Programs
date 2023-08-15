
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountOdd
//  Description     :   Accept number from user and return count of odd digits
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Digits
{
    public:
        int CountOdd(int iNo)
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
                if((iDigit % 2) == 1)
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

    iRet = dobj.CountOdd(iValue);
    cout<<iRet<<endl;
    
    return 0;
}