#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;


      
int main()
{
	//利用continue语句来只输出奇数。
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue; //执行continue语句的时候，遇到continue则放弃该次循环剩下的语句，直接进行下一次循环
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}