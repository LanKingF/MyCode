#include <string>
#include <iostream>  
#include <vector>
#include<list>
#include<deque>
#include<map>

using namespace std;
//bool findint(vector<int>::iterator begin,
//	vector<int>::iterator end, int iter);/////����������
int main()
{
	//map<int, string> a;//map��ӳ�䣬�������ظ�
	//								  //key��  valueֵ
	//a.insert(map<int, string>::value_type(1, "one"));//���ֲ��뷽��
	//a.insert(make_pair(2, "two"));
	//a.insert(pair<int, string>(3, "three"));
	//a[4] = "four";
	//cout << a[2] << endl;///���ǲ��ң��ǳ��򵥣�������õ�ֵ
	//int j=a.erase(3);//����ɾ����ͨ��keyֵ����ɾ����ɾ���ɹ��󷵻�1	
	//cout << j << endl;
	//map<int, string>::const_iterator i;////�õ���������������ʾ����
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
	//cout << fi->first << ","<<fi->second << endl;
	//b.erase(b.lower_bound(3), b.upper_bound(3));//ɾ�����е�3
	//map<int, string>::const_iterator i;////�õ���������������ʾ����
	//for (i = b.begin(); i != b.end(); ++i)
	//{
	//	cout << i->first << ","<<i->second<<endl;
	//}

	//vector<int> b;////��������˳������
	//list<int> c;
	//deque<int> a;
	//a.push_back(1);
	//a.push_back(4);
	//a.push_back(6);	
	
	//a.insert(ite,3);//��iteǰ�����3
		//cout << a[2]<< endl;		
	//bool d=findint(a.begin(), a.end(), 3);
	//cout << d << endl;

	//substr   append   replace ����������ֻ������string����
	//string s("hello world");
	//string s2 = s.substr(6, 5);//substr�ǽ�s��һ���ָ�s2��
	//cout << s2 << endl;
	//s.append("123");//append����������
	//cout << s << endl;
	//s.replace(2, 3, "qwe");//replac���滻
	//cout << s << endl;

	string s = "q1w2e3";
	string num = "0123456789";
	string::size_type pos = 0;
	;
	while ((pos = s.find_first_of(num, pos)) 
		//find_first_of�������ǲ��ң���s�в���num�е����ݣ��鵽��һ��ֹͣ������һ���±ꣻ
		!= string::npos)
	{
		cout << s[pos] << endl;
		pos++;
	}
	system("pause");
	return 0;
}
//bool findint(vector<int>::iterator begin,
//	vector<int>::iterator end, int iter)////�ҵ�һ����iter��ȵ���
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
