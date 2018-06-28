#include <iostream>  
#include <cmath>  
#include <vector>  
#include <fstream>
#include<string>
#include<map>
using namespace std;//头文件中不要使用using，如果要用，就使用完整的格式：using std::cin等等
using std::vector;

//int FileRead(string filename, vector<string>& svec)//按行读取
//{
//	ifstream infile(filename.c_str);
//	string s;
//	while(infile>>s)//每次读取一个单词（遇到空格停止 ），getline（infile,s）这是读取一行
//		svec.push_back(s);
//}
int main()
{
	//extern int i;//这是声明(在其它源文件里面定义i，但是想在这个文件中使用i时用声明)
	//int j=0;//这是定义
	//extern const int a = 1;//这是定义常量，以后不能修改；定义的常量如果想在其它源文件里面使用，定义时必须加上extern；
	//
	//const double &va1 = a;//const引用可以指向不同的类型(指向const或者非const或者double指向int等等)
	//const double &va2 = j;
	//
	//
	//typedef int 考试分数;//相当于int的同义词
	//考试分数 score = 98;//等价于int score=98；
	//typedef struct
	//{
	//	int a; double b;
	//}datatype;			//把一个复杂的类型定义为一个简单的名字：datatype
	//
	//
	//enum 大小			//枚举类型
	//{
	//	小,//默认值是0
	//	中,//默认值是1
	//	大，//默认值是2
	//};
	//大小 a1= 小;		//a1只能是三个中的一个

		//vector<int>shuju1,shuju2;
		//int shuzhi;
		//cout << "请输入所要计算的数组，按Ctrl+Z结束：" << endl;
		//while (cin >> shuzhi)
		//{
		//	shuju1.push_back(shuzhi);
		//	shuju2.push_back(shuzhi);
		//}
		///////////////依次计算数组的首尾之和/////////////
		//vector<int>::size_type first, last;
		//for (first = 0, last = shuju1.size() - 1; first < last; first++, last--)
		//{
		//	cout << shuju1[first] + shuju1[last] << ' ';
		//}
		/////////////////////////////////////////////////
		//cout << endl;
		///////////计算相邻两数之和////////////////////	 
		//for (vector<int>::size_type diyi = 0; diyi < shuju2.size()-1; diyi = diyi + 2)
		//{
		//	cout << shuju2[diyi] + shuju2[diyi+1] <<' ';
		//}  

		//vector<int>num(10, 8);
		//vector<int>::iterator ite = num.begin();    //iterator是指迭代器ite相当于数组的下标，*ite才是指的数组的内容
		////while (ite != num.end())					//begin()指的是第一个，但是end（）指的是最后一个的前一个
		////{
		////	*ite = 6;
		////	ite++;
		////}
		//for (vector<int>::iterator i = num.begin(); i != num.end(); ++i)
		//{
		//	cout << *i << endl;
		//}

		//bitset<8>a(string("10010011"));//位操作，给a赋值也可以直接赋值：bitset<8>a(10010011)
		//cout << a << endl;
		//bool anyone = a.any();//查看a中是否至少有一个1
		//cout << anyone << endl;
		//bool noneone = a.none();//查看a中是否一个1都没有
		//cout << noneone << endl;

		//int(*ip)[4];  //ip是一个指针
		////int *ip[4];		//ip是一个数组，[]的优先级比*高
		//int a[3][4] = 
		//{ 
		//	{0 ,1, 2, 3} ,
		//	{4, 5, 6, 7} ,
		//	{8 ,9, 10, 11} 
		//};
		//for (ip = a; ip != a + 3;ip++)//ip指向第一行
		//{
		//	for (int*iq = *ip; iq != *ip + 4; ++iq)//iq指向*ip的第一个
		//	{
		//		 cout<< *iq << ',';
		//	}
		//	cout << endl;
		//} 
	//double pi = 3.1415926;
	//int num = static_cast<double> (pi);//静态类型转换
	//char *ap = "hello";
	//int *ad = reinterpret_cast<int*>(ap);//强制转换，什么类型都能转换

	//Box Box1(3.0, 1.0, 2.0);    // Declare box1
		//Box Box2(4.0, 6.0, 2.0);    // Declare box2
		//Box *ptrBox;                // Declare pointer to a class.						
		//ptrBox = &Box1;  // 保存第一个对象的地址
		//cout << "Volume of Box1: " << ptrBox->Volume() << endl;  //现在尝试使用成员访问运算符来访问成
		//ptrBox = &Box2;  //// 存第二个对象的地址保
		//cout << "Volume of Box2: " << ptrBox->Volume() << endl; //// 现在尝试使用成员访问运算符来访问成员
	//ofstream a("demo.txt");//创建了一个txt文件，直接绑定
	//ofstream  b;///没有绑定
	//b.open("demo1.txt");//现在绑定
	//a.close;
	//b.close;
	//a.clear;
	//b.clear;////每次用完要关闭和回复状态

//	vector<string> a;
//	a.push_back("one.txt");
//	a.push_back("two.txt");
//	a.push_back("three.txt");
//	string s;
//	vector<string>::const_iterator it=a.begin();
//	while (it != a.end())
//	{
//		ifstream input(it->c_str());
//		
////这里因为it是指针，利用指针对所指向类型的成员的使用必须用->，文件流操作必须用c风格字符串c_str()；
//			if (!input)
//			{
//				cerr << "不能打开："<<*it << endl;//cerr与cout类似，不同的是cerr直接向显示屏输出而不经过缓存
//				input.clear();
//				++it;
//				continue;
//			}
//			while (input>>s)
//			{	
//				cout << s << endl;
//				input.close();
//				input.clear();
//				++it;
//			}
//	}
		
	//map<int, string> a;//map是映射，不可以重复
	//								  //key键  value值
	//a.insert(map<int, string>::value_type(1, "one"));//四种插入方法
	//a.insert(make_pair(2, "two"));
	//a.insert(pair<int, string>(3, "three"));
	//a[4] = "four";
	//cout << a[2] << endl;///这是查找，非常简单，输入键得到值
	//a.erase(3);//这是删除，通过key值进行删除，删除成功后返回1
	//					 ////用迭代器将其依次显示出来
	//map<int, string>::const_iterator i;
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
	//cout << fi->first << fi->second << endl;
	//b.erase(b.lower_bound(3), b.upper_bound(3));//删除所有的3
	//////用迭代器将其依次显示出来
	//map<int, string>::const_iterator i;
	//for (i = b.begin(); i != b.end(); ++i)
	//{
	//	cout << i->first << ","<<i->second<<endl;
	//}
	
	
	system("pause");
	return 0;
}