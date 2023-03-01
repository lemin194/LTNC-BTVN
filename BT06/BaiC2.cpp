#include <iostream>

using namespace std;
 
 
const int nmax = 1e2;
int n, k;

int pow(int x, int e) {
    if (e == 0) return 1;
    int p = pow(x, e / 2);
    return p * p * (e % 2 ? x : 1);
}

int main()
{
    
    
    cin >> n >> k;
    for (int m = 0; m < pow(n, k); m++) {
        int l = m;
        for (int i = 0; i < k; i++) {
            cout << (char)('a' + (l % n));
            l /= n;
        }
        cout << "\n";
    }
    return 0;
}