/*
Binary To Decimal

Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.
Constraints:

0 < N <= 1000000000

Sample Input:

101010

Sample Output:

42
*/
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n,sum=0,i=0;
    cin>>n;
    while(n>0){
        sum=sum+(n%10)*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<sum;
	return 0;
}
