#include <iostream>
using namespace std;

double power(int n , int p=2){
    double j =1;
for(int i =0;i<p;i++){
    j*=n;
}
 return j;
}


int main(){
cout<<"square of the number is "<<power(5,3)<<endl;
  

    return 0;
}