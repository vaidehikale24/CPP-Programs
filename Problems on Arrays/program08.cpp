#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description     :   Accept N numbers from user and check whether that numbers contains 11 or not
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   19/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class ArrayX
{
    public:
        bool Check(int Arr[],int iLength)
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                if(Arr[iCnt] == 11)
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
    int iSize = 0,iCnt = 0;
    int *ptr = NULL;
    bool bRet = false;

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
    
    bRet= aobj.Check(ptr, iSize);
    if(bRet == true)
    {
        cout<<" 11 is present\n";
    }
    else
    {
        cout<<"11 is absent";
    } 

    free(ptr);
    return 0;
}