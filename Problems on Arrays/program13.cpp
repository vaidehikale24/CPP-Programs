#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   LastOcc
//  Description     :   Accept N numbers from user and accept one another number No, return index pf   
//                      last occurance of that NO
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        int LastOcc(int Arr[],int iLength,int iNo)
        {
            int iCnt = 0;
            int iPos = -1;

            for(iCnt = iLength -1; iCnt >=0; iCnt--)
            {
                if(Arr[iCnt] == iNo)
                {
                    iPos =iCnt ;
                    break;
                }
            }
            return iPos;
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
    
    iRet= aobj.LastOcc(ptr, iSize,iValue);
    
    cout<<"Last Occurance is at : "<<iRet;

    free(ptr);
    return 0;
}