#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};
struct Node* head;

void insert(int val){
    struct Node* temp =(struct Node*) malloc(sizeof(struct Node));
    temp->data = val;
    temp->link = NULL;
    if (head==NULL)
    {
        head = temp;
    }
}

void print(){
    struct Node* temp;
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}

int main(){
    head =NULL;
    insert(10);
    insert(15);
    print();
    return 0;
}