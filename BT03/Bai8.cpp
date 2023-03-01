
#include <iostream>

using namespace std;


const int nmax = 1e4;
int a[nmax];
int main()
{
    int n; cin >> n;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * (n - i - 1);
    }
    cout << ans << "\n";
    return 0;
}
