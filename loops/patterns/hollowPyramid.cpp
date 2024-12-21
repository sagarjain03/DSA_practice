#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    for(int i=1;i<=4;i++){
      for(int j=i;j<=3;j++){
        cout<<" ";
      }
      for(int j=1;j<=4;j++){
        if(j==1){
          cout<<"*"<<" ";
        }
        else{
          cout<<"*"<<" ";
          for(int j=1;j<=i;j++){
            cout<<" ";

          }
          cout<<"*"<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
}