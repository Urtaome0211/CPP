#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int gal_v_a = 10;
int gal_v_b = 10;
const int gal_g_a1 = 10;

int main()
{
	//全局区

	//局部变量
	int a = 10;
	int b = 10;

	cout << "a地址为：" << &a << endl;
	cout << "b地址为：" << &b << endl;

	cout << "gal_v_a地址为：" << &gal_v_a << endl;
	cout << "gal_v_b地址为：" << &gal_v_b << endl;

	//静态变量 - static
	static int s_a = 10;
	static int s_b = 10;

	cout << "s_a地址为：" << &s_a << endl;
	cout << "s_b地址为：" << &s_b << endl;

	//常量
	//1. 字符串常量
	cout << "字符串常量的地址为：" << &"hello world" << endl;

	//2.const修饰的常变量 - 全局
	cout << "全局常量gal_g_a1的地址为：" << &gal_g_a1 << endl;

	//3.const修饰的常变量 - 局部
	const int c_l_a = 10;
	cout << "局部常量c_l_a的地址为：" << &c_l_a << endl;

	return 0;
}