#include <iostream>

using namespace std;

class Fraction
{
private:
	float a, b, c;

public:
	void getNumDenom();
	void setNumDenom();
	float Add();
	float subtract();
	float multiply();
	float divide();
	void printf();
};

void Fraction::setNumDenom(float n, float d)
{
	a = n;
	b = d;
}

void Fraction::getNumDenom()
{
	return a, b;
}

float Fraction::Add(float A, float B, float C)
{

}

float Fraction::subtract()
{

}

float Fraction::multiply()
{

}

float Fraction::divide()
{

}

void Fraction::printf()
{

}


int main()
{
	Fraction Frac1;

	float num = 0, denom = 0, Lc = 0;
	cout << "Please input denominator " << endl;
	cin >> num >> denom >> Lc;

	Frac1.setNumDenom()

		return 0;



}