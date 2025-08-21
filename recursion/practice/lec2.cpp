#include <iostream>
#include <string>
using namespace std;
void subStrings(string str,string output,int idx){
    if(idx>=str.length()){
        cout<< "->"<<output<<endl;
        return;
    }
    char ch = str[idx];
    //exclude
    subStrings(str,output,idx+1);
    //include
    output.push_back(ch);
    subStrings(str,output,idx+1);
}
int main(){
    string str ;
    string output = "";
    int idx = 0;
    cout<<"please enter the string : "<<endl;
    cin>>str;
    subStrings(str,output,idx);
    return 0;
}