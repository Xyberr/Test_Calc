#include <iostream>
using namespace std;

int main()
{
	
	float x;
	
	float y;
	
	x = 0;
	
	y = 0;
	
	char z;
	
	while(true) {

		cin >> x >> y >> z;
		
		switch (z)
		{

		case '*':
			cout << x * y;
			break;

		case '/':
			cout << x / y;
			break;

		case '+':
			cout << x + y;
			break;

		case '-':
			cout << x - y;
			break;

		case '1':
			return 0;

		default:
			return 0;

		}
	}

	return 0;
}
