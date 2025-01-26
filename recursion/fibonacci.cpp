#include <iostream>
using namespace std;
int printFibonacci(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  else{
    return printFibonacci(n-1)+printFibonacci(n-2);
  }
  
}
int main(){
  int num;
  cout<<"enter the number"<<endl;
  cin>>num;

  cout<<printFibonacci(num);


  return 0;
}