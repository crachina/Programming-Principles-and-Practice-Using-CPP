//write a program that produces a simple form letter based on user input. 
//begin by typing the code from prompting a user to enter
//his or her first name and writing “Hello, first_name” where first_name is
//the name entered by the user.
//Then modify your code as follows: change the prompt to “Enter the name of the person you want to write to” and
//change the output to “Dear first_name,”.

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

string first_name;

int main()

{
    system("cls");
    cout<<"Enter the name of the person you want to write: ";
    cin>>first_name;
    cout<<"How are you "<<first_name<<"?\n";
    cout<<"I am fine.";
    cout<<"I miss you.\n";
    getch();

}
