#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  for(int i=1;i<=4;i++){
    for(int j=1;j>=4-i;j++){
      cout<<" ";
    }
      for(int j=4;j>=i;j--){
       cout<<i<<" ";
       
      }
      cout<<endl;
    }
    return 0;
}