
#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Number
//  Description     :   Accept number from user and if number is less than 50 then print small
//                      if it is greater than 50 and less than 100 then print medium, it it is
//                      greater than 100 then print large
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   07/08/2023
//  
//////////////////////////////////////////////////////////////////////////

class Numbers
{
    public: 
        void Number(int iNo)
        {
            if(iNo < 50)
            {
                printf("Small");
            }
            else if(iNo > 50 && iNo < 100)
            {
                printf("Medium");
            }
            else if(iNo > 100)
            {
                printf("Large");
            }

        }
};
int main()
{
    int iValue = 0;
    Numbers nobj;

    printf("Enter number \n");
    scanf("%d",&iValue);

    nobj.Number(iValue);
    
    return 0;
}