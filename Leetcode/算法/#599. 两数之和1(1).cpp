#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	unordered_map<int, int> q;
	vector<int> q1;
	int n, m, temp;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		q1[i] = temp;
	}
	for (int i = 0; i < n; i++) {
		if (q.find(m - q1[i]) != q.end()) {
			cout << q.first() << " " << q.second() << endl;
		}
	}
	return 0;
}
