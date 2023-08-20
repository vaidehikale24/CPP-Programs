#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Range
//  Description     :   Accept N numbers from user and accept range, Display all elements from that range  
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        void Range(int Arr[], int iLength, int iStart, int iEnd)
        {
            int iCnt = 0;

            cout<<"Numbers between "<<iStart<<" and "<<iEnd<<"\n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
                {
                    cout<<Arr[iCnt]<<"\t";
                }
            }
        }
};

int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0 ;
    int *ptr = NULL;
    int iRet = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iSize;

    cout<<"Enter starting point : \n";
    cin>>iValue1;

    cout<<"Enter ending point : \n";
    cin>>iValue2;
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
    
    aobj.Range(ptr, iSize,iValue1,iValue2);
    
    free(ptr);
    return 0;
}