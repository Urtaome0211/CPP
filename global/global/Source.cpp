#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int gal_v_a = 10;
int gal_v_b = 10;
const int gal_g_a1 = 10;

int main()
{
	//ȫ����

	//�ֲ�����
	int a = 10;
	int b = 10;

	cout << "a��ַΪ��" << &a << endl;
	cout << "b��ַΪ��" << &b << endl;

	cout << "gal_v_a��ַΪ��" << &gal_v_a << endl;
	cout << "gal_v_b��ַΪ��" << &gal_v_b << endl;

	//��̬���� - static
	static int s_a = 10;
	static int s_b = 10;

	cout << "s_a��ַΪ��" << &s_a << endl;
	cout << "s_b��ַΪ��" << &s_b << endl;

	//����
	//1. �ַ�������
	cout << "�ַ��������ĵ�ַΪ��" << &"hello world" << endl;

	//2.const���εĳ����� - ȫ��
	cout << "ȫ�ֳ���gal_g_a1�ĵ�ַΪ��" << &gal_g_a1 << endl;

	//3.const���εĳ����� - �ֲ�
	const int c_l_a = 10;
	cout << "�ֲ�����c_l_a�ĵ�ַΪ��" << &c_l_a << endl;

	return 0;
}