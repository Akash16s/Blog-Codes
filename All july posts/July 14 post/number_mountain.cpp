/*que 1: 

Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4


constraint: 0 < N < 10


sample input:4

                     

sample output: 

                         1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4

Explanation:

Each number is separated from other by a tab.
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
			while(j<=n-i){
				cout<<"  ";
				j=j+1;
			}
			int val=i;
			j=1;
			while(j<=i){
				cout<<val<<" ";
				val++;
				j++;
			}
			val=val-2;
			j=1;
			while(j<=i-1){
				cout<<val<<" ";
				val--;
				j++;
		}
		cout<<'\n';
		i=i+1;
	}
	return 0;
}