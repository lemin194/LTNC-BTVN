#include <iostream>
using namespace std;
int strlen(char a[])
{
	int i = 0;
	while(a[i] != '\0') i++;
	return i;
}
void reverse(char a[])
{
	int n = strlen(a);
	for (int i = 0; i < n/2; i++)
	{
		char temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
void pad_right(char a[], int n)
{
	int m = strlen(a);
	if (m < n)
	{
		for (int i = m; i < n; i++) a[i] = '_';
	}
	a[max(m, n)] = '\0';
}
void pad_left(char a[], int n)
{
	int m = strlen(a);
	a[max(m,n)] = '\0';
	if(m < n)
	{
		for (int i = n - 1; i > m - 2; i--) a[i] = a[i - m + 1];
		for (int i = 0; i < m - 1; i++) a[i] = '_';
	}
}
void truncate(char a[], int n)
{
	int m = strlen(a);
	if (m > n)
	 a[n] = '\0';
}
bool is_palindrome(char a[])
{
	int n = strlen(a);
	for(int i = 0; i < n/2; i++)
	{
		if(a[i] != a[n - 1 - i]) return false;
	}
	return true;
}
void trim_left(char a[])
{
	int m = strlen(a);
	string res = "";
	int i = 0;
	while (a[i] == ' ') i++;
	for (; i < m; i++) res += a[i];
	int n = res.size();
	for (int i = 0; i < n; i++) a[i] = res[i];
	a[n] = '\0';
}
void trim_right(char a[])
{
	int m = strlen(a);
	int i = 0;
	while (a[i] == ' ') i++;
	for (; i < m; i++)
	{
		if(a[i] == ' ') a[i] = '\0';
	}
}
int main ()
{
	char a[] = "abcdefgty";
	cout << strlen(a);
	reverse(a);
	truncate(a, 4);
	pad_right(a,7);
	for (int i = 0; i < strlen(a); i++)
	 cout << a[i];
	return 0;
}
