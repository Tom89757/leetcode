#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        return (num - 1) % 9 + 1;
    }
};