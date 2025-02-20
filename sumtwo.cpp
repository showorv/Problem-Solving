#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseAns( vector<int>v){

    int s = 0;
    int e = v.size()-1;

    while( s<e){
        swap( v[s++], v[e--]);
    }
    return v;
}
vector<int> sumTwo( vector<int>&a, int n, vector<int>&b, int m){

    int i = n-1;
    int j= m-1;
    int carry = 0;
    vector<int>ans;

    while( i>=0 && j>=0){
        int sum = a[i] + b[j] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while( i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
     while( j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while( carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);

    }

    return reverseAns(ans); // revserse nahole ans ulta ashbe
}

void print( vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){

    vector<int> arr = {2, 3, 4};
    vector<int> arr2 = {5};

 vector<int>ans = sumTwo(arr,arr.size(), arr2,arr2.size());

 print(ans);
}
