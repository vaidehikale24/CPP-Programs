
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Pattern
//  Description     :   Accept number from user and print that number of $ & *
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Numbers
{
    public:
        void Pattern(int iNo)
        {
            int iCnt = 0;

            for(iCnt = 1;iCnt <= iNo; iCnt++)
            {
                printf("$ *\t");
            }

        }
};

int main()
{
    int iValue = 0;
    Numbers nobj;

    printf("Enter number \n");
    scanf("%d",&iValue);

    nobj.Pattern(iValue);
    
    return 0;
}