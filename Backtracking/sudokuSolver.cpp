/*

Time - O(2 ^ N)
Space - O(N)
N - Size of the input array

Subset Sum
Send Feedback
You are given an array of integers and a target K. You have to find the count of subsets of the given array that sum up to K.
Note:
1. Subset can have duplicate values.
2. Empty subset is a valid subset and has sum equal to zero.
Input Format:
The first line of input will contain an integer T, that denotes the value of number of test cases.
Each test case contains two lines. The first line of each test case will contain two space-separated integers N and K, where N is the size of the given array and K is the target value. 
The second line of each test case will contain N space separated integers denoting the elements of the input array.
Output Format ;
For each test case, print the number of subsets that sum upto K in a separate line.
Constraints
1 <= T <= 50
2 <= N <= 15
0 <= array[i] <= 10^9
0 <= K <= 10^9
Time Limit: 1 second
Sample Input 1:
1
5 6
2 4 4 3 1
Sample Output 1:
3
Explanation:
Following are the three subsets, that sum upto K=6:
1. [2, 4], Element 4 in this subset is the one at index 1
2. [2, 4], Element 4 in this subset is the one at index 2
3. [2, 3, 1]  
Sample Input 2:
2
8 8
1 4 1 3 1 1 2 3 
8 2
4 1 4 4 2 4 1 1
Sample Output 2:
30
4

*/

#include <bits/stdc++.h>
using namespace std;
int n = 9;
bool find_empty_location(int **arr, int &row, int &col)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}
bool vertical(int **arr, int row, int col, int value)
{
    for (int i = 0; i < n; i++)
        if (arr[i][col] == value)
            return false;
    return true;
}
bool horizontal(int **arr, int row, int col, int value)
{
    for (int i = 0; i < n; i++)
        if (arr[row][i] == value)
            return false;
    return true;
}
bool box(int **arr, int row, int col, int value)
{
    int row_factor = row - (row % 3);
    int col_factor = col - (col % 3);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i + row_factor][j + col_factor] == value)
                return false;
    return true;
}
bool checker(int **arr, int value, int row, int col)
{
    if (vertical(arr, row, col, value) && horizontal(arr, row, col, value) && box(arr, row, col, value))
        return true;
    return false;
}
bool solveSudoku(int **arr)
{
    int row = 0, col = 0;
    if (!find_empty_location(arr, row, col))
        return true;
    for (int i = 1; i <= n; i++)
    {
        if (checker(arr, i, row, col))
        {
            arr[row][col] = i;
            if (solveSudoku(arr))
                return true;
            else
                arr[row][col] = 0;
        }
    }
    return false;
}
void sudokuSolver(int board[][9])
{
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
            arr[i][j] = board[i][j];
    }
    if (solveSudoku(arr))
        cout << "true";
    else
        cout << "false";
}
int main()
{
    // write your code here
    int board[9][9];
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> board[i][j];
    sudokuSolver(board);
    return 0;
}
