#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Accept N numbers from user and display elements which are divisible by 3 and 5 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        void Display(int Arr[],int iLength)
        {
            for(int iCnt = 0;iCnt < iLength;iCnt++)
            {
                if((Arr[iCnt] % 5) == 0 && (Arr[iCnt] % 3) == 0)
                {
                    cout<<Arr[iCnt]<<"\t";
                }
            }
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
    aobj.Display(ptr,iSize);
    
    free(ptr);
    return 0;
}