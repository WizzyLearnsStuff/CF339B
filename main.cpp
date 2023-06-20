#include<iostream>

using namespace std;

#define ll long long int

int main() {
	ll m, n;
	cin >> n >> m;

	ll house = 0;
	ll time = 0;
	for (ll i = 0; i < m; i++) {
		ll to;
		cin >> to;
		to--;
		time += to >= house ? to - house : n - house + to;
		// cout << time << ' ' << house << ' ' << to << '\n';
		house = to;
	}

	cout << time;
}
