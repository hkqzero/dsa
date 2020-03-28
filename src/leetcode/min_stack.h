#ifndef ___MIN_STACK_H___
#define ___MIN_STACK_H___

#include "common.h"

/*
 * 最小栈
 * 
 * 设计一个支持push、pop、top操作，并能在常数时间内检索到最小元素的栈
 *  push(x)
 *  pop()
 *  top()
 *  getMin()
 */
 
class MinStack
{
public:
	MinStack(): min_(INT_MAX) {}
	~MinStack() {}
	
	void push(int x)
	{
		if (x < min_)
		{
			min_ = x;
		}
		min_stack_.push(make_pair(min_, x));
	}

	void pop()
	{
		min_stack_.pop();
		if (min_stack_.empty())
		{
			min_ = INT_MAX;
		}
		else 
		{
			min_ = min_stack_.top().first;
		}
	}

	int top()
	{
		return min_stack_.top().second;
	}

	int getMin()
	{
		return min_stack_.top().first;
	}


private:
	int min_;
	stack<pair<int, int>> min_stack_;
};


#endif

