#include <iostream>
using namespace std;

//? 2/ Two Pointer Pattern
//! Use Case: Searching, sorting, and subarray problems
//! Key Idea: Use two indices (one from the start, one from the end) to process an array in O(N).

//Example: Finding a Pair that Sums to a Target

bool hasPairWithSum(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        (sum < target) ? left++ : right--;
    }
    return false;
}