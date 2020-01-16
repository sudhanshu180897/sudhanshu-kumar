#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int base;
	int exponent;
	int result;
	cout <<"enter the base and exponent\n";
	cin >> base >> exponent;
	result = pow(base, exponent);
	cout << base << "^" <<exponent << "=" <<result;
	return 0;
}
