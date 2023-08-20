#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Digits
//  Description     :   Accept N numbers from user and display all such numbers which contains 3 digits in it.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        void Digits(int Arr[], int iLength)
        {
            int iCnt = 0;
            int iDigit = 0;
            int iNo = 0, iCount = 0;

            printf("Three digits numbers are: \n");
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                iNo = Arr[iCnt];
                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iCount++;
                    iNo = iNo / 10;
                }
                if(iCount == 3)
                {
                    printf("%d\t", Arr[iCnt]);
                }
                iCount = 0;
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
    aobj.Digits(ptr, iSize);

    free(ptr);
    return 0;
}