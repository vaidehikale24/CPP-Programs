
#include<iostream>
#include<string.h>
using namespace std;

//////////////////////////////////////////////////////////////////
//
//  Function Name   :   main
//  Description     :   Accept name from user and print that name 
//  Author          :   Vaidehi Vishwanath Kale
//  Date            :   31/07/2023
//  
//////////////////////////////////////////////////////////////////

int main()
{
    string name;

    cout<<"Please enter full name \n";
    getline(cin,name);

    cout<<"Your Name is "<<name;
    return 0;
}
