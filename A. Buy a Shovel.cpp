#include<iostream>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int i = 1;
    while(true){
      int price = i*k;
      if(price%10 == 0 || price%10 ==r){
        cout<<i;
        break;
      }
      i++;
    }
    return 0;
}
