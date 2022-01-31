#include<bits/stdc++.h>
using namespace std;

class Distance{
    private:
        int meter;

        friend int addFive(Distance);
    public:
        Distance():meter(0){}
};

//friend function defination
int addFive(Distance d){
    //access privete memeber from the friend function
    d.meter+=5;
    return d.meter;
}

int main(){
    Distance d;
    cout<<"Distance : "<<addFive(d);
    return 0;
}