#include <iostream>
using namespace std;

// Node class for Linked List
class Node{
    public:
    int data;     // stores data
    Node* next;   // pointer to next node

    // default constructor
    Node(){
        this->next = NULL;
    }

    // parameterized constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

// Function to print the linked list
void printLL(Node* head){
    Node * temp = head;

    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;  // better ending
}

// Function to find length of linked list
int lengthLL(Node* head){
    Node * temp = head;
    int count = 0;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
}

// Insert at head
void inserAtHead(Node* &head, Node* &tail, int data){
    // if list is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return; // return here to avoid duplicate creation
    }
    // create new node
    Node* newNode = new Node(data);
    // link new node to current head
    newNode->next = head;
    // update head
    head = newNode;
}

// Insert at tail
void inserAtTail(Node* &head, Node* &tail, int data){
    // if list is empty
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // create new node
    Node* newNode = new Node(data);
    // attach new node at tail
    tail->next = newNode;
    // update tail pointer
    tail = newNode;
}

// Insert at any position in between
void insertionInBetween(Node* &head, Node* &tail, int pos, int data) {
    int length = lengthLL(head);

    // check for invalid position
    if(pos < 1 || pos > length+1) {
        cout << "Invalid position" << endl;
        return;
    }

    // insert at head
    if(pos == 1) {
        inserAtHead(head, tail, data);
        return;
    }

    // insert at tail (after last node)
    if(pos == length+1) {
        inserAtTail(head, tail, data);
        return;
    }

    // insert at middle
    Node* newNode = new Node(data);
    Node* temp = head;
    int i = 1;

    // move to (pos-1)th node
    while(i < pos-1) {
        temp = temp->next;
        i++;
    }

    // link new node in between
    newNode->next = temp->next;
    temp->next = newNode;
}


void deleteFromHead(Node * &head,Node *&tail){
    if(head==NULL){
        cout<<"there is nothing to delete"<<endl;
        return;
    }
    if(head==tail){
        Node * temp = head;       
        head = NULL;
        tail= NULL;
         delete temp;
    }
    else{
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

}


void deleteFromTail(Node * &head,Node *&tail){
    if(head==NULL){
        cout<<"there is nothing to delete"<<endl;
        return;
    }
    if(head==tail){
        Node * temp = head;       
        head = NULL;
        tail= NULL;
         delete temp;
    }
    else{
        Node * temp = head;
        while(temp->next !=tail){
            temp = temp->next;
        }
       delete tail;
       tail = temp;
       tail->next = NULL;
    }

}
void deleteFromPosition(Node* &head, Node* &tail, int pos) {
    int length = lengthLL(head);

    // invalid position
    if(pos < 1 || pos > length) {
        cout << "Invalid position" << endl;
        return;
    }

    // case 1: delete head
    if(pos == 1) {
        deleteFromHead(head, tail);
        return;
    }

    // case 2: delete tail
    if(pos == length) {
        deleteFromTail(head, tail);
        return;
    }

    // case 3: delete in between
    Node* prev = head;
    int i = 1;
    while(i < pos-1) {   // reach (pos-1)th node
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;     // node to delete
    prev->next = curr->next;     // unlink
    curr->next = NULL;           // cleanup
    delete curr;                 // free memory
}

int main() {
    // create 4 nodes manually
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *tail = new Node(40);

    // connect nodes
    head->next = second;
    second->next = third;
    third->next = tail;

    // print initial list
    cout << "Initial Linked List: ";
    printLL(head);

    cout << "Length of Linked List: " << lengthLL(head) << endl;

    // insertions
    // insertionInBetween(head, tail, 1, 1); // insert at head
    // insertionInBetween(head, tail, 4, 4); // insert in middle
    // insertionInBetween(head, tail, 7, 2); // insert at tail

    // // print after insertions
    // cout << "After Insertion: ";
    // printLL(head);


    // deletion
    deleteFromHead(head,tail);
    deleteFromTail(head,tail);

    // print after insertions
    cout << "After deletion : ";
    printLL(head);

    return 0;
}
