#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int s = 0, n = 0;
        for (int x : nums) {
            if (x % 6 == 0) {
                s += x;
                ++n;
            }
        }
        return n == 0 ? 0 : s / n;
    }
};