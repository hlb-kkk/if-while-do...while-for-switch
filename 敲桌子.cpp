#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
	//�����Ӱ���������7�ı�������������7�ģ����������
	for (int i = 0; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			cout << "������"<< endl;
		}
		else
		{
			cout << i << endl;
		}
	


	}

	system("pause");
	return 0;
}