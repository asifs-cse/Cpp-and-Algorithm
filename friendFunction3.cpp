// C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;

class Distance {
    private:
        int height, width, cost;
        friend int totalCost(Distance);
    public:
        int getValue(int h, int w, int c){height=h, width =w, cost = c;}
};

int totalCost(Distance d) {
    return d.height*d.width*d.cost;
}

int main() {
    Distance d;
    d.getValue(10,20,2000);
    cout << "Total cost: " << totalCost(d);
    return 0;
}