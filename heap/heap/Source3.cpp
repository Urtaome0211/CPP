#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//��ӡ���ݵĺ���
void ShowValue(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}

//��������
int main()
{
	//int a = 10;

	////����const ֮�󣬱������������޸ĳ�int tmp = 10; const int &ref = tmp;
	//const int &ref = 10;//����const֮���Ϊֻ���������޸�


	int a = 100;
	ShowValue(a);
	return 0;
}