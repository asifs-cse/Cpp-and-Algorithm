#include<bits/stdc++.h>
using namespace std;

class College{
    public:
        string college_name = "ACOE";
        int college_id=54321;
};
class Engineering: public College{
    private:
    string name;
    int roll;
    public:
    Engineering(string n, int r){
        name = n;
        roll = r;
    }
    void showData(){
        cout<<"College name: "<<College::college_name<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
    
};
class Busness: public College{
    private:
    string name;
    int roll;
    public:
    Busness(string n, int r){
        name = n;
        roll = r;
    }
    void showData(){
        cout<<"College name: "<<College::college_name<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};
class Diploma: public College{
    private:
    string name;
    int roll;
    public:
    Diploma(string n, int r){
        name = n;
        roll = r;
    }
    void showData(){
        cout<<"College name: "<<College::college_name<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};

int main(){
    Engineering e1("Asif", 23);
    Busness b1("Mehedi", 234);
    Diploma d1("Tamzid", 8698);

    e1.showData();
    cout<<endl;
    b1.showData();
    cout<<endl;
    d1.showData();
    return 0;
}