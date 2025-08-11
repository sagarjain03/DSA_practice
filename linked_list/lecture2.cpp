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
    if (position <= 0 || position > length + 1) {
    cout << "Invalid position!" << endl;
    return;
}

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


void deleteNode(Node* &head,Node*&tail,int position){
       int length = lengthLL(head);

       if (position <= 0 || position > length) {
    cout << "Invalid position!" << endl;
    return;
}


       //single node hui to

     if (head == tail) { // only one node
    delete head;   // free memory
    head = NULL;   // set pointers to NULL
    tail = NULL;
    return;
}

       //sbse phle insert at head wala kaam 
    if(position==1){
        //temp pointer head pr point kro
        Node * temp = head;
        //head ko agli node pr daal do
        head = head->next;
        //temp ko null pr point krdo 
        temp->next = NULL;
        //delete krdo node ko 
        delete temp;
        // (main baat ye h ki phle apni node isolate krni pdegi fir delete krna pdega)

        return;
    }

    if(position==length){
        Node* temp = head;

        while(temp->next !=tail){
            temp = temp->next;
           
        }
         temp->next = NULL;
            delete tail;
            tail = temp;

             return;
    }

    else{
        Node* temp = head;
        Node* prev = NULL;
        Node * curr = head;

        while(position!=1){
            position--;
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }

}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,10);
    insertInBetween(head,tail,2,50);
      printLL(head);
      cout<<endl;
    deleteNode(head,tail,2);
        printLL(head);
    return 0;
}