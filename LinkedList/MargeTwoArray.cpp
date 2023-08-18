#include<bits/stdc++.h>
using namespace std;
typedef struct Node node;
struct Node{
    int data;
    node* next;
};
node* getNode(){
    node* temp = (node*)malloc(sizeof(node));
    cout<<"Enter any value: ";
    int val;
    cin>>val;
    temp->data = val;
    temp->next = NULL;
    return temp;
}
node* createList(){
    cout<<"How many nodes: "<<endl;
    int n;
    cin>>n;
    node *temp,*ptr,*head = NULL;
    for(int i=0;i<n;i++){
        //temp = getNode();
        if(head==NULL){
            head=getNode();
            ptr = head;
        }else{
            ptr->next = getNode();
            ptr = ptr->next;
        }
    }
    return head;
}
node* merge(node* h1, node* h2)
{
    if (!h1)
        return h2;
    if (!h2)
        return h1;
  
    // start with the linked list
    // whose head data is the least
    if (h1->data < h2->data) 
    {
        h1->next = merge(h1->next, h2);
        return h1;
    }
    else 
    {
        h2->next = merge(h1, h2->next);
        return h2;
    }
}
void display(node* root){
    while(root!=NULL){
        cout<<root->data<<" ";
        root = root->next;
    }
    cout<<endl;
}
int main(){
    node *head1 =createList();
    display(head1);
    node *head2 = createList();
    display(head2);
    node* head3 = merge(head1,head2);
    display(head3);
}
