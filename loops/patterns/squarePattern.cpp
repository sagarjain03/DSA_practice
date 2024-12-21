#include <iostream>
using namespace std;
int main(){
  int a = 'A';
  for(int i=1;i<=4;i++){
    for(int j=1;j<=4;j++){
      cout<<char(a+j-1)<<" ";
    }
    cout<<endl;
  }
  return 0;
}