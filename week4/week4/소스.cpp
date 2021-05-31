#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "첫번째 숫자 : ";
	cin >> a;
	cout << "두번째 숫자 : ";
	cin >> b;
	int avg, sum;
	sum = a + b, avg = sum / 2;
	cout << "sum : " << sum << endl;
	cout << "avg : " << avg << endl;
}