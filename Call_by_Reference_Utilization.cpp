#include <iostream>

using namespace std;

class call_by_reference {
public:
	void manage();
	void Value_plus(int* n) { (*n)++; };
	void Value_plus(int n) {  n++; };
};

void call_by_reference::manage() {
	int a = 10;
	int aa = 10;
	cout << "a : " << a << " / aa : " << aa << endl;
	Value_plus(a);
	Value_plus(&aa);
	cout << "a : " << a << " / aa : " << aa << endl;
}


int main() {
	call_by_reference R;
	R.manage();

	return 0;
}


