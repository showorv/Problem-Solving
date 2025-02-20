#include<iostream>
using namespace std;

int nthStair( int n){

    if( n<0){
        return 0;
    }
    if( n==0){
        return 1;
    }

    //recursive

    int ans = nthStair(n-1)+ nthStair(n-2);

    return ans;
}


int main(){

    int n;
    cin>>n;

    int ans = nthStair(n);
    cout<<"ans: "<<ans;
}