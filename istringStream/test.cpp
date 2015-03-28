#include <iostream>
#include<string>
#include <sstream>
#include<cstdlib>

using namespace std;



int main(){

	string s("170  155");
	istringstream iss(s);
	string a[10];
	
	for ( int i = 0; i < 2; ++i){
		iss >> a[i];
		cout << a[i] << endl;
	}

	/* type of a[0] is string, when we want to use atoi();
	 * we need to converse atoi[i] to char * 
     */ 
	int height = atoi(a[0]);
	int weight = atoi(a[1]); 

	cout << "height : " << height << endl;
	cout << "weight : " << weight << endl;

		
			
}
