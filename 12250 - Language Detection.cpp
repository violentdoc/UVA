#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int c=1;
	while(1){
		string s; cin >> s;
		if(s=="#") return 0;
		else if(s=="HELLO") s="ENGLISH";
		else if(s=="HOLA") s="SPANISH";
		else if(s=="HALLO") s="GERMAN";
		else if(s=="BONJOUR") s="FRENCH";
		else if(s=="CIAO") s="ITALIAN";
		else if(s=="ZDRAVSTVUJTE") s="RUSSIAN";
		else s="UNKNOWN";
		cout << "Case " << c << ": " << s << endl;
		c++;
	}
}
