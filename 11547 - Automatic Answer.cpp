#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int s = (((((n*567)/9)+7492)*235)/47)-498;
		s=s/10;
		s=s%10;
		cout << abs(s) << endl;
	}
	return 0;
}
