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

//class solution
//{
//public:
//	vector<vector<int>> ����(vector<int> num)
//	{
//		vector<vector<int>> result;
//		vector<int> item;
//		result.push_back(item);
//		�ݹ�(0,num,item,result);
//		return result;
//	};
//private:
//	void �ݹ�(int i, vector<int>& num,
//		vector<int> &item, vector<vector<int>>& result)
//	{
//		if (i>=num.size())
//		{
//			return;
//		}
//		item.push_back(num[i]);
//		result.push_back(item);
//		�ݹ�(i + 1, num, item, result);
//		item.pop_back();
//		�ݹ�(i + 1, num, item, result);
//	}
//};

class solution//////���ɺϷ����������
{
public:
	vector<string> kuohao(int n)
	{
		vector<string> result;
		generate(" ", n, n, result);
		return result;
	}
private:
	void generate(string item, int l, int r, vector<string> &result)
	{
		if (l == 0 && r == 0)
		{
			result.push_back(item);
			return;
		}
		if (l > 0)
		{
			generate(item + '(', l - 1, r, result);
		}
		if (l < r)
		{
			generate(item + ')', l, r - 1, result);
		}
	}
};
int main()
{
	solution a;
	vector<string>result=a.kuohao(3);
	for (int i = 0; i != result.size(); i++)
		cout << result[i].c_str() << " ";
	cout << endl;
	system("pause");
	return 0;
}