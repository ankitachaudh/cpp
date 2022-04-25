#include<iostream.h>
#include<conio.h>
template<class T>
void swap(T a,T b)
{
	T t;
	t=a;
	a=b;
	b=t;
	cout<<"A=:->"<<a<<endl;
	cout<<"B=:->"<<b<<endl;
}
void main()
{
clrscr();
	int a,b;
	cout<<"enter a value of A"<<endl;
	cin>>a;
	cout<<"enter a value of B"<<endl;
	cin>>b;
	swap(a,b);
	cout<<endl;
	float m,n;
	cout<<endl;
	cout<<"enter a value of m";
	cin>>m;
	cout<<"enter a value of n";
	cin>>n;
	swap(m,n);
	getch();
}



