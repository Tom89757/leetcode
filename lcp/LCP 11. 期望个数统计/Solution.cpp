#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int expectNumber(vector<int>& scores) {
        unordered_set<int> s(scores.begin(), scores.end());
        return s.size();
    }
};