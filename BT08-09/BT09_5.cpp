#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int n = 9;
	if (n > 0)
	{
		int a = 7;
		int* p = &a;
		delete p;
	}
	/*chuong trinh khong co loi nhung lam nhu vay dang co xoa mot vung bo nho dang khong duoc cap phat dong; co the phat sinh ra
	nhieu van de sau nay*/
	return 0;
}
