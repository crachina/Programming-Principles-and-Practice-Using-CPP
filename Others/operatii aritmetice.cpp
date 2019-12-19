#include <iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int optiune,var1,var2,var3;
double var4;

int main()
{

optiune=0;

while(optiune!=5)
{
    system("cls");
    cout<<"1 - Adunare\n";
    cout<<"2 - Scadere\n";
    cout<<"3 - Inmultire\n";
    cout<<"4 - Impartire\n";
    cout<<"5 - Exit\n";
    cout<<"Introduceti optiunea [1-5]:";
    cin>>optiune;

    if (optiune==1)
    {
       system("cls");
       cout<<"Operatia de adunare[a+b]\n"<<"\n";
       cout<<"a=";
       cin>>var1;
       cout<<"b=";
       cin>>var2;
       var3=var1+var2;
       cout<<"a+b="<<var3<<"\n";
       cout<<"\nApasati orice tasta pentru a reveni la meniu";
       getch();
       optiune=0;

    }

    if (optiune==2)
    {
        system("cls");
        cout<<"Operatia de scadere [a-b]:\n"<<"\n";
        cout<<"a=";
        cin>>var1;
        cout<<"b=";
        cin>>var2;
        var3=var1-var2;
        cout<<"a-b="<<var3<<"\n";
        cout<<"\nApasati orice tasta pentru a reveni la meniu";
        getch();
        optiune=0;
    }

    if (optiune==3)
    {
        system("cls");
        cout<<"Operatia de inmultire [a*b]:\n","\n";
        cout<<"a=";
        cin>>var1;
        cout<<"b=";
        cin>>var2;
        var3=var1*var2;
        cout<<"a*b="<<var3<<"\n";
        cout<<"Apasati orice tasta pentru a reveni la meniu";
        getch();
        optiune=0;
    }

    if (optiune==4)
    {
        system("cls");
        cout<<"Operatia de impartire [a/b]:\n","\n";
        cout<<"a=";
        cin>>var1;
        cout<<"b=";
        cin>>var2;
        var3=var1/var2;
        cout<<"a/b="<<var3<<"\n";
        cout<<"Apasati orice tasta pentru a reveni la meniu";
        getch();
        optiune=0;
    }
}
}
