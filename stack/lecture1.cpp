#include <iostream>
#include <stack>
#include <string>
using namespace std;


void reverseString(stack<char> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }

}
int main(){
    //creation 
    // stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);

    // cout<<"the size of stack is : "<<st.size()<<endl;
    // st.pop();
    // // st.pop();
    // // st.pop();


    // if(st.empty()){
    //     cout<<"stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty";
    // }


    // cout<<endl<<"this is top element : "<<st.top();
    string str = "sagar";
    stack<char> st;

    for(int i=0;i<str.size();i++){
        st.push(str[i]);
    }
    reverseString(st);
    


}