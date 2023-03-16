#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n, m; cin >> n >> m;
	char a[n], b[m];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	int res = 0;
	for (int i = 0; i < m - n + 1; i++)
	{
		char temp[n];
		for (int k = 0; k < n; k++)
		 temp[k] = b[k + i];
		if(strcmp(temp, a) == 0) res++;
	}
	cout << res;
}
