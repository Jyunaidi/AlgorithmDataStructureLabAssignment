/*
ID: 244003319
Name: Nabil Junaidi
Group: G3
Lab: Lab 2
*/

#include <bits/stdc++.h>
using namespace std;

int Kfinder(vector<vector<int>> &matrix, int a, int b, int n, int m, int k) {

    if (n < 1 || m < 1)
        return -1;

    if (k <= m)
        return matrix[a][b + k - 1];

    if (k <= (m + n - 1))
        return matrix[a + (k - m)][b + m - 1];

    if (k <= (m + n - 1 + m - 1))
        return matrix[a + n - 1][b + m - 1 - (k - (m + n - 1))];

    if (k <= (m + n - 1 + m - 1 + n - 2))
        return matrix[a + n - 1 - (k - (m + n - 1 + m - 1))][b];

    return Kfinder(matrix, a + 1, b + 1, n - 2, m - 2, k - (2 * n + 2 * m - 4));
}

int findingK(vector<vector<int>> &matrix, int k) {
    int n = matrix.size();
    int m = matrix[0].size();
    return Kfinder(matrix, 0, 0, n, m, k);
}

int main() {
    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int k = 4;
    cout << findingK(matrix, k);
    return 0;
}