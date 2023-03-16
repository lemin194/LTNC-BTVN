#include <iostream>
using namespace std;
int strlen(const char a[])
{
	int i = 0;
	while(a[i] != '\0') i++;
	return i;
}
char* reverse(const char *a)
{
	int n = strlen(a);
	char* res = new char[n];
	for (int i = 0; i < n; i++)
	{
		res[i] = a[n - 1 - i];
	}
	return res;
}
char* pad_right(const char *a, const int n)
{
	int m = strlen(a);
	char* res = new char[max(n,m)];
	if (m < n)
	{
		for (int i = 0; i < m; i++) res[i] = a[i];
		for (int i = m; i < n; i++) res[i] = '_';
	}
	res[max(m, n)] = '\0';
	return res;
}
char* pad_left(const char *a, const int n)
{
	int m = strlen(a);
	char* res = new char[max(m,n)];
	if(m < n)
	{
		for (int i = n - 1; i > m - 2; i--) res[i] = a[i - m + 1];
		for (int i = 0; i < m - 1; i++) res[i] = '_';
	}
	res[max(m, n)] = '\0';
	return res;
}
char* truncate(const char *a, int n)
{
	int m = strlen(a);
	char* res = new char[min(m,n)];
	for (int i = 0; i < min(m,n); i++) res[i] = a[i];
	return res;
}
bool is_palindrome(const char *a)
{
	int n = strlen(a);
	for(int i = 0; i < n/2; i++)
	{
		if(a[i] != a[n - 1 - i]) return false;
	}
	return true;
}
char* trim_left(const char *a)
{
	int m = strlen(a);
	int space = 0;
	while (a[space] == ' ') space++;
	char* res = new char[m - space];
	for (int i = 0; i < m - space; i++) res[i] = a[i + space];
	return res;
}
char* trim_right(const char* a)
{
	int m = strlen(a);
	int space = 0;
	while (a[space] != ' ') space++;
	char* res = new char[space];
	for (int i = 0; i < space; i++) res[i] = a[i];
	return res;
}
int main ()
{
	char a[] = "    crazy  ";
	char* p = trim_left(a);
	for (int i = 0; i < strlen(p); i++)
	 cout << p[i];
	return 0;
}
