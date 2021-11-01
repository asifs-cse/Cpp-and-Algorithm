using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    for (int i = 1; i < 100; i++)
    {
        if (i%3==0)
        {
            continue;  
        }
        if (i==50)
        {
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}