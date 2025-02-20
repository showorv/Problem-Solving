#include<iostream>
using namespace std;


bool isSorted (int *arr, int size){

    //base case

    if(size==0 || size == 1){
        return true;
    }

    //processing
    if(arr[0]>arr[1]){
        return false;
    }

    //RR

    bool remainingPart = isSorted( arr+1, size-1);
    return remainingPart;
}


int  main(){

    int arr[5] = {1,7,3,4,5};

    bool ans = isSorted(arr,5);

    if(ans){
        cout<<"Arra is sorted";
    }else{
        cout<<"Arr is unsorted";
    }

}