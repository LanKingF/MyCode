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

////��for_each������õ��ĺ���////

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
	//////������������Ԥ���庯�����////

	//vector<int> vec;
	//for (int i = 1; i <= 9; ++i)
	//	vec.push_back(i);
	//int num1,num2;
	//num1 = count(vec.begin(),vec.end(),5);//ͳ��vec���м���5��
	//cout << num1 << endl;
	////                                     ����������   ��������
	////                                                   elem    >  4?
	//num2 = count_if(vec.begin(), vec.end(), bind2nd ( greater<int>(),4));
	////ͳ�ƴ���4���м�����count_if�ܹ��Ժ������в�����bind2nd�Ǻ�������������������������bind1st��
	////greater��c++��Ԥ���庯������c++�Դ��ĺ���
	//cout << "����4�����У�" << num2 << "��" << endl;

	//////�����㷨�������Ƿ�����/////

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
	////search�������÷�����a.begin()��a.end()֮���в���b�е�����,����ֻ���ҵ�һ�������������
	// while (pos != a.end())
	// {
	//	 cout << "�ҵ��ˣ� λ���ǣ�" << distance(a.begin(), pos) + 1<<endl;
	//	 ++pos; 
	//	 pos = search(pos, a.end(), b.begin(), b.end());//search�������÷�����pos��a.end()֮���в���b�е�����	
	// }
	// pos = find_end(a.begin(), a.end(), b.begin(), b.end());
	// //find_end���в���ʱ���ҵ��������һ�����������ģ�
	//cout << "ʹ��find_end���в��ң����ҵ������һ����λ���ǣ�" << distance(a.begin(), pos) + 1 << endl;

	//////������������㷨//////

	//list<int> a;
	//for (int i = 1; i <= 9;i++)
	//	a.insert(a.end(),i);
	//for (int i = 1; i <= 9; i++)
	//	a.insert(a.end(), i);
	//a.sort();//ʹ����������Ĳ��ҷ���������֮ǰ��������
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << " "; cout << endl;
	//list<int>::iterator pos1;
	/////////////////////////
	//pos1 = lower_bound(a.begin(), a.end(), 5);
	////lower_bound�ǲ��ҵ�һ��5��λ�ã�ָʾ���ǵ�һ��5��λ��
	//cout << distance(a.begin(), pos1) + 1 << endl;
	////////////////////////
	//pos1 = upper_bound(a.begin(), a.end(),5);
	////upper_bound�ǲ������һ��5��λ�ã�����ָʾ�������һ��5�ĺ�һ��λ�ã�����
	////Ϊ�˲��ҳ����󷽱���룬�磺
	////////////////////////
	//a.insert(upper_bound(a.begin(),a.end(),5),5);
	////�ڲ��ҳ������һ��5�������һ����
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << " "; cout << endl;
	//cout << distance(a.begin(), pos1) + 1 <<endl;
	//pair < list<int>::iterator, list<int>::iterator> range;
	//////////////////////////////
	//range = equal_range(a.begin(), a.end(), 5);
	////equal_range�൱��up��low����������λ��
	//cout << distance(a.begin(), range.first) + 1 << endl;
	//cout << distance(a.begin(), range.second) + 1 << endl;////

	/////for_each���/////

	/*vector<int> a;
	for (int i = 1; i <= 9;i++)
		a.push_back(i);
	for_each(a.begin(), a.end(), PrintInt());
	MeanValue mv=for_each(a.begin(), a.end(), MeanValue());
	cout << "ƽ��ֵ��"<< mv.value() << endl;*/

	////����Ƚ�/////

	////equal(b,e,b2)////�Ƚ��Ƿ����
	////equal(b,e,b2,p)
	////mismatch(b,e,b2)////�ҵ���һ������ȵ�λ��
	////mismatch(b,e,b2,p)
	//eg��
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
	//pos1=equal(a.begin(), a.end(), b.begin());//equal�ķ���ֵ��һ��boolֵ
	//cout << pos1 <<endl;
	//pair <vector<int>::iterator, vector<int>::iterator> pos2;//mismatch�ķ���ֵ��һ�Ե�����
	//pos2 = mismatch(a.begin(), a.end(), b.begin());
	//cout<<*pos2.first <<endl<<*pos2.second<< endl;//pos2������λ�������Ų���ȵ�λ�õ���

	////����/////
	
	////copy(a.begin(),a.end(),b.begin())
	////copy_backward(a.begin(),a.end(),b.end()),����ǴӺ��濪ʼ����
	////reverse_copy(),���ƹ�������תԪ��˳��
	
	//////���//////

	//list<string> a;
	//a.push_back("hello");
	//a.push_back("world");
	//fill(a.begin(), a.end(), "good");////ָ�����������
	//fill_n(back_inserter(a), 9, "hao");//////��ָ��λ�����n��
	//for (list<string>::iterator i = a.begin(); i != a.end(); ++i)
	//	cout << *i << " "; cout << endl;
	//fill_n(ostream_iterator<float>(cout, " "), 10, 7.7);/////������������n��
	//list<int> b;
	//generate(b.begin(), b.end(), rand);////ʹ��generate���ʱ�����԰��ո����ĺ�����䣻
	//generate_n(back_inserter(b), 5, rand);/////����������ʹ�õ������������rand
	
	//////ɾ��(1)/////
	
	////remove(b, e, n);    remove_if(b,e,f);f�����ź���
	//list<int> a;
	//for (int i = 0; i < 9;i++)
	//	a.push_back(i);
	//list<int>::iterator end=remove(a.begin(), a.end(), 3);
	//////removeʵ���ϲ�����ɾ���������ú�һ������ǰһ�����������һ���ͻ�������Σ�
	//////����ֵ���µ��߼��յ㣬Ҳ����û�б����ǵ��Ǹ���
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << ' '; cout << endl; cout << *end << endl;
	//a.erase(end, a.end());/////����������ɾ����
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << ' '; cout << endl;

	//////ɾ��(2)/////
	
	//////remove_copy_if(b, e, i, f);///b��e��ɾ������ʼλ�ã�i��Ҫ���Ƶ�
	//////f������������λ��
	//list<int> a;
	//for (int i = 1; i <= 6; i++)
	//	a.push_back(i);
	//for (int i = 1; i <= 9; i++)
	//	a.push_back(i);
	//multiset<int> iset;
	//remove_copy_if(a.begin(), a.end(),
	//	inserter(iset,iset.end()),bind2nd(less<int>(),4));
	//////���ƹ�����ɾ����С��4�����ݣ�����ĸ��Ƶ�iset��ȥ
	//for (multiset<int>::iterator i = iset.begin(); 
	//	i != iset.end(); i++)
	//	cout << *i << " "; cout <<endl;
	//remove_copy(a.begin(), a.end(),
	//	ostream_iterator<int>(cout, " "), 3);
	//////���ƹ�����ɾ����3���������ʾ����

	//////ɾ��(3)/////
	
	///////unique(b,e,f)
	//int s[] = {1,4,4,6,1,2,2,3,1,6,6,6,5,7,5,4,4};
	//int n = sizeof(s) / sizeof(s[0]);/////���������м�������
	//list<int> a;
	//copy(s, s + n, back_inserter(a));
	//for (list<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << ' '; cout << endl;
	//list<int>::iterator pos;
	//pos=unique(a.begin(), a.end());////unique��ɾ���������ظ����ݣ���������һ��
	//////����ֵ��ɾ��������ǰһ��
	//for (list<int>::iterator i = a.begin(); i != pos; i++)
	//	cout << *i << ' '; cout << endl;
	//cout << *pos << endl;

	///////��ת����ת/////

	//vector<int> a;
	//for (int i = 1; i <= 9; i++)
	//	a.push_back(i);	
	//reverse(a.begin(), a.end());//////��ת
	//reverse_copy(a.begin() + 1, a.end() - 1, ostream_iterator<int>(cout, " "));
	//cout <<endl;
	//rotate(a.begin(), a.end() - 3, a.end());////��a.begin()��a.end() - 3
	//////֮������ŵ����
	//for (vector<int>::iterator i = a.begin(); i!= a.end(); i++)
	//	cout << *i << " ";

	//////����/////

	//vector<int> a;
	//for (int i = 1; i <= 3; i++)
	//	a.push_back(i);	
	//next_permutation(a.begin(), a.end());////��һ���������
	///////���ķ���ֵ��bool���ͣ��������������ϣ�����ֵ����true
	//for (vector<int>::iterator i = a.begin(); i!= a.end(); i++)
	//	cout << *i << " "; cout << endl;
	//next_permutation(a.begin(), a.end());////��һ���������
	//for (vector<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << " "; cout << endl;

	/////���������////

	////////random_shuffle(b,e);�������
	///////partition(b,e,f);�������ѷ��Ϲ���f�����ݷŵ�ǰ�棬ʹ��Ԥ����
	//////�ĺ������������ƶ�����
	//vector<int> a;
	//for (int i = 1; i <= 8; i++)
	//	a.push_back(i);	
	//vector<int>::iterator pos;
	//pos=partition(a.begin(), a.end(), bind2nd(greater < int>(), 4));
	///////������4�ķŵ�ǰ�棨������
	//for (vector<int>::iterator i = a.begin(); i != a.end(); i++)
	//	cout << *i << " "; cout << endl; cout << *pos;

	////���򣨲�������list��list���Լ��ĳ�Ա����sort()��////

	////sort(b,e,f);����
	////stable_sort(b,e,f);�ȶ�������
	////partial_sort(b,se,e,f);�ֲ�������

	
	system("pause");
	return 0;
}