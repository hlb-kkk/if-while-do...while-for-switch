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

	//�������Ҫע�⣬���ڳ�����˳��ִ�еģ���ˣ���д������ʱ��ҲӦ�ôӴ�С����
	//��Ȼ�ᷢ������
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

	//c++����Ŀ��������ص��Ǳ����ܹ��������и�ֵ����
	//���£�������
	//��˼�ǣ�a��b���бȽϡ� ��a��b�����һ�����ʽΪ�棬ȡa��Ȼ���a��ֵ100
	//��֮��ȡb��Ȼ���b��ֵ100
	(a > b ? a : b) = 100;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;



	system("pause");
	return 0;


}