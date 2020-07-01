#include <iostream>
using namespace std;

int custom_plus(int x, int y) {
	return x + y;
}

double custom_plus(double x, int y) {
	return x + y;
}

double custom_plus(int x, double y) {
	return x + y;
}

double custom_plus(double x, double y) {
	return x + y;
}

int main() {
	int a = 10, b = 20;
	int c = 10;
	double d = 20.5;
	cout << custom_plus(a, b) << endl;
	cout << custom_plus(c, d) << endl;
}