
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountTwo
//  Description     :   Accept number from user and count frequency of 2 in it 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Digits
{
    public:
        int CountTwo(int iNo)
        {  
            int iCnt = 0;
            int iDigit = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit == 2)
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

    iRet = dobj.CountTwo(iValue);
    cout<<iRet<<endl;

    return 0;
}