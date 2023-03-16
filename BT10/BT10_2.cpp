#include <bits/stdc++.h>
using namespace std;
struct String
{	
	int n;
	char* str;
	String (const char* a)
	{
		n = strlen(a);
		str = new char[n];
		for (int i = 0; i < n; i++) str[i] = a[i];
	}
	~String()
	{
		delete [] str;
	}
	void print()
	{
		for (int i = 0; i < n; i++) cout << str[i];
	}
	void append_(const char* plus)
	{
		int m = strlen(plus);
		char* temp = new char[m + n];
		for (int i = 0; i < n; i++) temp[i] = str[i];
		for (int i = n; i < m + n; i++) temp[i] = plus[i - n];
		n += m;
		str = temp;
	}
};
int main ()
{
	String greeting("abc");
	greeting.append_(" def"); 
	greeting.print();
	return 0;	
}
