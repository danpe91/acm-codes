#include <iostream>
#include <vector>
using namespace std;
int x = 0, xm = 0;
vector<int> vec;
int number(int n)
{
	x++;	
	if (n==1)	
		return n;
	else
	{
		if (n&1)
			return number(3*n + 1);
			
		else
			return number(n/2);
	}	
}
int main()
{
	int n1, n2, i, n, aux = 0;
	bool b = 0;
	while((cin>>n1>>n2)&&!cin.eof())
	{	xm = 0;
		if(n1>n2)	{aux = n1;	n1 = n2; n2 = aux; b = 1;}
		vec.resize(n2);
	for(i = n1;i<=n2;i++)
	{
		n = number(i);
		if(xm<x)	xm = x;
			x = 0;
	}
	if (b){
		cout<<n2<<" "<<n1<<" "<<xm<<endl;
		b = 0;
		}
	else
		cout<<n1<<" "<<n2<<" "<<xm<<endl;
	}
}
