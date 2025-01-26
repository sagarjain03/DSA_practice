#include <iostream>
#include <vector>
#include <string>
using namespace std;
int factorial(int n){
  if(n==0 || n==1){
    return 1;
  }
  else {
    return n*factorial(n-1);
  }
}

int main() {
  int num;
  cout<<"enter the number"<<endl;
  cin>>num;

  
  cout<<factorial(num);
    return 0;
}