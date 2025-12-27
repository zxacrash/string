#include <iostream>
#include <vector>
using namespace std;

bool isCool(const vector<vector<int>>& matrix, int i, int j, int n, int m) {
    if (i == n - 1) return true;
    if (j == m - 1) return isCool(matrix, i + 1, 0, n, m);

    int a = matrix[i][j];
    int b = matrix[i][j + 1];
    int c = matrix[i + 1][j];
    int d = matrix[i + 1][j + 1];
    
    if (a == b && b == c && c == d) {
        return false;
    }
    
    return isCool(matrix, i, j + 1, n, m);
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    if (n < 2 || m < 2) {
        cout << "YES" << endl;
        return 0;
    }
    
    bool result = isCool(matrix, 0, 0, n, m);
    
    cout << (result ? "YES" : "NO") << endl;
    
    return 0;
}