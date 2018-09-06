/*

Pascal Triangle(Pattern 3)

Take N (number of rows), print the following pattern (for N = 6)
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
Constraints:

0 < N < 100

Sample Input:

6

Sample Output:

1  
1   1  
1   2   1  
1   3   3   1  
1   4   6   4   1  
1   5   10  10  5   1

Explanation:

Each number is separated from other by a tab.


*/

#include <iostream>
using namespace std;

int main()
{
    int rows, coef = 1;
    cin >> rows;
    for(int i = 0; i < rows; i++)
    {   for(int j = 0; j <= i; j++)
        {   if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }

    return 0;
}