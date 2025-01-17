#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        long a = nums[i], b = nums[j];
        int ans = 0;
        while (i < j) {
            if (a < b) {
                a += nums[++i];
                ++ans;
            } else if (b < a) {
                b += nums[--j];
                ++ans;
            } else {
                a = nums[++i];
                b = nums[--j];
            }
        }
        return ans;
    }
};