#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Difference
//  Description     :   Accept N numbers from user and return difference between summation of even 
//                      elements and summation of odd elements.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        int Difference(int Arr[],int iLength)
        {
            int SumE = 0;
            int SumO = 0;
            for(int iCnt = 0; iCnt < iLength; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    SumE = SumE + Arr[iCnt];
                }
                else
                {
                    SumO = SumO + Arr[iCnt];
                }
            }
            return SumE - SumO;
        }
};

int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
    int *ptr = NULL;

    cout<<"Enter the number of elements : \n";
    cin>>iSize;

    ptr = new int[iSize];

    if(ptr == NULL)
    {
        cout<<"Memory not allocated ----> \n";
    }
    else
    {
        cout<<"Enter the elements : \n";
        for(int iCnt = 0;iCnt < iSize;iCnt++)
        {
            cin>>ptr[iCnt];
        }
    }

    ArrayX aobj;

    iRet = aobj.Difference(ptr,iSize);
    cout<<"Difference between evem and odd : "<<iRet<<"\n";
    free(ptr);
    return 0;
}
