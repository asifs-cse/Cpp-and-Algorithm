using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    char n;
    cout<<"Enter a cheracter:";
    cin>>n;

    switch (n)
    {
    case 'a':
        cout<<"enter a";
        break;
    case 'b':
        cout<<"enter b";
    case 'c':
        cout<<"enter c";
    default:
        break;
    }

    return 0;
}