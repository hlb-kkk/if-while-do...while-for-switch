#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	//打印乘法口诀表
	//思路： 乘法口诀表一共有2九行九列；且为列数乘以行数。
	//并且，列数永远小于行数

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