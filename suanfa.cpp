#include<algorithm>
#include<numeric>
#include<functional>
#include<iostream>
#include<set>
#include<vector>
#include<deque>
#include<list>
#include<string>
#include<iterator>


using namespace std;

////在for_each简介中用到的函数////

//class PrintInt
//{
//public:
//	void operator()(int elem) const
//	{
//		cout << elem << ' ';
//	}
//};
//class MeanValue
//{
//private:
//	long num;
//	long sum; 
//public:
//	MeanValue() :num(0), sum(0) {}
//	void operator()(int elem)
//	{
//		num++;
//		sum += elem;
//	}
//	double value()
//	{
//		return static_cast<double> (sum) / static_cast<double>(num);
//	}
//
//};


int main()
{
	//////函数适配器、预定义函数简介////

	//vector<int> vec;
	//for (int i = 1; i <= 9; ++i)
	//	vec.push_back(i);
	//int num1,num2;
	//num1 = count(vec.begin(),vec.end(),5);//统计vec中有几个5；
	//cout << num1 << endl;
	////                                     函数适配器   函数对象
	////                                                   elem    >  4?
	//num2 = count_if(vec.begin(), vec.end(), bind2nd ( greater<int>(),4));
	////统计大于4的有几个，count_if能够对函数进行操作，bind2nd是函数适配器，函数适配器还有bind1st；
	////greater是c++的预定义函数，即c++自带的函数
	//cout << "大于4的数有：" << num2 << "个" << endl;

	//////查找算法（无论是否排序）/////

	//deque<int> a, b;
	//for (int i = 1; i <= 9;i++)
	//	a.insert(a.end(),i);
	//for (int i = 1; i <= 9; i++)
	//	a.insert(a.end(), i);
	//for (int i = 4; i <= 6; i++)
	//	b.insert(b.end(), i);
	//for (deque<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << ' ';
	//cout << endl;
	//for (deque<int>::iterator i = b.begin(); i != b.end(); i++)
	//	cout << *i << ' ';
	//cout << endl;
	//deque<int>::iterator pos
	//	= search(a.begin(), a.end(), b.begin(), b.end());
	////search函数的用法：在a.begin()和a.end()之间中查找b中的数据,但是只查找第一个且是正向查找
	// while (pos != a.end())
	// {
	//	 cout << "找到了！ 位置是：" << distance(a.begin(), pos) + 1<<endl;
	//	 ++pos; 
	//	 pos = search(pos, a.end(), b.begin(), b.end());//search函数的用法：在pos和a.end()之间中查找b中的数据	
	// }
	// pos = find_end(a.begin(), a.end(), b.begin(), b.end());
	// //find_end进行查找时，找到的是最后一个符合条件的；
	//cout << "使用find_end进行查找，查找的是最后一个，位置是：" << distance(a.begin(), pos) + 1 << endl;

	//////已序区间查找算法//////

	//list<int> a;
	//for (int i = 1; i <= 9;i++)
	//	a.insert(a.end(),i);
	//for (int i = 1; i <= 9; i++)
	//	a.insert(a.end(), i);
	//a.sort();//使用已序区间的查找方法，查找之前必须排序
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << " "; cout << endl;
	//list<int>::iterator pos1;
	/////////////////////////
	//pos1 = lower_bound(a.begin(), a.end(), 5);
	////lower_bound是查找第一个5的位置，指示的是第一个5的位置
	//cout << distance(a.begin(), pos1) + 1 << endl;
	////////////////////////
	//pos1 = upper_bound(a.begin(), a.end(),5);
	////upper_bound是查找最后一个5的位置，但是指示的是最后一个5的后一个位置，这是
	////为了查找出来后方便插入，如：
	////////////////////////
	//a.insert(upper_bound(a.begin(),a.end(),5),5);
	////在查找出的最后一个5后面插入一个数
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << " "; cout << endl;
	//cout << distance(a.begin(), pos1) + 1 <<endl;
	//pair < list<int>::iterator, list<int>::iterator> range;
	//////////////////////////////
	//range = equal_range(a.begin(), a.end(), 5);
	////equal_range相当于up和low，返回两个位置
	//cout << distance(a.begin(), range.first) + 1 << endl;
	//cout << distance(a.begin(), range.second) + 1 << endl;////

	/////for_each简介/////

	/*vector<int> a;
	for (int i = 1; i <= 9;i++)
		a.push_back(i);
	for_each(a.begin(), a.end(), PrintInt());
	MeanValue mv=for_each(a.begin(), a.end(), MeanValue());
	cout << "平均值："<< mv.value() << endl;*/

	////区间比较/////

	////equal(b,e,b2)////比较是否相等
	////equal(b,e,b2,p)
	////mismatch(b,e,b2)////找到第一个不相等的位置
	////mismatch(b,e,b2,p)
	//eg：
	//vector<int> a,b;
	//for (int i = 1; i <= 9;i+=2)
	//	a.push_back(i);
	//for (int i = 1; i <= 16;i*=2)
	//	b.push_back(i);
	//for (vector<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << " "; cout << endl;
	//for (vector<int>::iterator i = b.begin(); i != b.end(); i++)
	//	cout << *i << " "; cout << endl;
	//bool pos1;
	//pos1=equal(a.begin(), a.end(), b.begin());//equal的返回值是一个bool值
	//cout << pos1 <<endl;
	//pair <vector<int>::iterator, vector<int>::iterator> pos2;//mismatch的返回值是一对迭代器
	//pos2 = mismatch(a.begin(), a.end(), b.begin());
	//cout<<*pos2.first <<endl<<*pos2.second<< endl;//pos2的两个位置用来放不相等的位置的数

	////复制/////
	
	////copy(a.begin(),a.end(),b.begin())
	////copy_backward(a.begin(),a.end(),b.end()),这个是从后面开始拷贝
	////reverse_copy(),复制过程中逆转元素顺序
	
	//////填充//////

	//list<string> a;
	//a.push_back("hello");
	//a.push_back("world");
	//fill(a.begin(), a.end(), "good");////指定区间内填充
	//fill_n(back_inserter(a), 9, "hao");//////在指定位置填充n个
	//for (list<string>::iterator i = a.begin(); i != a.end(); ++i)
	//	cout << *i << " "; cout << endl;
	//fill_n(ostream_iterator<float>(cout, " "), 10, 7.7);/////在输出流中填充n个
	//list<int> b;
	//generate(b.begin(), b.end(), rand);////使用generate填充时，可以按照给定的函数填充；
	//generate_n(back_inserter(b), 5, rand);/////本次例子中使用的是随机函数：rand
	
	//////删除(1)/////
	
	////remove(b, e, n);    remove_if(b,e,f);f代表着函数
	//list<int> a;
	//for (int i = 0; i < 9;i++)
	//	a.push_back(i);
	//list<int>::iterator end=remove(a.begin(), a.end(), 3);
	//////remove实际上并不是删除，而是拿后一个覆盖前一个，这样最后一个就会出现两次；
	//////返回值是新的逻辑终点，也就是没有被覆盖的那个；
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << ' '; cout << endl; cout << *end << endl;
	//a.erase(end, a.end());/////这是真正的删除；
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << ' '; cout << endl;

	//////删除(2)/////
	
	//////remove_copy_if(b, e, i, f);///b和e是删除的起始位置，i是要复制到
	//////f是条件函数的位置
	//list<int> a;
	//for (int i = 1; i <= 6; i++)
	//	a.push_back(i);
	//for (int i = 1; i <= 9; i++)
	//	a.push_back(i);
	//multiset<int> iset;
	//remove_copy_if(a.begin(), a.end(),
	//	inserter(iset,iset.end()),bind2nd(less<int>(),4));
	//////复制过程中删除了小于4的数据，其余的复制到iset中去
	//for (multiset<int>::iterator i = iset.begin(); 
	//	i != iset.end(); i++)
	//	cout << *i << " "; cout <<endl;
	//remove_copy(a.begin(), a.end(),
	//	ostream_iterator<int>(cout, " "), 3);
	//////复制过程中删除了3，其余的显示出来

	//////删除(3)/////
	
	///////unique(b,e,f)
	//int s[] = {1,4,4,6,1,2,2,3,1,6,6,6,5,7,5,4,4};
	//int n = sizeof(s) / sizeof(s[0]);/////计算数组有几个数据
	//list<int> a;
	//copy(s, s + n, back_inserter(a));
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << ' '; cout << endl;
	//list<int>::iterator pos;
	//pos=unique(a.begin(), a.end());////unique是删除连续的重复数据，留下其中一个
	//////返回值是删除后数据前一个
	//for (list<int>::iterator i = a.begin(); i != pos; i++)
	//	cout << *i << ' '; cout << endl;
	//cout << *pos << endl;

	///////逆转与旋转/////

	//vector<int> a;
	//for (int i = 1; i <= 9; i++)
	//	a.push_back(i);	
	//reverse(a.begin(), a.end());//////逆转
	//reverse_copy(a.begin() + 1, a.end() - 1, ostream_iterator<int>(cout, " "));
	//cout <<endl;
	//rotate(a.begin(), a.end() - 3, a.end());////将a.begin()和a.end() - 3
	//////之间的数放到最后
	//for (vector<int>::iterator i = a.begin(); i!= a.end(); i++)
	//	cout << *i << " ";

	//////排列/////

	//vector<int> a;
	//for (int i = 1; i <= 3; i++)
	//	a.push_back(i);	
	//next_permutation(a.begin(), a.end());////下一个排列组合
	///////它的返回值是bool类型，如果还有排列组合，返回值就是true
	//for (vector<int>::iterator i = a.begin(); i!= a.end(); i++)
	//	cout << *i << " "; cout << endl;
	//next_permutation(a.begin(), a.end());////下一个排列组合
	//for (vector<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << " "; cout << endl;

	/////重排与分区////

	////////random_shuffle(b,e);随机重排
	///////partition(b,e,f);分区：把符合规则f的数据放到前面，使用预定义
	//////的函数适配器来制定规则
	//vector<int> a;
	//for (int i = 1; i <= 8; i++)
	//	a.push_back(i);	
	//vector<int>::iterator pos;
	//pos=partition(a.begin(), a.end(), bind2nd(greater < int>(), 4));
	///////将大于4的放到前面（分区）
	//for (vector<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << " "; cout << endl; cout << *pos;

	////排序（不适用于list，list有自己的成员函数sort()）////

	////sort(b,e,f);排序
	////stable_sort(b,e,f);稳定的排序
	////partial_sort(b,se,e,f);局部的排序

	
	system("pause");
	return 0;
}