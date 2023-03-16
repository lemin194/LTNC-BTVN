#include <iostream>
using namespace std;
int main ()
{
	int* p = new int;
 	int* p2 = p; // p khong phai kieu int
 	*p = 10;
 	delete p; 
	*p2 = 100; // da xoa p thi p2 = NULL; luc do khong gan p2 = 100 duoc nua
 	cout << *p2;
 	delete p2;
	return 0;
}
