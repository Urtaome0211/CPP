//#define _CRT_SECURE_NO_WARNINGS 1
//
//
////不要返回局部变量引用
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
////函数调用作为左值
//int& test02()
//{
//	static int a = 10;//数据存放在静态区，程序结束才销毁
//	return a;
//}
//
//int main()
//{
//	//int &ref = test01();
//	//cout << "ref = " << ref << endl;
//	//栈空间返回异常 - a出函数已经销毁
//
//	int& ref = test02();
//	cout << "ref = " << ref << endl;//10
//
//	test02() = 1000;//返回a的引用，赋值操作
//	//如果函数的返回值是引用，这个函数调用可以作为左值
//	cout << "ref = " << ref << endl;
//
//	return 0;
//}