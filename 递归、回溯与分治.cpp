#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;

//void µÝ¹é(int i,vector <int>&num, 
//	vector <int>&item, vector <vector<int>>&result)
//{
//	if (i >= num.size())
//	{
//		return;
//	}
//	item.push_back(num[i]);
//	result.push_back(item);
//	µÝ¹é(i+1,num,item,result);
//}

//class solution
//{
//public:
//	vector<vector<int>> »ØËÝ(vector<int> num)
//	{
//		vector<vector<int>> result;
//		vector<int> item;
//		result.push_back(item);
//		µÝ¹é(0,num,item,result);
//		return result;
//	};
//private:
//	void µÝ¹é(int i, vector<int>& num,
//		vector<int> &item, vector<vector<int>>& result)
//	{
//		if (i>=num.size())
//		{
//			return;
//		}
//		item.push_back(num[i]);
//		result.push_back(item);
//		µÝ¹é(i + 1, num, item, result);
//		item.pop_back();
//		µÝ¹é(i + 1, num, item, result);
//	}
//};

//class solution//////Éú³ÉºÏ·¨µÄÀ¨ºÅ×é³É
//{
//public:
//	vector<string> kuohao(int n)
//	{
//		vector<string> result;
//		generate(" ", n, n, result);
//		return result;
//	}
//private:
//	void generate(string item, int l, int r, vector<string> &result)
//	{
//		if (l == 0 && r == 0)
//		{
//			result.push_back(item);
//			return;
//		}
//		if (l > 0)
//		{
//			generate(item + '(', l - 1, r, result);
//		}
//		if (l < r)
//		{
//			generate(item + ')', l, r - 1, result);
//		}
//	}
//};

int main()
{
	vector< vector<int> > mark;
	for (size_t i = 0; i < 3; ++i)
	{
		mark.push_back(vector<int>());
		for (size_t j = 0; j < 4; j++)
		{
			mark[i].push_back(0);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << mark[i][j] << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}