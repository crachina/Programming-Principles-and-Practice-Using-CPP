/*
write a program that produces a simple form letter based on user input.
prompt to “Enter the name of the person you want to write to”
where first_name is the name entered by the user.
output “Dear first_name, how are you?”
prompt the user for the name of another friend, and store it in friend_name.
add a line to your letter: " Have you seen frient_name lately?"

Declare a char variable called friend_sex and initialize its value to 0.
Prompt the user to enter an m if the friend is male and an f if the friend is
female. Assign the value entered to the variable friend_sex.
Then use two if-statements to write the following:
If the friend is male, write “If you see friend_name please ask him to call me.”
If the friend is female, write “If you see friend_name please ask her to call me.”
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

string first_name, friend_name;
string friend_sex="0";

int main()

{
    system("cls");

    cout<<"Enter the name of the person you want to write to: ";
    cin>>first_name;
    cout<<"Dear "<<first_name<<", how are you?\n";
    cout<<"Enter the name of another friend: ";
    cin>>friend_name;
    cout<<"Have you seen "<<friend_name<<" lately?\n";
    cout<<"Enter another friend sex [m - male; f - female]: ";
    cin>>friend_sex;

    if(friend_sex=="m")
        cout<<"If you see "<<friend_name<<" please ask him to call me.";
    if(friend_sex=="f")
        cout<<"If you see "<<friend_name<<" please ask her to call me.";
    if(friend_sex!="m" && friend_sex!="f")
        cout<<"Nu exista aceasta optiune";

    getch();
}


