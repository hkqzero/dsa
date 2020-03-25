#include "leetcode.h"

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<int> result;
    unordered_map<int,int> record;
    for (int i = 0; i < nums.size(); i++) 
    {
        int complement = target - nums[i];
        if (record.find(complement) != record.end()) 
        {
            result.push_back(i);
            result.push_back(record[complement]);
            break;
        }
        else
        {
            record[nums[i]] = i;
        }
    }
    return result;
}

bool isValid(string s) 
{
    // 字符串长度
    int length = s.size();

    // 长度不是2的倍数，则无效
    if (length % 2)
        return false;

    stack<char> st;
    char c;
    for (int i = 0; i < length; i++)
    {
        c = s[i];
        if(c == '}' || c == ')' || c == ']') 
        {
            if (st.size() == 0) return false;
            
            if (c == '}' && st.top() != '{') return false;
            if (c == ')' && st.top() != '(') return false;
            if (c == ']' && st.top() != '[') return false;

            st.pop();
        }
        else
            st.push(c);
    }
    return st.empty();
}

/********************最长连续序列************************/
int longestConsecutive(vector<int>& nums)
{
	unordered_set<int> nums_set;
	for (auto it = nums.begin(); it != nums.end(); ++it)
	{
		nums_set.insert(*it);
	}

	int len = 0;
	// vector<int>::iterator vIterator = nums.begin();
	for (auto it = nums.begin(); it != nums.end(); it++)
	{
		int temp_len = 1;
		int temp = *it + 1;
		while (nums_set.find(temp) != nums_set.end()) 
		{
			temp = temp + 1;
			temp_len = temp_len + 1;
		}
		len = (temp_len > len) ? temp_len : len;
	}

	return len;
}
/*******************************************************/


int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
{
    int start_pos = 0;
    int curr_tank = 0;
    int total_tank = 0;

    for (int i = 0; i < gas.size(); ++i)
    {
        curr_tank += gas[i] - cost[i];
        total_tank += gas[i] - cost[i];
        if (curr_tank < 0)
        {
            curr_tank = 0;
            start_pos++;
        }
    }
    if (total_tank > 0)
        return start_pos;
    else
        return -1;
}


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
