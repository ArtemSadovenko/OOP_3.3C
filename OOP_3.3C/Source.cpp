#include "LongLong.h"

int main() {
	LongLong a(234, 342);
	LongLong b(a);
	bool t;
	cin >> b;

	cout << a;
	cout << string(a) << endl;
	a++;
	++b;
	cout << a;
	cout << b << endl;
	a--;
	--b;
	cout << a;
	cout << b;
	t = a == b;
	cout << t << endl;
	t = a > b;
	cout << t << endl;

	cout << a.get_count();
}