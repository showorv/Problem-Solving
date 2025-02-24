//? prefix sum  =>>Instead of recalculating the sum every time (O(n)), we can get it in O(1) using prefix sums.

// Use Case: Range Sum Queries, Difference Array
// Key Idea: Precompute the sum of elements from index 0 to i, so that any subarray sum can be found in O(1).


//! Find Sum in Range [L, R]

// Declare an array to store prefix sums for quick range sum queries
int prefixSum[100001];

void buildPrefixSum(int arr[], int n) {
    // Initialize the first element of prefixSum with the first element of arr
    prefixSum[0] = arr[0];

    // Build the prefix sum array
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i]; 
        // Each element at index i stores the sum of all elements from index 0 to i
}

int rangeSum(int L, int R) {
    // If L == 0, return prefixSum[R] directly (sum from index 0 to R)
    // Otherwise, return the sum from index L to R using the formula:
    // prefixSum[R] - prefixSum[L-1]
    return L == 0 ? prefixSum[R] : prefixSum[R] - prefixSum[L - 1];
}


//For arr[] = {2, 3, 7, 1, 5}, the prefix sum array is:
//prefixSum[] = {2, (2+3)=5, (5+7)=12, (12+1)=13, (13+5)=18}

For arr[] = {2, 3, 7, 1, 5}, prefix sum: {2, 5, 12, 13, 18}.

// Query: rangeSum(1, 3)

// Sum
// (
// 1
// ,
// 3
// )
// =
// prefixSum
// [
// 3
// ]
// −
// prefixSum
// [
// 0
// ]
// =
// 13
// −
// 2
// =
// 11
// Sum(1,3)=prefixSum[3]−prefixSum[0]=13−2=11
// (Sum of {3, 7, 1})