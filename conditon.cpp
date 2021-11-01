using namespace std;
#include<iostream>
#include<conio.h>

int main(){
    int a,b,c;

    cout<<"Enter a value: ";
    cin>>a;
    cout<<"Enter b value: ";
    cin>>b;
    cout<<"Enter c value: ";
    cin>>c;

    if (a>b && a>c)
    {
        cout<<"Biggest number is: "<<a;
    }else if (b>a && b>c)
    {
        cout<<"Biggest number is: "<<b;
    }else{
        cout<<"Biggest number is: "<<c;
    }
}