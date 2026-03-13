#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x,y;
	
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			int value;
			cin >> value;
			
			if(value == 1){
				x = i;
				y = j;
			}
		}
	}
	
	int moves = abs(x - 3) + abs(y - 3);
	cout << moves;
	
	return 0;
	
}
