#include <iostream>
using namespace std;

//? 2/ Two Pointer Pattern
//! Use Case: Searching, sorting, and subarray problems
//! Key Idea: Use two indices (one from the start, one from the end) to process an array in O(N).

//Example: Finding a Pair that Sums to a Target

int maxSumSubarray(int arr[], int n, int k) { //If k = 3, the window size is 3, meaning we always consider a subarray of 3 elements at a time.
    // Initialize two variables:
    // maxSum will store the maximum sum found among all subarrays of size k
    // windowSum will store the sum of the current window of size k
    int maxSum = 0, windowSum = 0;

    // Calculate the sum of the first window of size k
    for (int i = 0; i < k; i++) 
        windowSum += arr[i]; // Add the first k elements to windowSum

    // Now, slide the window across the array from index k to n-1
    for (int i = k; i < n; i++) {
        // Slide the window: add the new element and remove the leftmost element
        windowSum += arr[i] - arr[i - k];

        // Update maxSum to store the maximum sum found so far
        maxSum = max(maxSum, windowSum);
    }

    // Return the maximum sum found among all subarrays of size k
    return maxSum;
}


//First window (first k elements): [2, 1, 5] → Sum = 2 + 1 + 5 = 8
// Slide right (remove 2, add 1): [1, 5, 1] → Sum = 8 - 2 + 1 = 7
// Slide right (remove 1, add 3): [5, 1, 3] → Sum = 7 - 1 + 3 = 9
// Slide right (remove 5, add 2): [1, 3, 2] → Sum = 9 - 5 + 2 = 6