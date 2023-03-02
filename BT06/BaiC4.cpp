
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
    build(1 << n);

    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < (1 << n); j++) {
            cout << (a[i][j] ? "." : "o");
        }
        cout << "\n";
    }
    return 0;
}
