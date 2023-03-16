#include <bits/stdc++.h>
using namespace std;
void swap_pointers(char **x, char **y)
{
   char *tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   char **t1 = &s1;
   char **t2 = &s2;
   swap_pointers(t1,t2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}

