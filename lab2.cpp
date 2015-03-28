#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include "Bmi.h"

using namespace std;

int main()
{
	//Bmi bmi;
	ifstream inFile("infile.txt",ios::in);
	if(!inFile){
		cerr<<"Failed"<<endl;
		exit(1);
	}
	
	ofstream outFile("outfile.txt",ios::out);
	if(!outFile){
		cerr<<"Failed"<<endl;
		exit(1);
	}
	string s;
	while(getline(inFile,s)){
		istringstream iss(s);
		string a[2];
		int i=0;
		while(iss){
			iss>>a[i];
			i++;
		}
		//int h= atoi(a[0]);
		//int m= atoi(a[1]);
		//bmi.setValue(m,h);
		//inFile<<bmi.getValue();
	
		//double d=a[1]/((a[0]/100)*(a[0]/100));
		outFile<< "1";
		switch(1){
			case 1:
				outFile<<"Very severely underweight "<<endl;
				break;
			case 2:
				outFile<<"Severely underweight "<<endl;
				break;
			case 3:
				outFile<<"Underweight "<<endl;
				break;
			case 4:
				outFile<<"Normal "<<endl;
				break;
			case 5:
				outFile<<"Overweight "<<endl;
				break;
			case 6:
				outFile<<"Obese Class I (Moderately obese) "<<endl;
				break;
			case 7:
				outFile<<"Obese Class II (Severely obese)"<<endl;
				break;
			case 8:
				outFile<<"Obese Class III (Very severely obese) "<<endl;
				break;
			case 9:
				outFile<<"WRONG!"<<endl;
				break;
			default:
				break;
		}
		//cout<< a[0] <<" and "<< a[1]<<endl;
	}


	return 0;
}
