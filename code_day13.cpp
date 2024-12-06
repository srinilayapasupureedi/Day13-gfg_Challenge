int missingNumber(vector<int> &arr) {
        // Your code here
      int n = arr.size();

    // Step 1: Rearrange numbers to their correct positions
    for (int i = 0; i < n; ++i) {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            // Swap arr[i] with arr[arr[i] - 1]
            swap(arr[i], arr[arr[i] - 1]);
        }
    }

    // Step 2: Find the first index where the number is not i+1
    for (int i = 0; i < n; ++i) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }

    // If all numbers are correctly placed, return n+1
    return n + 1;
}
