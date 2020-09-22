#include <iostream>
#include <string>
#include <vector>
#include <ctime>


using namespace std;


//整个游戏：首先系统随机生成一个1-100的数，然后让玩家猜
//猜对，提示玩家猜对，游戏结束
//猜错，提示玩家猜的大还是小，然后让玩家继续

int main()
{

	//为了防止每次随机数都一样，添加随机数种子，利用当前系统时间生成随机数
	//srand（）函数，但是需要包含ctime头文件
	srand((unsigned int)time(NULL));
	//生成随机数, 如下是生成0-99的随机数
	int num = rand() % 100;
	cout << num << endl;

	int val = 0;

	while (1)
	{
		
		cout << "请输入你的答案：" << endl;
		cin >> val;
		if (val > num)
		{
			cout << "猜的太大了." << endl;
		
		}
		else if (val < num)
		{
			cout << "猜的太小了." << endl;
		}
		else
		{
			cout << "恭喜你猜对了。" << endl;

			break; //可以利用break来退出当前循环。 
		}
	}

	int t = 0;

	do
	{
		cout << t << endl;
		t++;
	} while (t < 10);
	//do...while与while的区别是，前者需要先执行一次循环语句，然后再判断条件。








	system("pause");
	return 0;
}