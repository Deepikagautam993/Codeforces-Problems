#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    int temp = arr[n];
    
    for(int i = 0 ; i<n ; i++){
        if(arr[i]!= arr[i+1]){
            swap(arr[i+1],arr[i]);
        }
    }
    if(temp == arr[n]){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
