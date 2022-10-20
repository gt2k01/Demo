#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> a;
	int ans = 0;
	for ( int i = 0; i < n; i++ )
	{
		int x;
		cin >> x;
		if ( a.size() > 0 && ( x^a.back() == 1 )  )
		{
			ans = ans + 1;
			a.pop_back();
		}
		else
			a.push_back(x);
	}
	if ( a.size() > 0 && a[0] == 1 )
		ans = ans + a.size()/3;
	cout << ans << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
		solve();
}