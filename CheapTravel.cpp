#include<iostream>
using namespace std;

int main(){
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	
	int cost1 = n * a;  // all single tickets
	
	int cost2 = (n/m) * b + (n%m) * a;   // mix of special + single
	
	int cost3 = ((n/m) + 1) * b;   // one extra special ticket
	
	int answer = min(cost1,min(cost2,cost3));
	
	cout << answer;
}
