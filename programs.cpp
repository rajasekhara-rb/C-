#include <iostream>;
//#include <cmath>;
#include <string>;
#include <sstream>;

using namespace std;


// Temprature converter program using function

float CtoF(float c){
	float f = c * 9/5 + 32;
	//	cout <<c<<" degree celsius to fahrenheit = "<< f <<"\n";
	return f;
}

float FtoC(float f){
	float c = (f - 32)*5/9;
	//	cout <<f<<" degree fahrenheit to celsius = "<< c <<"\n";
	//	cout << c;
	return c;
}

int main(){
	string ip;
	cout << "Enter the input temperature = ";
	cin>>ip;
		
	float temp_val;

	for(int i = 0; i < sizeof(ip)/sizeof(char); i++){
		temp_val = ip[i];
	}
	
	float x = stof("123");
	cout << x<<"\n";

	
	if(ip.find("F")){
		float f_c;
		f_c = FtoC(temp_val);
		cout << "Temperatur in F = "<<ip<<" & C = "<<f_c;
		
	}else if(ip.find("C")){
		float c_f;
		c_f = CtoF(temp_val);
		cout << "Temperatur in C = "<<ip<<" & F = "<<c_f;
	}else{
		cout << "Invalid Input";
	}
	
//	float x = CtoF(100);
//	cout <<x<< "\n";
//	float y = FtoC(100);
//	cout<<y;
	
	return 0;
}


//write a c++ program to find the top 3 numbers from the input 
//input array form the users 



//int main(){
//	int ip;
//	cout << "Enter the array of inputs";
//	cin >> ip;
//int big;
//	for(i=0; i < sizeof(ip); i++){
//		if(ip[i]>big){
//			big = ip[i]
//		}
////			int out = max(ip)
//	}
//	cout << big;
//	
//	return 0;
//}

