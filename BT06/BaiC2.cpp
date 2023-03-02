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
    int v [26];
    
    cin >> n >> k;
    for (int m = 0; m < pow(n, k); m++) {
        int l = m;
        int ok = 1;
        for (int i = 0; i < 26; i++) v[i] = 0;
        for (int i = 0; i < k; i++) {
            v[l % n] ++;
            if (v[l % n] > 1) {
                ok = 0;
                break;
            }
            l /= n;
        }
        l = m;
        if (!ok) continue;
        string s = "";
        for (int i = 0; i < k; i++) {
            // cout << (char)('a' + (l % n));
            s += (char)('a' + (l % n));
            l /= n;
        }
        for (int i = k - 1; i >= 0; i--) cout << s[i];
        cout << "\n";
    }
    return 0;
}