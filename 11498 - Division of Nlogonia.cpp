#include<bits/stdc++.h>

using namespace std;

int stores[25];

int main(){
	ios_base::sync_with_stdio(0);
	while(1){
		int t; cin >> t;
		if(t==0) return 0;
		int n,m; cin >> n >> m;
		while(t--){
			int x,y; cin >> x >> y;
			if(x==n || y==m) puts("divisa");
			else if(x>n && y>m) puts("NE");
			else if(x<n && y<m) puts("SO");
			else if(x<n && y>m) puts("NO");
			else puts("SE");
		}
	}
}
