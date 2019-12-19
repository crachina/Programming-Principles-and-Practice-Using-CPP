//write a program that produces a simple form letter based on user input.
//prompt to “Enter the name of the person you want to write to”
//where first_name is the name entered by the user.
//change the output to “Dear first_name,”
//Add an introductory line or two, like “How are you? I am fine. I miss you.” 
//Be sure to indent the first line. 
//Add a few more lines of your choosing — it’s your letter.

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

string first_name;

int main()

{
    system("cls");
    cout<<"Enter the name of the person you want to write to: ";
    cin>>first_name;
    cout<<"Dear "<<first_name<<", how are you?\n";
    cout<<"I am fine.";
    cout<<"I miss you.\n";
    getch();

}
