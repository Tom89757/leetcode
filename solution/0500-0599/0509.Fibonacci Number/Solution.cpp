#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1;
        while (n--) {
            int c = a + b;
            a = b;
            b = c;
        }
        return a;
    }
};