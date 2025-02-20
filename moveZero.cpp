
#include<iostream>
#include<vector>
using namespace std;

 vector<int> moveZero( vector<int> v){

    int nonZero =0;

    for( int j=0; j<v.size(); j++){
        if(v[j] != 0){
            swap( v[j], v[nonZero]);
            nonZero++;
        }
    }
    return v;
 }
void print( vector<int>v){

     for( int i=0; i<v.size(); i++){
    cout<< v[i]<<" ";
  }
    }
int main(){

  vector<int>arr;

  arr.push_back(0);
  arr.push_back(1);
  arr.push_back(0);
  arr.push_back(3);
  arr.push_back(12);

 vector<int> ans= moveZero(arr);

  print(ans);


}
