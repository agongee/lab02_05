#include <iostream>
#include <vector>

using namespace std;

vector<int> input;
int num, temp;

void swap(int* a, int* b) {
	auto c = *a;
	*a = *b;
	*b = c;
}

void main() {

	while (cin >> num) {
		input.push_back(num);
	}

	cout << " " << endl;
	cout << "ordered array" << endl;

	for (int i = 0; i < input.size(); i++) {
		for (int j = 0; j < input.size() - i - 1; j++) {
			if (input[j] < input[j+1]) {
				swap(input[j], input[j + 1]);
			}
		}
	}


	for (auto i : input) {
		cout<< i << " ";
	}

	system("pause");
}
