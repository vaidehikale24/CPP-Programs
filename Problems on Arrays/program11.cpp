#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description     :   Accept N numbers from user and accept one another number 
//                      No, check whether No  is present or not.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        bool Check(int Arr[],int iLength,int iNo)
        {
            int iCnt = 0;
            int iCount = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    break;
                }
            }
            if(iCnt == iLength)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
};

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

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
    
    bRet= aobj.Check(ptr, iSize,iValue);
    
    if(bRet == true)
    {
        cout<<iValue<<" is present\n";
    }
    else
    {
        cout<<iValue<<" is not present\n";
    }

    free(ptr);
    return 0;
}