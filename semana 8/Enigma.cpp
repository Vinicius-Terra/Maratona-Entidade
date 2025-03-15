#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix;

    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            row.push_back(temp);
        }
        matrix.push_back(row);
    }

    int times = 0;

    while (true)
    {

        // check if new matrix is valid
        //  each column, from top to bottom, the boxes contain an increasing number
        //  each row, from left to right, the boxes contain an increasing number
        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (matrix[j][i] > matrix[j + 1][i])
                {
                    valid = false;
                    break;
                }
                else if (matrix[i][j] > matrix[i][j + 1])
                {
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
            break;

        // rotate matrix
        vector<vector<int>> newMatrix;
        for (int i = 0; i < n; i++)
        {
            vector<int> row;
            for (int j = 0; j < n; j++)
            {
                row.push_back(matrix[j][n - i - 1]);
            }
            newMatrix.push_back(row);
        }
        matrix = newMatrix;

        times++;
    }

    cout << times << endl;

    return 0;
}