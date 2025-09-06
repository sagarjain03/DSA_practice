#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    void push(int data){
        if(top==size-1){
            cout<<"stack overflow "<<endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    void pop(){
        if(top==-1){
            cout<<"stack underflow "<<endl;
              return;
        }

        arr[top]=0;
        top--;

    }

    
    bool isEmpty(){
        return top==-1;
    }

    void print(){
      while(!isEmpty()){
        cout<<arr[top]<<" ";
        pop();
      }
    }
};

int main(){
    Stack s(4);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    // s.push(10);
    s.pop();
    s.print();
    return 0;
}