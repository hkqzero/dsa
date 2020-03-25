#ifndef ___LEETCODE_H___
#define ___LEETCODE_H___

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

#include <string>
#include <vector>
#include <stack>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define PRINT_VECTOR_INT(vec) \
    {for (int i = 0; i < vec.size(); i++) printf("%d\n", vec[i]);}

/*
 * 题目：两数之和，给定一个数组和一个目标值，请在数组中找出和为目标值的两个整数，并返回数组下标
 * 解法：遍历数组，将数组的每个元素以<值，索引>的形式插入哈希表中，求目标值和每个元素的差值，并检查差值是否在哈希表中，找到则返回
 * 时间复杂度：O(n)
 * 空间复杂度：O(n)
 */
// #define _TWO_SUM_
vector<int> twoSum(vector<int>& nums, int target);

/*
 * 题目：给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 * 解法：
    1）遍历字符串，遇到左括号则入栈。
    2）遇到右括号，则与栈顶元素比较，若匹配，则弹出栈顶元素，否则返回无效。
    3）遍历结束后，若栈中无元素则有效，否则无效。
 * 时间复杂度：O(n)
 * 空间复杂度：O(n)
 */
//#define _ISVALID_
bool isValid(string s);


/*
 * 题目：无重复字符的最长子串，给定一个字符串，请找出其中不包含重复字符的最长子串的长度
 * 解法：
 * 时间复杂度：
 * 空间复杂度：
 */
// #define _TWO_SUM_

/*
 * 题目：最长连续序列，给定一个未排序的数组，找出最长连续序列的长度
 * 解法：
 * 时间复杂度：
 * 空间复杂度：
 */
// #define _LONGEST_CONSECUTIVE_
int longestConsecutive(vector<int>& nums);

/*
 * 1.贪心算法
 * 2.动态规划
 * 3.分治算法
 * 4.暴力算法
*/

/*
 * 题目：有一条环路上有N个加油站，其中第i个加油站有汽油gas[i]升，从第i个加油站到第i+1个加油站消耗汽油cost[i]升，
 *      你有一辆油箱容量无限的车，从任意一加油站出发，开始邮箱为空，如果你可以绕环路一周，则返回出发加油站的编号，否则返回-1
 * 解法：
 * 时间复杂度：
 * 空间复杂度：
 */
#define _CANCOMPLETECIRCULT_
int canCompleteCircuit(vector<int>& gas, vector<int>& cost);

#endif

