#include<bits/stdc++.h>
using namespace std;

class Cost;
class Land{
    private:
        int height, width;
    public:
        Land(int h, int w){
            height =h;
            width =w;
        }
    friend int totalCost(Land, Cost);
};
class Cost{
    private:
        int cost;
    public:
        Cost(int c){
            cost = c;
        }
    friend int totalCost(Land, Cost);
};

int totalCost(Land l, Cost c){
    return l.height*l.width*c.cost;
}

int main(){
    Land l1(50,90);
    Cost c1(2000);
    cout<<"Total cost: "<<totalCost(l1, c1);

    return 0;
}