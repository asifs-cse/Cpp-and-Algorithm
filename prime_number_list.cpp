using namespace std;
#include<iostream>
#include<conio.h>
int main(){
    int s,e;
    cin>>s>>e;
    for (int num= s; num <= e; num++)
    {
        int i;
        for (i = 2; i <num; i++)
        {
            if (num%i==0)
            {
                break;
            }
        }
        if (i==num)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}