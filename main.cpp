#include <bits/stdc++.h>

#define FOR(i,n) for(int i=1;i<=n;i++)
#define mod1 1000000007
#define mod2 998244353
#define pb push_back
#define vi vector<int>
#define ii pair<int, int>
#define ff first
#define ss second
#define lli long long int
#define INF 1000000000
#define endl "\n"

using namespace std;

int main() {
	// ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	lli n, a, b;
	cin >> n >> a >> b;
	
	lli lcm = (a * b) / __gcd(a, b);
	
	lli cnt_a = lcm / a;
	lli cnt_b = lcm / b;
	
	cout << cnt_a + cnt_b << endl;

	return 0;
}
