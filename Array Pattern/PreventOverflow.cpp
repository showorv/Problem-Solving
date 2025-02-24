
#include <iostream>
using namespace std;

//? 1/ Preventing Overflow /Handling large constraints (e.g., 1 ≤ N ≤ 10^9 or 1 ≤ A[i] ≤ 10^18).

//long long int bigNumber = 100000000000000LL; // 10^14 //storing large values

int main() {
    int a = 1e9, b = 2;
    long long int c = (long long)a * b; //! Avoiding integer overflow in large calculations.
    cout << c << endl;  // Output: 2000000000 (Correct)
    return 0;
}