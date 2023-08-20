#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountEven
//  Description     :   Accept N numbers from user and return frequency of even numbers
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        int CountEven(int Arr[],int iLength)
        {
            int iCnt = 0;
            int iCount = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    iCount++;
                }
            }
            return iCount;
        }
};

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *ptr = NULL;

    cout<<"Enter the number of elements : \n";
    cin>>iSize;

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
    iRet = aobj.CountEven(ptr,iSize);
    
    cout<<"Result is : "<<iRet; 
    free(ptr);
    return 0;
}