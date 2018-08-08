#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n, len, num;
	cin >> n;
	while(n--) {
		cin >> len >> num;	
		int maxM = -1, minM = -1, pos;
		for(int i = 0; i < num; i++) {
			cin >> pos;
			minM = max(minM,min(pos,len - pos));
			maxM = max(maxM,max(pos,len - pos));
		}
		cout << minM <<" "<< maxM <<endl;
	}
	return 0;
}
