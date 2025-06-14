/*
ID: 24003319
Name: Nabil Junaidi
Group: G3
Lab: Lab 2
*/

#include <iostream>
#include <vector>
using namespace std;

void show(const vector<vector<int>>& snake)
{
    int a = snake.size();  
    int b = snake[0].size(); 

    for (int i = 0; i < a; i++) {
        
        if (i % 2 == 0) {
            for (int c = 0; c < b; c++)
                cout << snake[i][c] << " ";
        }
        
        else {
            for (int c = b - 1; c >= 0; c--)
                cout << snake[i][c] << " ";
        }
    }
}

int main()
{
    vector<vector<int>> snake = {
        {45, 48, 54},
        {21, 89, 87},
        {70, 78, 15}
    };

    show(snake);
    return 0;
}