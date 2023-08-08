
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Table
//  Description     :   Accept number from user and display its table.
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Numbers
{
    public:
        void Table(int iNo)
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1;iCnt <= 10;iCnt++)
            {    
                printf("%d ",iNo*iCnt);    
            }

        }
};
int main()
{
    int iValue = 0;
    Numbers nobj;

    printf("Enter number \n");
    scanf("%d",&iValue);

    nobj.Table(iValue);
    
    return 0;
}