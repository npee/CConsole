#include <iostream>
#include <string>
using namespace std;

namespace A {
	int Plus(int a, int b) {
		return a + b;
	}
}

namespace B {
	string Plus(string a, string b) {
		return a + b;
	}
}

void main() {
	int a = 10, b = 20;

	string str = "�Ƹ��ٿ� ";
	string str2 = "���ѹα�";
	
	cout << A::Plus(a, b) << endl;
	cout << B::Plus(str, str2) << endl;
}