//? Kadane’s Algorithm (Maximum Subarray Sum)

//Use Case: Finding the largest sum of any contiguous subarray
//Key Idea: Keep track of the max sum ending at index i and update the global maximum.

//! Maximum Subarray Sum

int maxSubArraySum(int arr[], int n) {
    int maxSum = arr[0], currSum = arr[0];
    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}