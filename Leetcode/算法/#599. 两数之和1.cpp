#include <iostream>
#include <vector> 
using namespace std;

int main() {
	vector<int> q;
	int n, m, temp;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		q.push_back(temp);
	}
	int i = 0, j = q.size() - 1;
	while (i <= j) {
		if(q[i] + q[j] == m) {
			cout << i << " " << j << endl;
			break;
		} else if (q[i] + q[j] > m) {
			j--;
		} else {
			i++;
		}
	}
	return 0;
} 
