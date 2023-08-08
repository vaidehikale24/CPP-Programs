
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddDisplay
//  Description     :   Accept number from user and print all odd number upto N
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Numbers
{
    public:
        void OddDisplay(int iNo)
        {
            int iCnt = 0;

            for(iCnt = 1;iCnt <= iNo;iCnt++)
            {
                if((iCnt % 2) != 0)
                {
                    printf("%d ",iCnt);
                }
            }

        }
};
int main()
{
    int iValue = 0;
    Numbers nobj;

    printf("Enter number \n");
    scanf("%d",&iValue);

    nobj.OddDisplay(iValue);
    
    return 0;
}