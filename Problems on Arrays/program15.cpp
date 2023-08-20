#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Product
//  Description     :   Accept N numbers from user and return product of all odd elements
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        int Product(int Arr[], int iLength)
        {
            int iCnt = 0;
            int iProduct = 1;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if((Arr[iCnt] % 2) != 0)
                {
                    iProduct = iProduct * Arr[iCnt];
                }
            }
            return iProduct;
        }
};

int main()
{
    int iSize = 0,iCnt = 0 ;
    int *ptr = NULL;
    int iRet = 0;

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
    
    iRet = aobj.Product(ptr, iSize);
    
    cout<<"Product : "<<iRet;
    free(ptr);
    return 0;
}