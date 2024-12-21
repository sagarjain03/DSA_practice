#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int a = 'A';
  int row = 3;
  int num=1;
    for(int i=1;i<=row;i++){
      for(int j=1;j<=row;j++){
        cout<<char(num+a-1)<<" ";
        num++;
      }
      cout<<endl;

    }
    return 0;
}