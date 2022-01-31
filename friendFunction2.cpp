#include<bits/stdc++.h>
using namespace std;

class rectangle{
    int height, width;
    public:
        void set(int h, int w){height =h; width =w;}
        int area(){return height*width;}
};

class cost{
    int costRate;
    public:
    void setValue(int a){costRate = a;}
    int totalCost(rectangle r){
        return costRate*r.area();
    }
};
int main(){
    rectangle r1;
    cost c1;
    r1.set(10,20);
    c1.setValue(100);
    cout<<"Area: "<<r1.area()<<endl;
    cout<<"Cost: "<<c1.totalCost(r1)<<endl;

    return 0;
}