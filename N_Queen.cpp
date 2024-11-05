#include <bits/stdc++.h>
using namespace std;

void printSolution(vector<vector<int>> &board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (board[i][j])
                cout << "A ";
            else
                cout << ". ";
        cout << "\n";
    }
}

bool isSafe(vector<vector<int>> &board,
            int row, int col)
{
    int n = board.size();
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 &&
                           j >= 0;
         i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 &&
                           i < n;
         i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQUtil(vector<vector<int>> &board, int col)
{
    int n = board.size();

    // base case: If all queens are placed then return true
    if (col >= n)
        return true;

    // Consider this column and try placing this queen in all rows one by one
    for (int i = 0; i < n; i++)
    {

        // Check if the queen can be placed on board[i][col]
        if (isSafe(board, i, col))
        {

            // Place this queen in board[i][col]
            board[i][col] = 1;

            // recur to place rest of the queens
            if (solveNQUtil(board, col + 1))
                return true;

            board[i][col] = 0;
        }
    }

    // If the queen cannot be placed in any row in
    // this column col then return false
    return false;
}

bool solveNQ(int n)
{
    vector<vector<int>> board(n, vector<int>(n, 0));

    if (solveNQUtil(board, 0) == false)
    {
        cout << "Solution does not exist";
        return false;
    }

    printSolution(board);
    return true;
}

int main()
{
    int n = 4;
    solveNQ(n);
    return 0;
}
