#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DigitsSum
//  Description     :   Accept N numbers from user and display summation of digits of each number
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        void DigitsSum(int Arr[], int iLength)
        {
            int iCnt = 0;
            int iDigit = 0;
            int iNo = 0, iSum = 0;

            cout<<"Addition of digits of numbers in array: \n";
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iNo = Arr[iCnt];
                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10;
                }
                cout<<iSum<<"\t";
                iSum =0;
            }
        }
};

int main()
{
    int iSize = 0,iCnt = 0 ;
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
    aobj.DigitsSum(ptr, iSize);

    free(ptr);
    return 0;
}