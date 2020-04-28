
#include <iostream>

using namespace std;

int fib(int n)
{
	if (n <= 0)
		return 0; 
	if (n == 1)
		return 1; 
	return fib(n - 1) + fib(n - 2);
}

int geom(int a, int b, int c)
{
	if (c <= 1)
	{
		return a;
	}
	else
	{
		return b * geom(a, b, c - 1);
	}
}

int arif(int a,int b,int c) {
	if (c == 1)
		return a;
	else
		return arif(a, b, c - 1) + b;
}

int fact(int n) {
	if (n < 0) 
		return 0; 
	if (n == 0) 
		return 1; 
	else 
		return n * fact(n - 1); 
}

void first_fib(){
	for (int c = 0; c < 20; ++c)
		cout << fib(c) << " ";
	cout << endl;
}

void second_geom() {
	cout << geom(5, 8, 3) << endl;
}

void tr_arif() {
	cout << arif(5, 2, 6) << endl;
}

void four_fact() {
	cout<<fact(7)<<endl;
}

int main()
{
	first_fib();

	second_geom();

	tr_arif();

	four_fact();

	return 0;
}
