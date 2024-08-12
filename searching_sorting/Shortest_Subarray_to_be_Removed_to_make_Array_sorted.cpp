class Solution { // frash
public: // check [1,2,3,10,0,7,8,9] as well
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int az = arr.size(), l = 0, r = az - 1;
        while (r > 0 && arr[r - 1] <= arr[r]) r--; // Right-side sequence
        int ans = r; // If all right-side should be removed
        while (l < r && (l == 0 || arr[l - 1] <= arr[l])) { // Merging the sequences from left and right
            while (r < az && arr[r] < arr[l]) r++; // Independent of the outer loop changes at most O(n)
            ans = min(ans, r - l - 1);
            l++;
        }
        return ans;
    }
};