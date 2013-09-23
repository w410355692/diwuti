#include<iostream>
using namespace std;
int c(int m,int n)
{
	if (n>m)
	cout<<"error"<<endl;
	else
	{
	int c=1,i=1;
	for(;n>0;n--,m--)
	{
		c=c*m;
		i=i*n;
	}
	return (c/i);
	}}
int main ()
{ 
	int a,b;
	cin>>a>>b;
	cout<<c(a,b)<<endl;
	system("pause");
}
