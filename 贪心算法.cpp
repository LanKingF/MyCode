#include<vector>
#include<iostream>
#include<string>
using namespace std;



class solution////////寻找摇摆序列：即相邻元素的差正负交替出现
{
public:
	int wiggleMaxLength(vector<int>& nums) 
	{
		if (nums.size() < 2) 
		{
			return nums.size();
		}
		static const int BEGIN = 0;
		static const int UP = 1;
		static const int DOWN = 2;
		int STATE = BEGIN;
		int max_length=1;

		for (int i = 1; i < nums.size(); i++) 
		{
			switch (STATE) 
			{
			case BEGIN:
				if (nums[i - 1]<nums[i])///////第一个空 
				{
					STATE = UP;
					max_length++;
				}
				else 
				if (nums[i - 1]>nums[i]) 
				{
				    STATE = DOWN;       ///////第二个空
					max_length++;
				}
				break;
			case UP:
				if (nums[i - 1]>nums[i])///////第三个空
				{
					STATE = DOWN;
					max_length++;        //////第四个空
				}
				break;
			case DOWN:
				if (nums[i - 1]<nums[i])///////第五个空
				{
					STATE = UP;
					max_length++;
				}
				break;
			}
		}
		return max_length;
	}
	string removeKdigits(string num, int k) 
	{
		vector<int> s;
		string result = "";
		for (int i = 0; i < num.length(); i++) 
		{
			int number = num[i] - '0';
			while (s.size() != 0 && s[s.size() - 1]>number && k>0) 
			{
				s.pop_back();
				k--;
			}
			if (number != 0 || s.size() != 0) 
			{
				s.push_back(number);
			}
		}
		while (s.size() != 0 && k > 0) 
		{
			s.pop_back();
			k--;
		}
		for (int i = 0; i < s.size(); i++) 
		{
			result.append(1, '0' + s[i]);
		}
		if (result == "") 
		{
			result = "0";
		}
		return result;
	}
};

int main()
{
	/*vector<int> a;
	a.push_back(1);
	a.push_back(5);
	a.push_back(18);
	a.push_back(12);
	a.push_back(9);
	a.push_back(21);
	a.push_back(8);
	a.push_back(3);
	a.push_back(0);
	a.push_back(12);
	solution s;
	cout << s.wiggleMaxLength(a) << endl;*/
	solution s;
	string b = "1432219";
	int k = 3;
	s.removeKdigits(b, k);
	cout << s.removeKdigits(b, k) << endl;
	system("pause");
	return 0;
}