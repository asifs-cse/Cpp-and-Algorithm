#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};
struct Node* head;

int main(){
    head =NULL;
    head = (struct Node*) malloc(sizeof(struct Node));
    head->data =5;
    cout<<head->data;
    return 0;
}