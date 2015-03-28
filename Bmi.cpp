
#include "Bmi.h"

Bmi::Bmi(){}
Bmi::Bmi(int m,int h){
	setValue(m,h);
}
void Bmi::setValue(int m,int h){
	mass=m;height=h;
}
float Bmi::getValue(){
	result = mass / ((height/100)*(height/100));
	return result;
}
int Bmi::getCate(double i){
	if(i<15){
		return 1;
	}else if(i>=15 && i<16){
		return 2;
	}else if(i>=16 && i<18.5){
		return 3;
	}else if(i>=18.5 && i<25){
		return 4;
	}else if(i>=25 && i<30){
		return 5;
	}else if(i>=30 && i<35){
		return 6;
	}else if(i>=35 && i<40){
		return 7;
	}else if(i>=40){
		return 8;
	}else{
		return 9;
	}
}





