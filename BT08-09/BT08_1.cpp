#include <bits/stdc++.h>
using namespace std;
int main( )
{ 
   double a[4] = {8,6,7,5}; 
   for (double *cp = a; (*cp) != NULL; cp+= 2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   } 
   // c)0x6ffde0 : 8
   //   0x6ffde8 : 6
   //   0x6ffdf0 : 7
   //   0x6ffdf8 : 5
   /* d) 0x6ffde0 : 8
         0x6ffdf0 : 7*/
   
   return 0;
}


