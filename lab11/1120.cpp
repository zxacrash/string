#include <iostream>
#include <vector>
#include <string>
using namespace std;

int floodFill(vector<string>& grid, int row, int col, int n) {

    if (row < 0 || row >= n || col < 0 || col >= n) return 0;

    if (grid[row][col] != '.') return 0;
    

    grid[row][col] = '#';
    
    int count = 1;

    count += floodFill(grid, row + 1, col, n);
    count += floodFill(grid, row - 1, col, n);
    count += floodFill(grid, row, col + 1, n);
    count += floodFill(grid, row, col - 1, n);
    
    return count;
}

int main() {
    int n;
    cin >> n;
    
    int x, y;
    cin >> x >> y;
    
    int col = x - 1;
    int row = y - 1;
    
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    
    int area = floodFill(grid, row, col, n);
    cout << area << endl;
    
    return 0;
}