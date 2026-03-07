#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a[100];
	int total = 0;
	
	for(int i=0; i<n; i++){
		cin >> a[i];
		total += a[i];	
	}
	
	sort(a,a+n,greater<int>());
	
	int mysum = 0;
	int count = 0;
	
	for(int i=0; i<n; i++){
		mysum += a[i];
		count ++;
		
		if(mysum > total-mysum){
			break;
		}
	}
	cout<< count <<endl;
}
