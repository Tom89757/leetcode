#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < 32; ++i) {
            int cnt = 0;
            for (int x : nums) {
                cnt += (x >> i) & 1;
            }
            cnt %= 3;
            ans |= cnt << i;
        }
        return ans;
    }
};