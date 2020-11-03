#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    ll ntc;
    cin>>ntc;
    while(ntc--){
     int n, q;
	cin >> n >> q;
	vector<int> a(n+2, -1);
	for(int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	int ans = 2;
	for(int i = 1; i <= n; i ++) {
		ans += (a[i] != a[i-1]);
	}
	while(q --) {
		int x, y;
		cin >> x >> y;
		if((a[x] == a[x-1]) && (a[x] == a[x+1])) {
			if(y != a[x]) ans += 2;
		}
		else if((a[x] != a[x-1]) && (a[x] == a[x+1])) {
			if(y != a[x]) ans ++;
			if(y == a[x-1]) ans --;
		}
		else if((a[x] == a[x-1]) && (a[x] != a[x+1])) {
			if(y != a[x]) ans ++;
			if(y == a[x+1]) ans --;
		}
		else {
			if(y == a[x-1]) ans --;
			if(y == a[x+1]) ans --;
		}
		a[x] = y;
		cout << ans-2 << "\n";
	}
    }
    return 0;
}
