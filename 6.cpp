#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	float score;
	cout << "How much grade you get in this exam ?" << endl;
	cin >> score;
	cout << "you get " << score << " point. " << endl;

	//在这边需要注意，由于程序是顺序执行的，因此，在写条件的时候也应该从大到小依次
	//不然会发生错误。
	if (score > 100)
	{
		cout << "Are you sure, baby." << endl;
		
	}

	else if (score >= 90)
	{
		cout << "You get Level A in this exam. But what the precise level, let we see." << endl;
		if (score >= 98)
		{
			cout << "You get A plus in this exam." << endl;
		}
		else if (score >= 95)
		{
			cout << "You get A in this exam." << endl;
		}
		else
		{
			cout << "You get A minus in this exam." << endl;
		}

	}
	else if (score >=80 )
	{
		cout << "You get B in this exam." << endl;
	}
	else if ( score >= 70)
	{
		cout << "You get C in this exam." << endl;
	}
	
	else
	{
		cout << "Sorry, you have to work harder, babe." << endl;

	}


	int a = 3;
	int b = 5;
	int c = 7;

	c = (a > b ? a : b);
	cout << "c= " << c << endl;

	//c++中三目运算符返回的是变量能够继续进行赋值运算
	//如下，做运算
	//意思是，a和b进行比较。 若a比b大，则第一个表达式为真，取a，然后给a赋值100
	//反之，取b，然后给b赋值100
	(a > b ? a : b) = 100;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;



	system("pause");
	return 0;


}