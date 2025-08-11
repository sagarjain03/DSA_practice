#include <iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;
    Node * prev;

    Node(){
        this->next = NULL;
        this->prev = NULL;
    }

    Node( int data){
      
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void printLL(Node* head){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;

    }

}
int lengthLL(Node* head){
    int count = 0;
    Node* temp = head;

    while(temp!=NULL){
        count++;
        temp = temp->next;

    }

    return count;

}
void insertAtHead(Node* &head,Node* &tail,int data){

    if(head==NULL){
        //node create kro
         Node * newNode = new Node(data);
        //tail aur head dono uspr daal do 
        tail = newNode;
        head = newNode;
        //return kr jao
        return;
    }
   else{
     //phle to node hi bna lo
    Node * newNode = new Node(data);
    //ab new node k next ko head pr point kro
    newNode->next = head;
    //head ; prev ko new node pr daal
    head->prev = newNode;
    //ab head ko new node pr laa do
    head = newNode;
   }

}

void insertAtTail(Node* &head,Node* &tail,int data){
       if(head==NULL){
        //node create kro
         Node * newNode = new Node(data);
        //tail aur head dono uspr daal do 
        tail = newNode;
        head = newNode;
        //return kr jao
        return;
    }
    else{
        //sbse phle node create kro
        Node * newNode = new Node(data);
        //tail ka next newnode pr lekr jao
        tail->next = newNode;
        //newnode ka prev tail pr lekr jao
        newNode->prev = tail;
        //newnode ko tail krdo
        tail = newNode;
    }
}

void insertInBetween(Node* &head,Node* &tail,int position,int data){
    int length = lengthLL(head);
      if(head==NULL){
        //node create kro
         Node * newNode = new Node(data);
        //tail aur head dono uspr daal do 
        tail = newNode;
        head = newNode;
        //return kr jao
        return;
    }
    if(position<1 || position>length+1){
        cout<<"enter a valid value please"<<endl;
        return;
    }
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    if(position==length+1){
         insertAtTail(head,tail,data);
         return;
    }
    else{
        //sbse phle node bna
         Node * newNode = new Node(data);
        //prev aur curr bnao use null aur head pr set kro
        Node* previous = NULL;
        Node* current = head;
        //loop lgakr position tk pahucho
        while(position!=1){
            position--;
            previous = current;
            current = current->next;
        }
        //prev ka next newnode pr daalo
        previous->next = newNode;
        newNode->prev = previous;
        newNode->next = current;
        current->prev = newNode;
      
    }

}
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    // insertAtHead(head,tail,100);
    // insertAtHead(head,tail,100);
    // insertAtHead(head,tail,100);
    // insertAtHead(head,tail,100);
    // insertAtTail(head,tail,50);

    insertInBetween(head,tail,1,90);
    insertInBetween(head,tail,1,70);
    insertInBetween(head,tail,1,60);
    insertInBetween(head,tail,1,50);
    insertInBetween(head,tail,2,80);
    insertInBetween(head,tail,4,990);
    
    printLL(head);
    cout<<endl;
    cout<<lengthLL(head);

    return 0;
}