//This is a C++ program that calculates the force of gravity.
#include<iostream>
#include<cmath>
using namespace std;
//This function computes the force
inline double Gravitational_Force(double& F, double& m1, double& m2, double& r) {
	const double G = 6.67 * pow(10, -11.0);
	F = G * (m1 * m2) / pow(r, 2);
	return F;
}

int main() {
	double F, m1, m2, r;
	cout << "************* GRAVITATIONAL FORCE CALCULATOR *************\n";	 //prompting for inputs
	do {
		cout << "Enter the mass of the 1st body(kg):";
		cin >> m1;
		if (m1 < 0) {													//handling edge cases
			cout << "Enter a valid mass!!\n";
		}
	} while (m1 < 0);

	do {
		cout << "\nEnter the mass of the 2nd body(kg): ";
		cin >> m2;
		if (m2 < 0) {
			cout << "Enter a valid mass!!\n";
		}
	} while (m2 < 0);
	do {
		cout << "\nEnter the distance between Body 1 and Body 2(m): ";
		cin >> r;
		if (r == 0) {
			cout << "Enter a valid distance!\n";
		}
	} while (r == 0);
	Gravitational_Force(F, m1, m2, r);
	cout << "\nThe Force of Gravitation between these 2 bodies is " << F << " N.\n";	//printing the force
	cout << "___________________________________________________________________";

	return 0;
}
