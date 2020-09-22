#include <iostream>

using namespace std;


int main() {
	int t = 8;
	int u = 3;

	switch (t - u)
	{
	case 1: t = t + u;
		cout << t << endl;
		break;
	case 5: t = t - u;
		cout << t << endl;
		break;
	default: t = t * u;
		cout << t << endl;
		break;

		

	}
	return 0;
}
