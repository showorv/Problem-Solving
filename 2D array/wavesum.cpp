#include <iostream>
#include <vector>
using namespace std;

vector<int> waveSum(vector<vector<int>> arr, int nRows, int mCols) {
    vector<int> ans;

    for (int col = 0; col < mCols; col++) {
        if (col & 1) {
            // Odd index column: traverse bottom to top
            for (int row = nRows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            // Even index column: traverse top to bottom
            for (int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> arr = {{2, 3, 4}, {4, 5, 6}};
    int nRows = arr.size();
    int mCols = arr[0].size();

    vector<int> result = waveSum(arr, nRows, mCols);

    // Print the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
