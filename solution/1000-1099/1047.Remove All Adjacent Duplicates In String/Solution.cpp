#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        string stk;
        for (char c : s) {
            if (!stk.empty() && stk[stk.size() - 1] == c) {
                stk.pop_back();
            } else {
                stk += c;
            }
        }
        return stk;
    }
};