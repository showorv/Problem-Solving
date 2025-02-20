#include<iostream>
using namespace std;

//find the suqare root without the pow()

// long long use kora charao run hoise.
long long int square( int n){

         int s=0;
         int e=n;
     long long int mid = (s+e)/2;

      long long  int ans=-1;

    while( s<=e){
           long long int square = mid*mid;

        if( square == n){
            return mid;
        }
        else if( square < n){
           ans = mid;
           s=mid+1;
        }
        else{
                 e= mid-1;

        }
        mid = (s+e)/2;

    }
    return ans;
}

//for fractional squareroot

    double fractional( int n, int precision, int temp){
        double factor =1;
        double ans = temp;

       for( int i=0; i<precision; i++){
        factor = factor/10;

        for( double j=ans; j*j<n; j= j+factor ){
            ans =j;
        }
       }
       return ans;
    }

int main(){

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int temp = square(n);
    //cout<<temp;

    cout<< "Anser is: "<< fractional( n, 3, temp)<<endl;



}
