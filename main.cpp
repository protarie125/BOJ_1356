#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

auto getVal(const string& s) {
	auto ret = ll{ 1 };
	for (const auto& x : s) {
		ret *= x - '0';
	}

	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	if (1 == s.length()) {
		cout << "NO";
		return 0;
	}

	auto isFound = bool{ false };
	for (auto i = 1; i < s.length(); ++i) {
		const auto s1 = s.substr(0, i);
		const auto s2 = s.substr(i);

		auto v1 = getVal(s1);
		auto v2 = getVal(s2);

		if (v1 == v2) {
			isFound = true;
			break;
		}
	}

	cout << (isFound ? "YES" : "NO");

	return 0;
}