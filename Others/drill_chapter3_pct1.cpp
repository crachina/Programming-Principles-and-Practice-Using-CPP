//write a program that produces a simple form letter based on user input. 
//begin by typing the code from prompting a user to enter
//his or her first name and writing “Hello, first_name” where first_name is
//the name entered by the user.

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;
string first_name;

int main()
{
    system("cls");
    cout<<"Please enter your name: ";
    cin>>first_name;
    cout<<"Hello, "<<first_name;

    getch();
}
