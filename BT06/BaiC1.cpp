#include <iostream>

using namespace std;

const int nmax = 10;
int a[nmax][nmax], n;

bool check_valid(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] && (abs(row - i) == abs(col - j) || row == i || col == j)) {
                return false;
            }
        }
    }
    return true;
}
bool build(int row) {
    if (row >= n) return true;
    for (int j = 0; j < n; j++) {
        a[row][j] = 0;
    }
    for (int j = 0; j < n; j++) {
        if (check_valid(row, j)) {
            a[row][j] = 1;
            if (build(row + 1)) {
                return true;
            }
        }
        a[row][j] = 0;
    }
    
    return false;
    
}

int main()
{
    cin >> n;
    if (!build (0)) {
        cout << "No solution!";
        return 0;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (a[i][j] ? "Q" : ".");
        }
        cout << "\n";
    }
    return 0;
}