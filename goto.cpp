#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
	cout << "1.xxxxx" << endl;
	cout << "2.xxxxx" << endl;

	goto FLAG; //直接跳到FLAG标志的地方。

	cout << "3.xxxxx" << endl;
	cout << "4.xxxxx" << endl;

	FLAG:
	cout << "5.xxxxx" << endl;




	system("pause");
	return 0;
}