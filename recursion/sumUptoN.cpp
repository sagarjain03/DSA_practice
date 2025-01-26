#include <iostream>
using namespace std;
int sumNum(int n){
  
  if(n==1 || n==0){
    return n;
  }
  else{
    return n + sumNum(n-1);
  }
}


  

int main(){
  int num;
  cout<<"enter the number"<<endl;
  cin>>num;

  cout<<sumNum(num);


  return 0;
}