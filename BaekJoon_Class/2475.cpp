#include <iostream>
using namespace		std;

static void _2475() {
	int a, b, c, d, e;

	cin >> a >> b >> c >> d >> e;

	a *= a;
	b *= b;
	c *= c;
	d *= d;
	e *= e;
	int result = (a + b + c + d + e) % 10;

// 0,4,2,5,6, == 1
	cout << result << endl;
	return;
}