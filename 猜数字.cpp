#include <iostream>
#include <string>
#include <vector>
#include <ctime>


using namespace std;


//������Ϸ������ϵͳ�������һ��1-100������Ȼ������Ҳ�
//�¶ԣ���ʾ��Ҳ¶ԣ���Ϸ����
//�´���ʾ��ҲµĴ���С��Ȼ������Ҽ���

int main()
{

	//Ϊ�˷�ֹÿ���������һ���������������ӣ����õ�ǰϵͳʱ�����������
	//srand����������������Ҫ����ctimeͷ�ļ�
	srand((unsigned int)time(NULL));
	//���������, ����������0-99�������
	int num = rand() % 100;
	cout << num << endl;

	int val = 0;

	while (1)
	{
		
		cout << "��������Ĵ𰸣�" << endl;
		cin >> val;
		if (val > num)
		{
			cout << "�µ�̫����." << endl;
		
		}
		else if (val < num)
		{
			cout << "�µ�̫С��." << endl;
		}
		else
		{
			cout << "��ϲ��¶��ˡ�" << endl;

			break; //��������break���˳���ǰѭ���� 
		}
	}

	int t = 0;

	do
	{
		cout << t << endl;
		t++;
	} while (t < 10);
	//do...while��while�������ǣ�ǰ����Ҫ��ִ��һ��ѭ����䣬Ȼ�����ж�������








	system("pause");
	return 0;
}