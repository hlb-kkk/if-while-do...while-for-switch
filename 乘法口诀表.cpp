#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	//��ӡ�˷��ھ���
	//˼·�� �˷��ھ���һ����2���о��У���Ϊ��������������
	//���ң�������ԶС������

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j < i;j++)
		{
			cout << j << "*" << i << "=" << j * i<<"\t";
				

		}
		cout << endl;
	}

	system("pause");
	return 0;

}