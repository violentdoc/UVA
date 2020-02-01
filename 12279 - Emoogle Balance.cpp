#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int i=1;
	while(1){
		int n; cin >> n;
		if(n==0) return 0;
		int c=0;
		for(int j=0;j<n;j++){
			int a; cin >> a;
			if(a==0) c++;
		}
		cout << "Case " << i << ": " <<  n-2*c << endl;
		i++;
	}
}
