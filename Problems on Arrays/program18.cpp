#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Difference
//  Description     :   Accept N numbers from user and return difference between largest & smallest number
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        int Difference(int Arr[], int iLength)
        {
            int iCnt = 0;
            int iMax = Arr[0];
            int iMin = Arr[0];

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt]  > iMax)
                {
                    iMax = Arr[iCnt];
                }
                if(Arr[iCnt]  < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return (iMax - iMin);
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
    
    iRet = aobj.Difference(ptr, iSize);
    
    cout<<"Difference : "<<iRet;
    free(ptr);
    return 0;
}