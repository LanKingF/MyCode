#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

//void �ݹ�(int i,vector <int>&num, 
//	vector <int>&item, vector <vector<int>>&result)
//{
//	if (i >= num.size())
//	{
//		return;
//	}
//	item.push_back(num[i]);
//	result.push_back(item);
//	�ݹ�(i+1,num,item,result);
//}

class solution
{
public:
	vector<vector<int>> ����(vector<int> num)
	{
		vector<vector<int>> result;
		vector<int> item;
		result.push_back(item);
		�ݹ�(0,num,item,result);
		return result;
	};
private:
	void �ݹ�(int i, vector<int>& num,
		vector<int> &item, vector<vector<int>>& result)
	{
		if (i>=num.size())
		{
			return;
		}
		item.push_back(num[i]);
		result.push_back(item);
		�ݹ�(i + 1, num, item, result);
		item.pop_back();
		�ݹ�(i + 1, num, item, result);
	}
};
int main()
{
	vector<int> num;
	num.push_back(1);
	num.push_back(2);
	num.push_back(3);
	vector <int> item;
	vector <vector<int>> result;
	solution s;
	s.����(num);
	system("pause");
	return 0;
}