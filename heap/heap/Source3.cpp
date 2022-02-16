#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//打印数据的函数
void ShowValue(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

//常量引用
int main()
{
	//int a = 10;

	////加上const 之后，编译器将代码修改成int tmp = 10; const int &ref = tmp;
	//const int &ref = 10;//加入const之后变为只读，不可修改


	int a = 100;
	ShowValue(a);
	return 0;
}