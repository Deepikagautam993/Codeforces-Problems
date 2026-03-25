#include<iostream>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int m = 2*n+1;

    int a[m];

    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    for(int i=1;i<m-1 && k>0;i+=2){

        if(a[i]-1 > a[i-1] && a[i]-1 > a[i+1]){
            a[i]--;
            k--;
        }
    }

    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }

}
