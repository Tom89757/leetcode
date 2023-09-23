#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long coloredCells(int n) {
        return 2LL * n * (n - 1) + 1;
    }
};