#include <iostream>
using namespace std;
int main ()
{	
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a'; 
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl;
	cerr <<"c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl;
	return 0;
	// gia tri cua toan hang cua toan tu delete phai la gia tri con tro thu duoc tu
	//mot bieu thuc new array truoc do; neu khong hanh vi cua chuong trinh la khong xac dnh
}
