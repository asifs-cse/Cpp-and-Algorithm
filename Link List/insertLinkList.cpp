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
    }else{
        struct Node* t=head;
        while (t->link!=NULL)
        {
            t=t->link;
        }
        t->link = temp;
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
    int n;
    cout<<"Inpur node size: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int n;
        cin>>n;
        insert(n);
    }
    print();
    return 0;
}