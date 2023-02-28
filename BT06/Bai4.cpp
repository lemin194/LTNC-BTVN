/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

const int nmax = 100;
int a[nmax][nmax];

void build(int n) {
    if (n == 2) {
        a[0][0] = 1;
        a[0][1] = 1;
        a[1][0] = 1;
        a[1][1] = 0;
    
        return;
        
    }
    n /= 2;
    build(n);
    for (int i = n; i < 2 * n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = a[i - n][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = n; j < 2 * n; j++) {
            a[i][j] = a[i][j - n];
        }
    }
    for (int i = n; i < 2 * n; i++) {
        for (int j = n; j < 2 * n; j++) {
            a[i][j] = 1-  a[i - n][j - n];
        }
    }
    
}
int main()
{
    int n; cin >> n;
    build(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (a[i][j] ? "o" : ".");
        }
        cout << "\n";
    }
    return 0;
}
