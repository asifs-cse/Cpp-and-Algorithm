using namespace std;
#include<iostream>
#include<conio.h>

int main(){
    
    int i,n;
    cout<<"Input any integer number: ";
    cin>>n;

    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"Prime nmber ";
            break;
        }
        
    }
    if (i==n)
    {
        cout<<"Not prime number ";
    }
    
    return 0;
}