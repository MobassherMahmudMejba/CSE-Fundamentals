#include<iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if(a%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
        a>0? cout<<"Positive": cout<<"Negative";
    }
    return 0;
}