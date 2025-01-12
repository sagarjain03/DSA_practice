//Seive of eratosthenes
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int countPrime(int primes){
  int count = 0;
  vector <bool> isPrime(primes+1,true);
  for(int i=2;i<primes;i++){
    if(isPrime[i]){
      cout<<i<<" ";
      count++;
      for(int j=i*2;j<primes;j=j+i){
        isPrime[j]=false;
      }
    }

  }
  return count;
}

int main() {
   int primes;
   cout<<"enter the limie upto which you wanna know the number of primes "<<endl;
   cin>>primes;

   cout<<endl<<countPrime(primes);
    return 0;
}