#include<iostream>
using namespace std;
class square
{
	private:
		int x;
	public:
		inline int squar(int x)
		{
			return (x*x);
		}
};
int main()
{
	int x,result;
	square s;
	cout << "enter the number";
	cin >> x;
	result=s.
	squar(x);
	cout << x << "*" << x << "=" << result;
	return 0;
}
