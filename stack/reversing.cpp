#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> st){
    for(int i=0;i<=st.size();i++){
        cout<<st.top()<<" ";
        st.pop();
    }

}
void reverse(){

}

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    print(st);

    
    return 0;
}