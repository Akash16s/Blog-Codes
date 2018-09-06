//call by reference
#include<iostream>
using namespace std;
void manipulation(int &a1, int &b1){
  a1++;
  b1++;
  
}
int main(){
     int a=6,b=5;
     cout<<a<<" "<<b<<endl; 
     manipulation(a,b);
cout<<a<<" "<<b; 
	return 0;
}