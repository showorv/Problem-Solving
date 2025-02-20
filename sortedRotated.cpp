#include<iostream>
#include<vector>
using namespace std;

    bool check( vector<int>nums){
        int count =0;
        int n= nums.size();

        for( int i=1; i<n; i++){
                //if condition false then count
            if( nums[i-1]> nums[i]){
                count++;
            }
        }
        //for last element
        if(nums[n-1]>nums[0]){
            count++;
        }

        return count<=1;
    }

int main(){

    vector<int>arr={ 3,5,7,1,6};

    cout<<check(arr);
}
