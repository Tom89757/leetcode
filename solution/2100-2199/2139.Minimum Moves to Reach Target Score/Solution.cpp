#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        if (target == 1) return 0;
        if (maxDoubles == 0) return target - 1;
        if (target % 2 == 0 && maxDoubles) return 1 + minMoves(target >> 1, maxDoubles - 1);
        return 1 + minMoves(target - 1, maxDoubles);
    }
};