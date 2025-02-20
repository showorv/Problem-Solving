#include <iostream>
#include <vector>
using namespace std;

    vector<int>spiralMatrix ( vector<vector<int>>arr){
        vector<int> ans;
        int row = arr.size();
        int col = arr[0].size();
        int count =0;
        int total = row*col;

        //index initialization

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;

        while( count <total){

            //print starting row

            for( int index = startingCol; count <total && index <=endingCol; index++){
                ans.push_back(arr[startingRow][index]);
                count++;
            }
            startingRow++;

            //print ending col

            for( int index = startingRow; count <total && index <= endingRow; index++){
                ans.push_back(arr[index][endingCol]);
                count++;
            }
            endingCol--;

            //ending row

            for( int index = endingCol; count <total && index>=startingCol; index--){
                ans.push_back(arr[endingRow][index]);
                count++;
            }
            endingRow--;

            //starting col

            for( int index = endingRow; count <total && index>=startingRow; index--){
                ans.push_back(arr[index][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;

    }






int main(){


    vector<vector<int>> arr = {{2, 3, 4}, {4, 5, 6}};

     vector<int> result = spiralMatrix(arr);

      for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
