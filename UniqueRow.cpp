// Unique row in boolean Metrix
#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;
void uniquerow(int arr[][100], int row, int col)
{
    set<string> uset;
    for (int i = 0; i < row; i++)
    {
        string s = "";
        for (int j = 0; j < col; j++)
        {
            s += to_string(arr[i][j]);

            
        }
        if (uset.count(s) == 0)
            {
                uset.insert(s);
                cout << s << endl;
            }
    }
}
int main()
{
    int arr[][100] = {
        {0, 1, 0, 0, 1},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 0, 1},
        {1, 1, 1, 0, 0}
    };
    int row = 4;
    int col = 5;
    uniquerow(arr, row, col);
}