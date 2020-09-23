#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
	//敲桌子案例，遇到7的倍数、数字里有7的，输出敲桌子
	for (int i = 0; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			cout << "敲桌子"<< endl;
		}
		else
		{
			cout << i << endl;
		}
	


	}

	system("pause");
	return 0;
}