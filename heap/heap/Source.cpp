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
//	//����delete�ͷŶ�������
//	delete p;
//
//	//cout << *p << endl; //�����ͷŵĿռ䲻�ɷ���
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
//	//�ͷ����� delete ��� []
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
//	//int &c; //�������ñ����ʼ��
//	int &c = a; //һ����ʼ���󣬾Ͳ����Ը���
//	c = b; //���Ǹ�ֵ���������Ǹ�������
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	return 0;
//}

//ֵ����
//void MySwap01(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
////ַ����
//void MySwap02(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
////���ô���
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