#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;


      
int main()
{
	//����continue�����ֻ���������
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue; //ִ��continue����ʱ������continue������ô�ѭ��ʣ�µ���䣬ֱ�ӽ�����һ��ѭ��
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}