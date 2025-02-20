#include<iostream>
using namespace std;

void print(int n){

    if(n==0){
        return;
    }
//!head recursion

    // print(n-1);
    // cout<<n<<endl;

    //!tail recursion

    cout<< n<<endl;
    print(n-1);
}

int main(){

    int n;
    cin>>n;

    cout<<endl;
    print(n);
    
}