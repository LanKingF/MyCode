#include <iostream>  
#include <cmath>  
#include <vector>  
#include <fstream>
#include<string>
#include<map>
using namespace std;//ͷ�ļ��в�Ҫʹ��using�����Ҫ�ã���ʹ�������ĸ�ʽ��using std::cin�ȵ�
using std::vector;

//int FileRead(string filename, vector<string>& svec)//���ж�ȡ
//{
//	ifstream infile(filename.c_str);
//	string s;
//	while(infile>>s)//ÿ�ζ�ȡһ�����ʣ������ո�ֹͣ ����getline��infile,s�����Ƕ�ȡһ��
//		svec.push_back(s);
//}
int main()
{
	//extern int i;//��������(������Դ�ļ����涨��i��������������ļ���ʹ��iʱ������)
	//int j=0;//���Ƕ���
	//extern const int a = 1;//���Ƕ��峣�����Ժ����޸ģ�����ĳ��������������Դ�ļ�����ʹ�ã�����ʱ�������extern��
	//
	//const double &va1 = a;//const���ÿ���ָ��ͬ������(ָ��const���߷�const����doubleָ��int�ȵ�)
	//const double &va2 = j;
	//
	//
	//typedef int ���Է���;//�൱��int��ͬ���
	//���Է��� score = 98;//�ȼ���int score=98��
	//typedef struct
	//{
	//	int a; double b;
	//}datatype;			//��һ�����ӵ����Ͷ���Ϊһ���򵥵����֣�datatype
	//
	//
	//enum ��С			//ö������
	//{
	//	С,//Ĭ��ֵ��0
	//	��,//Ĭ��ֵ��1
	//	��//Ĭ��ֵ��2
	//};
	//��С a1= С;		//a1ֻ���������е�һ��

		//vector<int>shuju1,shuju2;
		//int shuzhi;
		//cout << "��������Ҫ��������飬��Ctrl+Z������" << endl;
		//while (cin >> shuzhi)
		//{
		//	shuju1.push_back(shuzhi);
		//	shuju2.push_back(shuzhi);
		//}
		///////////////���μ����������β֮��/////////////
		//vector<int>::size_type first, last;
		//for (first = 0, last = shuju1.size() - 1; first < last; first++, last--)
		//{
		//	cout << shuju1[first] + shuju1[last] << ' ';
		//}
		/////////////////////////////////////////////////
		//cout << endl;
		///////////������������֮��////////////////////	 
		//for (vector<int>::size_type diyi = 0; diyi < shuju2.size()-1; diyi = diyi + 2)
		//{
		//	cout << shuju2[diyi] + shuju2[diyi+1] <<' ';
		//}  

		//vector<int>num(10, 8);
		//vector<int>::iterator ite = num.begin();    //iterator��ָ������ite�൱��������±꣬*ite����ָ�����������
		////while (ite != num.end())					//begin()ָ���ǵ�һ��������end����ָ�������һ����ǰһ��
		////{
		////	*ite = 6;
		////	ite++;
		////}
		//for (vector<int>::iterator i = num.begin(); i != num.end(); ++i)
		//{
		//	cout << *i << endl;
		//}

		//bitset<8>a(string("10010011"));//λ��������a��ֵҲ����ֱ�Ӹ�ֵ��bitset<8>a(10010011)
		//cout << a << endl;
		//bool anyone = a.any();//�鿴a���Ƿ�������һ��1
		//cout << anyone << endl;
		//bool noneone = a.none();//�鿴a���Ƿ�һ��1��û��
		//cout << noneone << endl;

		//int(*ip)[4];  //ip��һ��ָ��
		////int *ip[4];		//ip��һ�����飬[]�����ȼ���*��
		//int a[3][4] = 
		//{ 
		//	{0 ,1, 2, 3} ,
		//	{4, 5, 6, 7} ,
		//	{8 ,9, 10, 11} 
		//};
		//for (ip = a; ip != a + 3;ip++)//ipָ���һ��
		//{
		//	for (int*iq = *ip; iq != *ip + 4; ++iq)//iqָ��*ip�ĵ�һ��
		//	{
		//		 cout<< *iq << ',';
		//	}
		//	cout << endl;
		//} 
	//double pi = 3.1415926;
	//int num = static_cast<double> (pi);//��̬����ת��
	//char *ap = "hello";
	//int *ad = reinterpret_cast<int*>(ap);//ǿ��ת����ʲô���Ͷ���ת��

	//Box Box1(3.0, 1.0, 2.0);    // Declare box1
		//Box Box2(4.0, 6.0, 2.0);    // Declare box2
		//Box *ptrBox;                // Declare pointer to a class.						
		//ptrBox = &Box1;  // �����һ������ĵ�ַ
		//cout << "Volume of Box1: " << ptrBox->Volume() << endl;  //���ڳ���ʹ�ó�Ա��������������ʳ�
		//ptrBox = &Box2;  //// ��ڶ�������ĵ�ַ��
		//cout << "Volume of Box2: " << ptrBox->Volume() << endl; //// ���ڳ���ʹ�ó�Ա��������������ʳ�Ա
	//ofstream a("demo.txt");//������һ��txt�ļ���ֱ�Ӱ�
	//ofstream  b;///û�а�
	//b.open("demo1.txt");//���ڰ�
	//a.close;
	//b.close;
	//a.clear;
	//b.clear;////ÿ������Ҫ�رպͻظ�״̬

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
////������Ϊit��ָ�룬����ָ�����ָ�����͵ĳ�Ա��ʹ�ñ�����->���ļ�������������c����ַ���c_str()��
//			if (!input)
//			{
//				cerr << "���ܴ򿪣�"<<*it << endl;//cerr��cout���ƣ���ͬ����cerrֱ������ʾ�����������������
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
		
	//map<int, string> a;//map��ӳ�䣬�������ظ�
	//								  //key��  valueֵ
	//a.insert(map<int, string>::value_type(1, "one"));//���ֲ��뷽��
	//a.insert(make_pair(2, "two"));
	//a.insert(pair<int, string>(3, "three"));
	//a[4] = "four";
	//cout << a[2] << endl;///���ǲ��ң��ǳ��򵥣�������õ�ֵ
	//a.erase(3);//����ɾ����ͨ��keyֵ����ɾ����ɾ���ɹ��󷵻�1
	//					 ////�õ���������������ʾ����
	//map<int, string>::const_iterator i;
	//for (i = a.begin(); i != a.end(); ++i)
	//{
	//	cout << i->first << ","<<i->second<<endl;
	//}
	
	//multimap<int, string> b;//��������ظ�
	//b.insert(map<int, string>::value_type(1, "one"));//���ֲ��뷽��
	//b.insert(make_pair(2, "two"));
	//b.insert(pair<int, string>(3, "three"));///�ظ�����
	//b.insert(pair<int, string>(3, "three"));
	//multimap<int, string>::const_iterator fi;
	//fi = b.find(3);//�õ��������в���,������ܲ��ҵ��ظ�����
	//cout << fi->first << fi->second << endl;
	//b.erase(b.lower_bound(3), b.upper_bound(3));//ɾ�����е�3
	//////�õ���������������ʾ����
	//map<int, string>::const_iterator i;
	//for (i = b.begin(); i != b.end(); ++i)
	//{
	//	cout << i->first << ","<<i->second<<endl;
	//}
	
	
	system("pause");
	return 0;
}