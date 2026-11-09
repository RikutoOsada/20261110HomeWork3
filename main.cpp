#include<iostream>
using namespace std;

static double mult(double a, double b) {
	return  a * b;

}
int main() {
	double a = 2;
	double b = 3;
	double answer = mult(a, b);

	cout << answer;
}