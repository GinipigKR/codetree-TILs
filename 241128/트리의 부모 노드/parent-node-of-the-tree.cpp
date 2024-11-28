#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	
	vector<int> tree(n+1, -1);
	int a, b;
	n--;
	while (n--) {
		cin >> a >> b;
		tree[b] = a;
	}

	for (int i{ 2 }; i < tree.size(); i++) {
		cout << tree[i] << "\n";
	}
}