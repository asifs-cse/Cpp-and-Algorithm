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

    //create new node
    head->link= (struct Node*) malloc(sizeof(struct Node));
    head->link->data =10;
    head->link->link=NULL;
    return 0;
}