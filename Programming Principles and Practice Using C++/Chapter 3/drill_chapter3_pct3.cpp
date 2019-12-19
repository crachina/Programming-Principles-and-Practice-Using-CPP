/*
write a program that produces a simple form letter based on user input.
prompt to “Enter the name of the person you want to write to”
where first_name is the name entered by the user.
output “Dear first_name, how are you?”
prompt the user for the name of another friend, and store it in friend_name.
add a line to your letter: " Have you seen frient_name lately?"
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

string first_name, friend_name;

int main()

{
    system("cls");

    cout<<"Enter the name of the person you want to write to: ";
    cin>>first_name;
    cout<<"Dear "<<first_name<<", how are you?\n";
    cout<<"Enter the name of another friend: ";
    cin>>friend_name;
    cout<<"Have you seen "<<friend_name<<" lately?\n";

    getch();
}


