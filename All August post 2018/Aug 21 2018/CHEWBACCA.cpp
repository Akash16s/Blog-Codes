//CHEWBACCA AND NUMBER
#include<iostream>
using namespace std;
int main() {
    long int n,num=0,sum=0,i=0;
    cin>>n;
    while(n>0){
        i++;
          if((9-(n%10))<n%10)
            num=num*10+(9-(n%10));
        else num=num*10+n%10;
        n=n/10;
    }
    int j=0;
    while(j<i){
        j++;
        if(j==1&&num%10==0)
         sum=sum*10+(9-num%10);
         else sum=sum*10+(num%10);
        num=num/10;
    }
    cout<<sum;
	return 0;
}