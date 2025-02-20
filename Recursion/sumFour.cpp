#include<iostream>
using namespace std;


bool sumFour( int n){

    //base case

    if( n==1){
        return true;
    }

    if( n<=0 || n%4!=0){
        return false;
    }

    return sumFour( n/4);
}


int main(){

    int n;
    cin>>n;

    int ans = sumFour(n);

    cout<<"ans is:"<<ans<<endl;
}