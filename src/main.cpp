#include "leetcode.h"
#include "min_stack.h"



int main(int argc, char *argv[])
{
#ifdef _TWO_SUM_
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(10);
	nums.push_back(20);
	nums.push_back(3);
	vector<int> result = twoSum(nums, 5);
	PRINT_VECTOR_INT(result);
#endif

#ifdef _ISVALID_
	string s = "({}})";
	bool b = isValid(s);
	printf("isValid: %d\n", b);
#endif

#ifdef _LONGEST_CONSECUTIVE_
	vector<int> v = {2, 4, 5, 6, 7, 9};
	int maxlen = longestConsecutive(v);
	printf("max consecutive len: %d\n", maxlen);
#endif

#ifdef _CANCOMPLETECIRCULT_
    vector<int> v = {2, 4, 5, 6, 7, 9};
    canCompleteCircuit(v, v);
#endif

    return 0;
}
