#include <iostream>
#include <stack>
using namespace std;
int main(){
    //creation 
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<"the size of stack is : "<<st.size()<<endl;
    st.pop();
    // st.pop();
    // st.pop();


    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty";
    }


    cout<<endl<<"this is top element : "<<st.top();
}