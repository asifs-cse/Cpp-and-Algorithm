using namespace std;
#include<iostream>
#include<conio.h>

int main(){
    // int a,b,c,d;
    // a=10;
    // b=10;
    // c=a++;
    // d=++b;

    // cout<<a<<endl;
    // cout<<b<<endl;
    // cout<<c<<endl;
    // cout<<d<<endl;


    // int i =1;
    // int j =2;
    // int k;

    // k = i + j + i++ + j++ + ++i + ++j;
    // cout<<k;

    // int i =0;
    //    //0   //0   //1   //1
    // i= i++ - --i + ++i - i--;
    // cout<<i;

//initialize
    int i=1,j=2,k=3;

    int m = i-- - j-- - k--;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;
    cout<<m<<endl;

    return 0;
}