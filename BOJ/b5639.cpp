#include <iostream>
#include <vector>

using namespace std;

int tree[10004];

void postOrder(int start, int end) {
	if(start >= end) {
		return;
	}
	if(start == end - 1) {
		cout << tree[start] << '\n';
		return;
	}
	int idx = start + 1;
	while(idx < end) {
		if(tree[start] < tree[idx]) {
			break;
		}
		idx ++;
	}

	postOrder(start+1, idx);
	postOrder(idx, end);
	cout << tree[start] << '\n';
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	int inputIdx = 0;
	while (cin >> num) {
		tree[inputIdx++] = num;
	}
	
	postOrder(0, inputIdx);


	return 0;
}
