#include<iostream>
using namespace std;

void print ( int arr[], int s,int e){

    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
bool binarySearch ( int *arr, int s, int e, int k){

    cout<<endl;
    print(arr,s,e);

    //base case

    //element not found
    if(s>e){
        return false;
    }
    //element thakle
    int mid = s+(e-s)/2;

    if( arr[mid]==k){
        return true;
    }

    //rr

    if( arr[mid] < k){
        return binarySearch( arr, mid+1, e, k);
    }
    else{
        return binarySearch( arr, s, mid-1, k);
    }
}


int main(){

    int arr[6] = {1,3,5,7,8,12};
    int k = 19;

    bool ans = binarySearch( arr, 0,5,k);
    if(ans){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}