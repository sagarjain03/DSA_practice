#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int num = 1;
    for(int i=1;i<=4;i++){
      for(int j=i;j>=1;j--){
        cout<<num<<" ";
        num++;
      }
      cout<<endl;
    }
    return 0;
}