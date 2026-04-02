#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int total = 0;
    for(int i =0 ; i<n ; i++){
        int l,r;
        cin>>l>>r;
        int length = r - l + 1;
        total += length;
    }
    if(total%k == 0){
        cout<<0;
    }else{
        cout<<(k-(total%k));
    }
}
