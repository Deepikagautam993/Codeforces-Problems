#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    
    string team1,team2,name;
    int cnt1=0,cnt2=0;
    cin>>team1;
    cnt1=1;
    
    for(int i =1;i<n;i++){
        cin>>name;
        if(name == team1){
            cnt1++;
        }
        else{
            team2 = name;
            cnt2++;
        }   
    }
    if(cnt1>cnt2){
        cout<<team1;
    }
    else{
        cout<<team2;
    }
}
