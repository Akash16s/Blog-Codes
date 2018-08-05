/*
//Take N (number of rows - only odd numbers allowed), print the following pattern (for N = 5).

      *
   *  *  *  
*  *  *  *  *  
   *  *  *
      *

Constraints:

0 < N < 10 (only odd numbers allowed)

Sample Input:

5

Sample Output:

      *
    * * *
  * * * * *
    * * *
      *

Explanation:

Each '*' is separated from other by a tab.
*/

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    n=(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++) cout<<"  ";
        for(int j=1;j<=2*i-1;j++) cout<<"* ";
    cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++) cout<<"  ";
        for(int j=n-i;j>=1;j--) cout<<"* ";
        for(int j=n-i-1;j>=1;j--) cout<<"* ";
        cout<<endl;
    }
	return 0;
}