
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   MultipleDisplay
//  Description     :   Accept number from user and print first 5 multiples of N
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Numbers
{
    public:
        void MultipleDisplay(int iNo)
        {
            int iCnt = 0;

            for(iCnt = 1;iCnt <= 5;iCnt++)
            {
                printf("%d ",iNo*iCnt);  
            }

        }
};
int main()
{
    int iValue=0;
    Numbers nobj;

    printf("Enter number \n");
    scanf("%d",&iValue);

    nobj.MultipleDisplay(iValue);
    
    return 0;
}