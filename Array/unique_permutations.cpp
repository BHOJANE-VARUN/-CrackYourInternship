class Solution {
  public:
    bool nextPermutation(vector<int>& arr)
{
    // Find the first element that is not in decreasing order from right
    auto it = is_sorted_until(arr.rbegin(), arr.rend());

    // If all elements are in decreasing order, reverse the array
    if (it == arr.rend()) {
        return false;
    } else {
        // Find the next permutation
        auto next_it = upper_bound(arr.rbegin(), it, *it);
        swap(*it, *next_it);
        reverse(arr.rbegin(), it);
        return true;
    }
}
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        ans.push_back(arr);
        while(nextPermutation(arr))
        {
            ans.push_back(arr);
        }
        return ans;
    }
};