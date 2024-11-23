#include <bits/stdc++.h>

using namespace std;

int minMultRec(vector<int> &arr, int i, int j)
{

    if (i + 1 == j)
        return 0;

    int res = INT_MAX;

    for (int k = i + 1; k < j; k++)
    {
        int curr = minMultRec(arr, i, k) +
                   minMultRec(arr, k, j) + arr[i] * arr[k] * arr[j];

        res = min(curr, res);
    }

    return res;
}

int matrixMultiplication(vector<int> &arr)
{

    int n = arr.size();
    return minMultRec(arr, 0, n - 1);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 3};
    cout << matrixMultiplication(arr);
    return 0;
}