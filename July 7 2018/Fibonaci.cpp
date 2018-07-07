//fibonaci pattern
#include <iostream>
using namespace std;
int main() {
    int n,a=0,b=1,sum=0;
    cin>>n;
    while(sum<=n){

        sum=sum+a;
        a=b;
        b=sum;
        if(sum<=n){
         cout<<sum;}
        cout<<endl;

    }

return 0;

}
