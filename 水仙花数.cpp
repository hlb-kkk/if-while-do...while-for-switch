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
		//三位数前提下， 利用整数相除得到的数只取得整数部分这个性质
		a = num % 10; //对数字对10取模能够得到个位数
		b = num / 10 % 10; //对数字先除以10然后在对10取模能够得到十位数
		c = num / 100; //对数字除以100能够得到百位数
		if (a*a*a + b*b*b + c*c*c == num)
		{
			cout << num << endl;
		
		}
		num++;

		
	} while (num < 1000);






	system("pause");
	return 0;

}