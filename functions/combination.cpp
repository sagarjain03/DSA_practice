#include <iostream>
#include <vector>
#include <string>
using namespace std;

int factorial(int num){
  int fact = 1;
  for(int i=1;i<=num;i++){
     fact*=i;
  }
  return fact;
}

int combination(int n,int r){
  return factorial(n)/(factorial(r)*factorial(n-r));

}

int main() {
  cout<<combination(5,2);
    
    return 0;
}