#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumNums(int n) {
        n && (n += sumNums(n - 1));
        return n;
    }
};