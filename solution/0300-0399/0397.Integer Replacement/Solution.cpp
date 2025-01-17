#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int integerReplacement(int N) {
        int ans = 0;
        long n = N;
        while (n != 1) {
            if ((n & 1) == 0)
                n >>= 1;
            else if (n != 3 && (n & 3) == 3)
                ++n;
            else
                --n;
            ++ans;
        }
        return ans;
    }
};