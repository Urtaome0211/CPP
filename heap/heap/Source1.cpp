//#define _CRT_SECURE_NO_WARNINGS 1
//
//
////��Ҫ���ؾֲ���������
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
////����������Ϊ��ֵ
//int& test02()
//{
//	static int a = 10;//���ݴ���ھ�̬�����������������
//	return a;
//}
//
//int main()
//{
//	//int &ref = test01();
//	//cout << "ref = " << ref << endl;
//	//ջ�ռ䷵���쳣 - a�������Ѿ�����
//
//	int& ref = test02();
//	cout << "ref = " << ref << endl;//10
//
//	test02() = 1000;//����a�����ã���ֵ����
//	//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//	cout << "ref = " << ref << endl;
//
//	return 0;
//}