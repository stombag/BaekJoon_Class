#include<iostream>
#include "BaekJoonClass1.h"

using namespace std;

// ������
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
// �ƽ�Ű �ڵ�
void _11654()
{
char Num;
	cin >> Num;
	cout << (int)Num;
}
// ����
void _25083()
{
	// ���ڿ��� " �� �ְ� ������ \�� ����ؾ��Ѵ�.

	cout << "         ,r'\"7" << endl;
	cout << "r`-_   ,'  ,/" << endl;
	cout << "  \\. \". L_r' " << endl;
	cout << "   `~\\/" << endl;
	cout << "      |" << endl;
	cout << "      |" << endl;

}
// ���ڿ� ���ڿ�
void _27866()
{
	string A;
	cin >> A;

	int num;
	cin >> num;
	cout<<A[num-1];

}
// ������ ��
void _11720()
{
	int A;
	int result = 0;
	cin >> A;
	for (int i = 0; i < A; i++) {
		int a;
		cin >> a;
		result += a;
	}
	cout<< result ;
}

// N��� 
void _2471() {


	int Num;

	//scanf("%d", &Num);
	
	//for (int i = 1; i <= Num; i++) {

	//	printf("%d\n", i);
	//}
}

