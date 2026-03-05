#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	double sum;
	for(int i=0; i<n; i++){
		double p;
		cin>>p;
		sum += p;
	}
	
	double result = sum/n;
	
	cout<<result<<setprecision(12);
	return 0;
}
