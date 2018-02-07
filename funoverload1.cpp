#include<iostream>
using namespace std;
class ash
{
int a,b,c;
public:
int sum(int c, int d )
{
	cout<<a+b<<"\n";
}
int sum(int a, int b, int c)
{cout<<a+b+c;
}
};
int main()
{
	int d,e,f;
	ash g;
	
	cout<<"enter values";
	cin>>d>>e>>f;
	g.sum(d,e);
	g.sum(d,e,f);
	return 0;
}
