#include<iostream>
using namespace std;

char maxiOccur( string s){

    int arr[26]= {0};

    for( int i=0; i<s.length(); i++){
        char ch = s[i];

        int number =0;
        if( ch>='a' && ch<='z' ){

            number = ch- 'a';
        }else{
            number = ch - 'A'; // convert uppercase to index
        }

        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;

    for( int i=0; i<26;i++){

        if( maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalans = 'a'+ans; // Convert index back to character
    return finalans;
}



int main(){

    string s = "test";

    cout<<maxiOccur(s);
}
