#include<iostream>
using namespace std;

int factorial(int n){

    if(n==0){
        return 1;
    }


//! 5! = 5 * 4! =>> n! = n * (n-1) 
    int small = factorial(n-1);
    int big = n * small;

    return big;
}

int main(){

    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<"Answer is:"<<ans<<endl;
}