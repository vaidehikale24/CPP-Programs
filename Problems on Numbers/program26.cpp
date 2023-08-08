
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Accept number from user and print it into word
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Numbers
{
    public:
        void Display(int iNo)
        {

            if(iNo < 0)
            {
                iNo = -iNo;
            }
            if(iNo == 0)
            {
                printf("Zero");
            }
            else if(iNo == 1)
            {
                printf("One");
            }
            else if(iNo == 2)
            {
                printf("Two");
            }
            else if(iNo == 3)
            {
                printf("Three");
            }
            else if(iNo == 4)
            {
                printf("Four");
            }
            else if(iNo == 5)
            {
                printf("Five");
            }
            else if(iNo == 6)
            {
                printf("Six");
            }
            else if(iNo == 7)
            {
                printf("Seven");
            }
            else if(iNo == 8)
            {
                printf("Eight");
            }
            else if(iNo == 9)
            {
                printf("Nine");
            }
            else if(iNo == 10)
            {
                printf("Ten");
            }
            else
            {
                printf("Invalid Number");
            }

        }
};
int main()
{
    int iValue = 0;
    Numbers nobj;
    
    printf("Enter number \n");
    scanf("%d",&iValue);

    nobj.Display(iValue);
    
    return 0;
}