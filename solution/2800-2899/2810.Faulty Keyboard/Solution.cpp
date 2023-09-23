#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string finalString(string s) {
        string t;
        for (char c : s) {
            if (c == 'i') {
                reverse(t.begin(), t.end());
            } else {
                t.push_back(c);
            }
        }
        return t;
    }
};