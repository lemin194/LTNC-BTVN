#include <bits/stdc++.h>
using namespace std;
char* concat(const char* a, const char* b)
{
	int n = strlen(a);
	int m = strlen(b);
	char *res = new char[n + m];
	for (int i = 0; i < n; i++) res[i] = a[i];
	for (int j = 0; j < m; j++) res[j + n] = b[j];
	res[m + n] = '\0';
	return res;
}
int main ()
{
	char a[] = "hello";
	char b[] = "world";
	char* c = concat(a, b);
	for (int i = 0; i < strlen(c); i++) cout << c[i];
	return 0;
}
