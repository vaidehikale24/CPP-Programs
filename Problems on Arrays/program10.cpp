#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Frequency
//  Description     :   Accept N numbers from user and accept one another number No, return frequency 
//                      of NO from it.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        int Frequency(int Arr[],int iLength,int iNo)
        {
            int iCnt = 0;
            int iCount = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    iCount++;
                }
            }
            return iCount;
        }
};

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
    int *ptr = NULL;
    int iRet = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iSize;

    cout<<"Enter number : \n";
    cin>>iValue;

    ptr = new int[iSize];

    if (ptr == NULL)
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
    
    iRet= aobj.Frequency(ptr, iSize,iValue);
    
    cout<<"Result is : "<<iRet;


    free(ptr);
    return 0;
}