#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n; cin >> n;
	int a[n], k;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> k;
	int* lo = a;
	int *hi = a + sizeof(a) - 1;
	while(lo < hi)
	{
		int* mid = lo + (hi - lo)/2;
		if(k > *mid) lo = mid + 1;
		else hi = mid;
	}
	if (k == *lo) cout << "yes";
	else cout << "no";
	return 0;
}
