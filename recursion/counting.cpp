#include <iostream>
using namespace std;
void printCount(int n){
  if(n==1){
    cout<<1<<" ";
  }
  else{
    cout<<n<<" ";
    printCount(n-1);
  
  }
  
}
int main(){
  int num;
  cout<<"enter the number"<<endl;
  cin>>num;

  printCount(num);
  return 0;
}