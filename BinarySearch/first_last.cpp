// find the first and last index of the element


#include<iostream>
using namespace std;

int firstOcc( int arr[], int n, int key){

     int s=0;
     int e= n-1;
     int ans=-1;
     int mid= (s+e)/2;

     while( s<=e){
        if( arr[mid]== key){
            ans=mid;
            e= mid-1;
        }
        else if( arr[mid] >key){
            e=mid-1;
        }
        else if( arr[mid]<key){
                s=mid+1;

        }
        mid= (s+e)/2;
     }
}

int lastOcc( int arr[], int n, int key){

     int s=0;
     int e= n-1;
     int ans=-1;
     int mid= (s+e)/2;

     while( s<=e){
        if( arr[mid]== key){
            ans=mid;
             s= mid+1;

        }
        else if( arr[mid] >key){
            e=mid-1;
        }
        else if( arr[mid]<key){
                 s=mid+1;

        }
        mid= (s+e)/2;
     }
}

int main(){

    int arr[5]={1,2,3,3,3};
    int total = lastOcc( arr, 5,3)- firstOcc( arr, 5,3) +1;

    cout<<"First element is: "<<firstOcc( arr, 5,3)<<endl;
    cout<<"last element is: "<<lastOcc( arr, 5,3)<<endl;

    cout<< "Total occurance:  "<< total;

}
