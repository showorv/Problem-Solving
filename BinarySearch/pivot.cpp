//find the pivot element index

#include<iostream>
using namespace std;


int getPivot( int arr[], int n){

    int s=0;
    int e=n-1;

    int mid = (s+e)/2;

    while( s< e){
        if( arr[mid]> arr[e]){
            s= mid+1;
        }
        else{
            e=mid;
        }

        mid = (s+e)/2;
    }
    return s;
}

int main(){

    int arr[5]={ 3,8,10,17,1};

    cout<< "Pivot at index no: "<<getPivot( arr,5)<<endl;
}
