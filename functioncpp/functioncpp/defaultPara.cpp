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
//	//��������Լ��������������Լ������ݣ����û�о���Ĭ��ֵ
//	return 0;
//}
//����ռλ���� ��ռλ����Ҳ������Ĭ�ϲ���

//void func(int a, int)
//{
//	cout << "this is func" << endl;
//}
//
//int main()
//{
//	func(10, 10); //ռλ���������
//	return 0;
//}


////�������ص���������
//
////1. ������ͬһ����������
////2. ��������ͬ
////3. �����������͡�������˳��ͬ
//void func()
//{
//	cout << "func�ĵ���" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a)�ĵ���" << endl;
//}
//
//void func(double b)
//{
//	cout << "func(double a)�ĵ���" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double a)�ĵ���" << endl;
//}
//
//void func(double b, int a)
//{
//	cout << "func(double b, int a)�ĵ���" << endl;
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

////�������ص�ע������
//
////1. ������Ϊ���ص�����
//void func(int &a)
//{
//	cout << "func(int &a)�ĵ���" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(const int &a)�ĵ���" << endl;
//}
//
//
////2. ������������Ĭ�ϲ���
//void func2(int a, int b = 10)
//{
//	cout << "func2(int a, int b = 10)�ĵ���" << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2(int a)�ĵ���" << endl;
//}
//
//int main()
//{
//	//int a = 10;
//	//func(a);
//	//func(10);
//
//	func2(20, 10);//��������������Ĭ�ϲ��������ֶ����ԣ���������
//	return 0;
//}

//���һ��Բ�࣬��Բ���ܳ�

//const double PI = 3.14;
//
//class Circle
//{
//	//����Ȩ�� - ����Ȩ��
//public:
//
//	//Բ�����Ժ���Ϊ
//	//�뾶
//	int m_r;
//
//	//��Ϊ - ͨ����һ������
//	//��ȡԲ���ܳ�
//	double caculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//ͨ��Բ�࣬���������Բ������
//	Circle c1;
//
//	//��Բ��������Խ��и�ֵ
//	c1.m_r = 10;
//	cout << "Բ���ܳ�Ϊ��" << c1.caculateZC() << endl;//62.8
//
//	return 0;
//}

//#include <string>
//class Student
//{
//public:
//	//���� - ��Ա���� - ��Ա����
//	string m_name;
//	int m_id;
//
//	//��Ϊ - ��Ա���� - ��Ա����
//	//��ʾ����ѧ��
//	void ShowStudent()
//	{
//		cout << "������" << m_name << " ѧ��: " << m_id << endl;
//	}
//
//	//��������ֵ
//	void SetName(string name)
//	{
//		m_name = name;
//	}
//
//	//��ѧ�Ÿ�ֵ
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

//���ַ���Ȩ��
//����Ȩ�� public    ��Ա���ڿ��Է��ʣ�������Է���
//����Ȩ�� protected ��Ա���ڿ��Է��ʣ����ⲻ���Է���
//˽��Ȩ�� private   ��Ա���ڿ��Է��ʣ����ⲻ���Է���

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
		bank_passwd = 123456;//���ڶ����Է���
	}
};

int main()
{  
	Person p1;
	p1.name = "LiSi";
	//p1.car = "benz";
	//p1.bank_passwd = 123;//������˽��Ȩ�޵����������Ƿ��ʲ�����

	return 0;
}