#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//int main()
//{
//	cout << func(10, 30) << endl;
//	//如果我们自己传入数，就用自己的数据，如果没有就用默认值
//	return 0;
//}
//函数占位参数 ，占位参数也可以有默认参数

//void func(int a, int)
//{
//	cout << "this is func" << endl;
//}
//
//int main()
//{
//	func(10, 10); //占位参数必须填补
//	return 0;
//}


////函数重载的满足条件
//
////1. 必须在同一个作用域下
////2. 函数名相同
////3. 函数参数类型、数量、顺序不同
//void func()
//{
//	cout << "func的调用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//}
//
//void func(double b)
//{
//	cout << "func(double a)的调用" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double a)的调用" << endl;
//}
//
//void func(double b, int a)
//{
//	cout << "func(double b, int a)的调用" << endl;
//}
//
//int main()
//{
//	func();
//	func(1);
//	func(3.14);
//	func(1, 3.14);
//	func(3.14, 1);
//	return 0;
//}

////函数重载的注意事项
//
////1. 引用作为重载的条件
//void func(int &a)
//{
//	cout << "func(int &a)的调用" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(const int &a)的调用" << endl;
//}
//
//
////2. 函数重载碰到默认参数
//void func2(int a, int b = 10)
//{
//	cout << "func2(int a, int b = 10)的调用" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a)的调用" << endl;
//}
//
//int main()
//{
//	//int a = 10;
//	//func(a);
//	//func(10);
//
//	func2(20, 10);//当函数重载碰到默认参数，出现二义性，尽量避免
//	return 0;
//}

//设计一个圆类，求圆的周长

//const double PI = 3.14;
//
//class Circle
//{
//	//访问权限 - 公共权限
//public:
//
//	//圆的属性和行为
//	//半径
//	int m_r;
//
//	//行为 - 通常是一个函数
//	//获取圆的周长
//	double caculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//通过圆类，创建具体的圆（对象）
//	Circle c1;
//
//	//给圆对象的属性进行赋值
//	c1.m_r = 10;
//	cout << "圆的周长为：" << c1.caculateZC() << endl;//62.8
//
//	return 0;
//}

//#include <string>
//class Student
//{
//public:
//	//属性 - 成员属性 - 成员变量
//	string m_name;
//	int m_id;
//
//	//行为 - 成员函数 - 成员方法
//	//显示姓名学号
//	void ShowStudent()
//	{
//		cout << "姓名：" << m_name << " 学号: " << m_id << endl;
//	}
//
//	//给姓名赋值
//	void SetName(string name)
//	{
//		m_name = name;
//	}
//
//	//给学号赋值
//	void SetId(int id)
//	{
//		m_id = id;
//	}
//};
//
//int main()
//{
//	Student s1;
//	s1.m_name = "ZhangSan";
//	s1.SetName("WangWu");
//	s1.m_id = 1;
//	s1.SetId(3333);
//	s1.ShowStudent();
//
//	Student s2;
//	s2.m_name = "LiSi";
//	s2.m_id = 2;
//	s2.ShowStudent();
//	return 0;
//}

//三种访问权限
//公共权限 public    成员类内可以访问，类外可以访问
//保护权限 protected 成员类内可以访问，类外不可以访问
//私有权限 private   成员类内可以访问，类外不可以访问

class Person
{
public:
	string name;

protected:
	string car;

private:
	int bank_passwd;

public:
	void func()
	{
		name = "ZhangSan";
		car = "motor";
		bank_passwd = 123456;//类内都可以访问
	}
};

int main()
{  
	Person p1;
	p1.name = "LiSi";
	//p1.car = "benz";
	//p1.bank_passwd = 123;//保护和私有权限的内容类外是访问不到的

	return 0;
}