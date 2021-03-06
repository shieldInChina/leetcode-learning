/**
 * <CLIMBING STAIR>
 *
 * You are climbing a stair case. It takes n steps to reach to the top.
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?                                                                                                                                                                        
 *
 */


#include <iostream>
#include <stdio.h>
using namespace std;

class Solution {
public:
    int climbStair(int n) {
        /**
         * @brief
         * 设f(n)为爬n阶楼梯的不同方法数, 从n-1阶爬到n阶存在两种可能:
         *
         * 1. 从n-1阶前进一步
         * 2. 从n-1阶前进两步
         *
         * 原问题可抽象为:
         *    f(n) = f(n-1) + f(n-2) 斐波那契数列
         *
         * @param
         *    n: int; the number of step of the stair.
         */

        int prev = 0;
        int cur = 1;
        for (int i=1; i<=n; i++) {
            int tmp = cur;
            cur += prev;
            prev = tmp;
        }
        return cur;
    }
};


int main(int argc, char **argv) {
    Solution solution;
    int num_step = solution.climbStair(3);
    printf("The number of ways to climb to the top is %d.\n", num_step);
}