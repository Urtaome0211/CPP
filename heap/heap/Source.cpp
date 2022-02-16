#define _CRT_SECURE_NO_WARNINGS 1


//int* func()
//{
//	int* a = new int(10);
//	return a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	return 0;
//}

//int* func()
//{
//	int* a = new int(10);
//	return a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	//利用delete释放堆区数据
//	delete p;
//
//	//cout << *p << endl; //报错，释放的空间不可访问
//	return 0;
//}

//int main()
//{
//
//	int* arr = new int[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放数组 delete 后加 []
//	delete[] arr;
//
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	int& b = a;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	b = 100;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	int b = 20;
//	//int &c; //错误，引用必须初始化
//	int &c = a; //一旦初始化后，就不可以更改
//	c = b; //这是赋值操作，不是更改引用
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	return 0;
//}

//值传递
//void MySwap01(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
////址传递
//void MySwap02(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
////引用传递
//void MySwap03(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//
//	//MySwap01(x, y);
//	//MySwap02(&x, &y);
//	MySwap03(x, y);
//
//
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//
//	return 0;
//}