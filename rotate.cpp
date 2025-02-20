#include<iostream>
#include<vector>
using namespace std;

    vector<int> rotateArr( vector<int>nums , int k){

        vector<int>temp(nums.size());

        for( int i=0; i<nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }

        //copy temp into nums
        nums = temp;
        return nums;
    }

    void print( vector<int>v){
     for( int i=0; i<v.size(); i++){
        cout<< v[i]<<" ";
     }

    }
int main(){

    vector<int>arr;

    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(11);

  vector<int>ans = rotateArr(arr,2);
  print(ans);

}
