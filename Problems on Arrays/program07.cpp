#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Frequency
//  Description     :   Accept N numbers from user and return difference between frequency of even numbers and odd
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        int Frequency(int Arr[],int iLength)
        {
            int iCnt = 0;
            int iCountE = 0, iCountO = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    iCountE++;
                }
                else
                {
                    iCountO++;
                }
            }
            return (iCountE - iCountO);
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
    iRet = aobj.Frequency(ptr,iSize);
    
    cout<<"Result is : "<<iRet; 
    free(ptr);
    return 0;
}