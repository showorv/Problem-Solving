#include<iostream>
using namespace std;

int binarySearch(const int arr[],int s, int e, int k){


    while( s<=e){
            int  mid = s+ (e - s) / 2;
        if( arr[mid] == k){
            return mid;
        }
        else if( arr[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }


    }
    return -1;
}


int getPivot(const int arr[], int n){

    int s=0;
    int e=n-1;




    while( s< e){
             int mid = s + (e - s) / 2;
        if( arr[mid]> arr[e]){
            s= mid+1;
        }
        else{
            e=mid;
        }

    }
    return s;
}


int findPosition(const int arr[], int n, int k){

    int pivot = getPivot( arr,n);

    if( k>= arr[pivot] && k<= arr[n-1]){
        return binarySearch( arr, pivot, n-1, k);
    }
    else{
        return binarySearch( arr, 0, pivot-1, k);
    }
}


int main(){
  int arr[5] = {50, 10, 20, 30, 40};

  cout<< "element at index: "<< findPosition( arr, 5,20);
  return 0;
}
