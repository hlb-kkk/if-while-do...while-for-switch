#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
	int num = 100;


	do
	{
		int a = 0;
		int b = 0;
		int c = 0;
		//��λ��ǰ���£� ������������õ�����ֻȡ�����������������
		a = num % 10; //�����ֶ�10ȡģ�ܹ��õ���λ��
		b = num / 10 % 10; //�������ȳ���10Ȼ���ڶ�10ȡģ�ܹ��õ�ʮλ��
		c = num / 100; //�����ֳ���100�ܹ��õ���λ��
		if (a*a*a + b*b*b + c*c*c == num)
		{
			cout << num << endl;
		
		}
		num++;

		
	} while (num < 1000);






	system("pause");
	return 0;

}