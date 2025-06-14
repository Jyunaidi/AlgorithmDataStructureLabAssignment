/*
ID: 244003319
Name: Nabil Junaidi
Group: G3
Lab: Lab 2
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> diagonalPattern(const vector<vector<int>>& matrix) {
    vector<int> res;
    
    int a = matrix.size();
    int b = matrix[0].size();
    
    for (int row = 0; row < b; row++) {
        int i = row, j = 0;

        while (i >= 0 && j < a) {
            res.push_back(matrix[i][j]);
            i--;
            j++;
        }
    }

    for (int column = 1; column < a; column++) {
        int i = b-1, j = column;

        while (i >= 0 && j < a) {
            res.push_back(matrix[i][j]);
            i--;
            j++;
        }
    }
    
    return res;
}

int main() {

    vector<vector<int>> matrix = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 },
        { 17, 18, 19, 20 }
    };
    vector<int> res = diagonalPattern(matrix);
    for (auto val: res) cout << val << " ";
    cout << endl;
    
    return 0;
}