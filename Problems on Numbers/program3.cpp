#include<iostream>
using namespace std;

/////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Display numbers from 5 to 1
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
/////////////////////////////////////////////////

void Display()
{
    int i = 0;
    
    for(i = 5;i > 0;i--)
    {
        cout<<i<<" ";
    }
}

int main()
{

    Display();
    return 0;
}