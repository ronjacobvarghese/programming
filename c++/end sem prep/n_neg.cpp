
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the minimum number of elements
// whose sign must be flipped to get the positive
// sum of array elements as close to 0 as possible
int solve(int A[], int n)
{

    // Array of unordered_map of size=2.
    unordered_map<int, int> dp[2];

    // boolean variable used for toggling between maps
    bool flag = 1;

    // Calculate the sum of all elements of the array
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += A[i];

    // Initializing first map(dp[0]) with INT_MAX because
    // for i=0, there are no elements in the array to flip
    for (int i = -sum; i <= sum; i++)
        dp[0][i] = INT_MAX;

    // Base Case
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cout<<flag<<endl;
        for (int j = -sum; j <= sum; j++)
        {
            dp[flag][j] = INT_MAX;
            if (j - A[i - 1] <= sum && j - A[i - 1] >= -sum)
                dp[flag][j] = dp[flag ^ 1][j - A[i - 1]];
            if (j + A[i - 1] <= sum && j + A[i - 1] >= -sum && dp[flag ^ 1][j + A[i - 1]] != INT_MAX)
                dp[flag][j] = min(dp[flag][j],dp[flag ^ 1][j + A[i - 1]] + 1);
        }

        // For toggling
        flag = flag ^ 1;

    }

    // Required sum is minimum non-negative
    // So, we iterate from i=0 to sum and find
    // the first i where dp[flag ^ 1][i] != INT_MAX
    for (int i = 0; i <= sum; i++)
    {
        if (dp[flag ^ 1][i] != INT_MAX)
            return dp[flag ^ 1][i];
    }

    // In worst case we will flip max n-1 elements
    return n - 1;
}

// Driver code
int main()
{
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << solve(arr, n);

    return 0;
}