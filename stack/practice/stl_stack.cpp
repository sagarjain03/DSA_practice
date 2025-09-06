#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void reverse(stack<char> st){
    while(!st.empty()){
            cout<<st.top();
            st.pop();
    }
  
}

void solve(stack <int> st,int pos,int &ans){
    //base case
    if(pos==1){
        ans = 
    }
}

char middleElement(stack<char> st){
   if(st.empty()){
    return -1;
   }
   int size = st.size();
   int pos = 0;
   if(size & 1){
    //odd stack
    pos = (size/2)+1;
   }
   else{
    pos = size/2;
   }
   int ans = -1;
   solve(st,pos,ans);
   return ans;

}
int main() {
    string str = "sagar";
    stack <char> st;
    for(int c:str){
        st.push(c);
    }

     reverse(st);

   


   
    
    return 0;
}