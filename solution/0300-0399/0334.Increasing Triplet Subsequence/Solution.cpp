#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int mi = INT_MAX, mid = INT_MAX;
        for (int num : nums) {
            if (num > mid) return true;
            if (num <= mi)
                mi = num;
            else
                mid = num;
        }
        return false;
    }
};