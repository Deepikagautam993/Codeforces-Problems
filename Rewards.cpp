#include<iostream>
using namespace std;

int main(){
	int c1,c2,c3;
	cin>>c1>>c2>>c3;
	
	int m1,m2,m3;
	cin>>m1>>m2>>m3;
	
	int n;
	cin>>n;
	
	int cuptotal = c1+c2+c3;
	int medaltotal = m1+m2+m3;
	
	int x = cuptotal/5;
	if(cuptotal%5!=0){
		x++;
	}
	 
	int y = medaltotal/10;
	if(medaltotal%10!=0){
		y++;
	}
	
	if(x+y<=n){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
