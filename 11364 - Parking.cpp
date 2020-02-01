#include<bits/stdc++.h>

using namespace std;

int stores[25];

int main(){
	ios_base::sync_with_stdio(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=0;i<n;i++) cin >> stores[i];
		sort(stores,stores+n);
		int s=0;
		for(int i=1;i<n;i++){
			s+=(stores[i]-stores[i-1]);
		}
		cout << s*2 << endl;
	}
	return 0;
}
