#include<iostream>
using namespace std;
class ash
{
int a,b,c;
public:
int sum(int a, int b )
{
	cout<<a+b<<"\n";
}
int sum(int a, int b, int c)
{cout<<a+b+c;
}
};
int main()
{
	ash e;
	e.sum(7,5);
	e.sum(2,3,4);
	return 0;
}
