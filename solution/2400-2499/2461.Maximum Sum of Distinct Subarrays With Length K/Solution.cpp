#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        using ll = long long;
        int n = nums.size();
        unordered_map<int, int> cnt;
        ll s = 0;
        for (int i = 0; i < k; ++i) {
            cnt[nums[i]]++;
            s += nums[i];
        }
        ll ans = cnt.size() == k ? s : 0;
        for (int i = k; i < n; ++i) {
            cnt[nums[i]]++;
            s += nums[i];
            cnt[nums[i - k]]--;
            s -= nums[i - k];
            if (cnt[nums[i - k]] == 0) {
                cnt.erase(nums[i - k]);
            }
            if (cnt.size() == k) {
                ans = max(ans, s);
            }
        }
        return ans;
    }
};