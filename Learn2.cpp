#include <string>
#include <iostream>  
#include <vector>
#include<list>
#include<deque>
#include<map>

using namespace std;
//bool findint(vector<int>::iterator begin,
//	vector<int>::iterator end, int iter);/////函数的声明
int main()
{
	//map<int, string> a;//map是映射，不可以重复
	//								  //key键  value值
	//a.insert(map<int, string>::value_type(1, "one"));//四种插入方法
	//a.insert(make_pair(2, "two"));
	//a.insert(pair<int, string>(3, "three"));
	//a[4] = "four";
	//cout << a[2] << endl;///这是查找，非常简单，输入键得到值
	//int j=a.erase(3);//这是删除，通过key值进行删除，删除成功后返回1	
	//cout << j << endl;
	//map<int, string>::const_iterator i;////用迭代器将其依次显示出来
	//for (i = a.begin(); i != a.end(); ++i)
	//{
	//	cout << i->first << ","<<i->second<<endl;
	//}
	
	//multimap<int, string> b;//这个可以重复
	//b.insert(map<int, string>::value_type(1, "one"));//三种插入方法
	//b.insert(make_pair(2, "two"));
	//b.insert(pair<int, string>(3, "three"));///重复插入
	//b.insert(pair<int, string>(3, "three"));
	//multimap<int, string>::const_iterator fi;
	//fi = b.find(3);//用迭代器进行查找,这个可能查找到重复数据
	//cout << fi->first << ","<<fi->second << endl;
	//b.erase(b.lower_bound(3), b.upper_bound(3));//删除所有的3
	//map<int, string>::const_iterator i;////用迭代器将其依次显示出来
	//for (i = b.begin(); i != b.end(); ++i)
	//{
	//	cout << i->first << ","<<i->second<<endl;
	//}

	//vector<int> b;////这是三种顺序容器
	//list<int> c;
	//deque<int> a;
	//a.push_back(1);
	//a.push_back(4);
	//a.push_back(6);	
	
	//a.insert(ite,3);//在ite前面插入3
		//cout << a[2]<< endl;		
	//bool d=findint(a.begin(), a.end(), 3);
	//cout << d << endl;

	//substr   append   replace 这三个函数只能用于string类型
	//string s("hello world");
	//string s2 = s.substr(6, 5);//substr是将s的一部分给s2；
	//cout << s2 << endl;
	//s.append("123");//append是在最后插入
	//cout << s << endl;
	//s.replace(2, 3, "qwe");//replac是替换
	//cout << s << endl;

	string s = "q1w2e3";
	string num = "0123456789";
	string::size_type pos = 0;
	;
	while ((pos = s.find_first_of(num, pos)) 
		//find_first_of的作用是查找：在s中查找num中的内容，查到第一个停止并返回一个下标；
		!= string::npos)
	{
		cout << s[pos] << endl;
		pos++;
	}
	system("pause");
	return 0;
}
//bool findint(vector<int>::iterator begin,
//	vector<int>::iterator end, int iter)////找到一个和iter相等的数
//{
//	while (begin != end)
//	{
//		if (*begin == iter)
//			break;
//		else
//			++begin;
//	}
//	if (begin != end)
//		return true;
//	else
//		return false;
//}
