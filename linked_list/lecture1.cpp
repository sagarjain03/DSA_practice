#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(){
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void printLL(Node* head){
    Node *temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

}

int lengthLL(Node* head){
    Node *temp = head;
    int count = 0;

    while(temp!=NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

//caution - yha pass by reference krna h 

void insertAtHead(Node* &head,Node * &tail,int data){
//null ll ka case zrur check krlio

if(head==NULL){
    //node create kro
     Node *newNode = new Node(data);
    //head ko uspr point krdo
    head = newNode;
    tail = newNode;
}
else{
    //create a node
    Node *newNode = new Node(data);
    //usko head pr point krwa
    newNode->next = head;
    //uske baad head ko new node pr daal de
    head = newNode;

}


}

void insertAtTail(Node* &head,Node * &tail,int data){
    if(head==NULL){
    //node create kro
     Node *newNode = new Node(data);
    //head ko uspr point krdo
    head = newNode;
    tail = newNode;
}
else{
     //new node create krio
    Node *newNode = new Node(data);
    //tail ka adress new node krde
    tail->next = newNode;
    // tail ko new node pr lga de
    tail = newNode;
}
}

void insertInBetween(Node* &head,Node * &tail,int position,int data){
    int length = lengthLL(head);
    if(position ==1){
        insertAtHead(head,tail,data);
        //mai return krna bhool gya tha
        return;
    }
    if(position==length+1){
        insertAtTail(head,tail,data);
        return;
    }
    else{
        //nyi node bna
        Node * newNode = new Node(data);
        //prev bnao null pr ,current bnao head pr
        Node * prev = NULL;
        Node * curr = head;
        //uss position tak jao aur set kro prev aur null ko
        while(position!=1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        //prev ka next newnode aur newnode ka next current krdo
        prev->next = newNode;
        newNode->next = curr;
    }

}
int main(){
    // Node *first = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // Node *fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = NULL;

    Node *head = NULL;
    Node *tail = NULL;

    // printLL(first);
    // insertAtTail(first,fifth,500);
    // cout<<endl;
    // printLL(first);


    // printLL(head);
    // insertAtHead(head,tail,500);
    // cout<<endl;
    // printLL(head);

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,10);
    insertInBetween(head,tail,2,50);
      printLL(head);
   
    return 0;
}