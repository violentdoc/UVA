#include<bits/stdc++.h>

using namespace std;

int arr[3];

int main(){
	ios_base::sync_with_stdio(0);
	int n; cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<3;j++) cin >> arr[j];
		sort(arr,arr+3);
		cout << "Case " << i << ": " << arr[1] << endl;
	}
	return 0;
}
