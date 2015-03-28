#include <iostream>
using namespace std;

class Bmi{
public:
	Bmi();
	Bmi(int m, int h);
	void setValue(int m,int h);
	double getValue();
	int getCate(double);	
private:
	int mass, height;
	double result;
};
