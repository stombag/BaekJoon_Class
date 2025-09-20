#include<iostream>
#include "BaekJoonClass1.h"

using namespace std;

// °ËÁõ¼ö
void _2475() {
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

// NÂï±â 
void _2471() {


	int Num;

	//scanf("%d", &Num);
	
	for (int i = 1; i <= Num; i++) {

		printf("%d\n", i);
	}
}

