//syntax of c++

#include <iostream>;
using namespace std;
#include <string>;
#include <cmath>;

//int main (){
//cout << "Hello World";
//return 0;
//}

//constant varialble 
//int main(){
//	int a = 10;
//	cout << "a value = " << a << "\n";
//	a = 20;
//	cout << "a value after = " << a << "\n";
//	const int b = 10; // this is fixed value
//}

//multiline printing 
//int main(){
//	cout << "*****\n";
//	cout << " *** \n";
//	cout << "  *  \n";
//}


//variable 
//int main(){
//	int myVar = 43; //This is the Syntax !
//	cout << "The value of myVar = " << myVar;
//	return 0;
//}


//input 
//int main(){
//int x, y;
//cout << "Input 1 = ";
//cin>> x;
//cout << "Input 2 = ";
//cin>> y;
//cout << "The SUM =" << x+y;	
//return 1;
//}


//operators 
//int main(){
//	int x = 5, y=10;
//	cout << "x+y is = " << x+y << "\n";
//	cout << "x-Y is = " << x-y << "\n";
//	cout << "x*y is = " << x*y << "\n";
//	cout << "y/X IS = " << y/x << "\n";
//	cout << "x%y is = " << x%y << "\n";
//	cout << "x<y is =" << (x<y)<< "\n";
//	return 1;	
//}


//strings 
//to add => #include <string>;

//funciton to concatinating the first and last names 
//int main(){
//	string x,y;
//		cout << "First name = ";
//		cin >> x;
//		cout << "Last name = ";
//		cin >> y;
//		cout << "Full name = " << x+" "+y;
//	return 0;
//}


//concatinating string and int
//int main (){
//	string x = "10";
//	string y = "25";
//	int a = 15, b = 5;
//	cout << "x+y = " << x+y << "\n";
//	cout << "a+b = " << a+b;
//	return 0;
//}

//int main (){
//	string x = "Rajasekhara";
//	string y = "Reddy";
//	string z = x.append(y);
//	cout << z;
//	return 0;
//}

//sting indexing 
//int main(){
//	string d;
//	cout << "country name = ";
//	cin >> d;
//	d[0] = 'I';
//	cout << "You country = " << d;
//	return 1;
//}

//special charecters in strings 
// print this --> "In "India" we believe in peace"
//int main(){
//	string txt1 = "In \"India\" we believe in peace";
//	string txt2 = "It\'s Ok !!!";
//	cout << txt1 << "\n" << txt2;
//	
//	string txt3 = "\nThis space is --> called a tab";
//	string txt4 = "\nDoing this with \t stasht";
//	cout << txt3 << txt4;
//	return 0;
//}

//math  using #incude <cmath>;

//finding the minimum of three
//int main(){
//	int a = 12, b=25, c=5, val;
//	val = min(a, b);
//	cout << "Minimmun of a, b, c is = " << min(val, c);
//}

//other functions in math
//int main(){
//	cout << sqrt(16) <<"\n";
//	cout << round(2.75) << "\n";
//	cout << log(2) << "\n";
//	return 0;
//}


//Loops 

//ifelse
//int main(){
//	int x = 20, y = 40;
//	if(x>y){
//		cout << "X is greaterthan Y";
//	}else{
//		cout << "X is lessthan Y";
//	}
//}


// take input from user as time "1200" where the clock is in 24 hours format such that 1325 = 1hour25minute PM
// if it is between 0000 1159 then wish Good morning else good evening

//int main(){
//	int time;
//	cout << "Enter the time = ";
//	cin >> time;
//	string result = (time>1159)?"Good Evening":"Good Morning";
//	cout << result;
//}


// Create a switch program to select between different days of the week [mon , tues , wed , thurs , fri , sat , sun]
//switch case loop 
//int main(){
//	int x;
//	cout << "Enter 1 for monday to 7 for sunday = ";
//	cin>> x;
//	
//	if(x>7 || x<1){
//		x = x-x;
//		int y;
//		cout << "Invalid Entry. Try again x = ";
//		cin >> y;
//	}
//	
//	switch(x){
//		case 1:
//			cout << "Monday";
//			break;
//		case 2:
//			cout << "Tuesday";
//			break;
//		case 3:
//			cout << "Wednesday";
//			break;
//		case 4:
//			cout << "Thursday"; 
//			break;
//		case 5:
//			cout << "Friday";
//			break;
//		case 6:
//			cout << "Saturday";
//			break;
//		case 7:
//			cout << "Sunday";
//			break;
//	}
//	return 0;
//}

//for loop 

//int main(){
//	
//	for(int i=0; i<=10; i++){
//		cout << i <<"\n";
//	}
//	return 0;
//}

// Take a number from user and print that numbers table <num> x 1 = <num> upto 10 multiplications that is <num> x 10 = 
//int main(){
//	int x;
//	cout << "Enter a number to get a table of the number = ";
//	cin >> x;
//	for (int i=1; i<=10; i++){
//		cout << x << " X " << i <<" = "<< x*i << "\n";
//	}
//	return 0;
//}


//while loop
//int main(){
//	int x = 0;
//	while(x<5){
//		cout << x << "\n";
//		x++;
//	}
//	return 0;
//}


//do while loop

//int main(){
//	int i = 0;
//	do{
//		cout << i<<"\n";
//		i++;
//	}while(i<5);
//	
//	return 0;
//}



// We have 3 type of registered people.
// 1. People with subscription value > 10;
// 2. People with subcription value <10 and 0>;
// 3. People with subscription value = 0;

//while subscription value is greater than 10 run code without warning ------------> While
//while subscription value is greater than 1 but less than 11 run warning -> do while
//if subscription value = 0 , print "Subscription expired !!" ---------------------> if loop

//int main(){
//	int sub = 40;
//	while(sub>10){
//		cout << "Subsription is valid"<<"\n";
//		sub--;
//	}
//	do{
//		cout << "Subscription is going to end. Please recharge"<<"\n";
//		sub--;
//	}while(sub>1);
//	
//	if(sub==1){
//		cout << "Urgent action is needed!!!!!!!!!!!!!. Recharge immediately"<<"\n";
//		sub--;
//	}	
//	if(sub==0){
//		cout << "Subscripion ended!!!"<<"\n";
//	}
//	
//	return 0;
//}


//break and continue 

//break
//int main(){
//	int count = 1;
//	for(int i = 0; i<20; i++){
//		if(i == 7){
//			cout << "Roll No 7 found \n";
//			break;
//		}else{
//			cout << "Roll no not found attempt "<< i <<"\n";
//			count++;
//		};
//	}
//}

//continue 
//int main(){
//	int count = 1;
//	for(int i=0; i<20; i++){
//		if(i==8){
//			cout << "Roll no 8 found continue with attendance \n";
//			continue;
//		}else{
//			cout << "attendance attempt "<< i<<"\n";
//			count++;
//		}
//	}
//}

//Arrays
//int main(){
//	string categories[] = {"product1", "product2", "product3", "product4"};
//	int myarr[] = {1, 2, 2};
//		cout << categories[2];
//	return 0;
//}


//Create an array and use "for" loop to iterate through all items !

//int main(){
//	string categories[] = {"product1", "product2", "product3", "product4"};
//	
//	for (int i:categories){
//		cout << i;
//	};
//}

//int main(){
//	string categories[] = {"product1", "product2", "product3", "product4"};
//	cout <<"size of string "<< sizeof(string)<<"\n";
//	cout << "size of categories "<< sizeof(categories)<<"\n";
//	cout<<"size of categories/string "<< sizeof(categories)/sizeof(string);
//return 0;
//}


// Create an array containing 5 integers and print items count!
//int main(){
//	int myarr[] = {1,2,3,4,5};
//	for(int i=0; i<sizeof(myarr)/sizeof(int); i++){
//		cout << myarr[i]<<"\n";
//	}
//	return 0;
//}



// Multi-Dimensional Array :

//int main(){
//	int letters[2][4]={{1,2,3,4}, {5,6,7,8}};
//	return 0;
//}


// Create a string array of dimension = [2][2][2] and print first element --> 2nd item

//int main(){
//	string letters[2][2][2] = {{{"Hi", "Hellow"},{"i", "am"}}, {{"cat", "dog"},{"bat", "rat"}}};
//	cout << letters[0][1][0];
//}

// Create the BattelShip Game !

//int main(){
//	bool ships[10][10] = {
//		{0,0,0,1,1,1,1,1,0,0},
//		{0,0,0,0,0,0,0,0,0,0},
//		{0,0,0,0,1,0,1,1,1,0},
//		{0,0,0,0,1,0,0,0,0,0},
//		{0,0,0,0,1,0,0,0,0,0},
//		{0,0,0,0,1,0,0,0,0,0},
//		{0,0,0,0,1,0,0,0,0,0},
//		{0,0,0,0,0,0,0,0,0,0},
//		{0,0,0,1,1,1,0,0,0,0},
//		{0,1,1,0,0,0,0,0,0,0},
//	}
//}


//Structures in C++ 

//int main(){
//	
//	struct{
//		int x;
//		string y;
//		
//	} lu_structure;
//	
//	lu_structure.x = 2023;
//	lu_structure.y = "C++ October";
//	
//	cout << lu_structure.x <<"  "<<lu_structure.y;
//	
//	return 0;
//}

//int main (){
//	
//	struct{
//		string name;
//		string batch;
//		int id;
//	}s1, s2, s3, s4;
//	
////	data entry 
//s1.name = "Reddy";
//s1.batch = "Oct";
//s1.id = 1;
//
//s2.name = "Suresh";
//s2.batch = "Oct";
//s2.id = 2;
//
//s3.name = "Naresh";
//s3.batch = "Oct";
//s3.id = 3;
//
//s4.name = "Shivam";
//s4.batch = "Oct";
//s4.id = 4;
//
//cout << s1.name;
//	return 0;
//}


//NAMED structure

//int main(){
//	
//	struct myStruct {
//		int x;
//		string y;
//	};
//	
//	myStruct car1;
//	car1.x = 2010;
//	car1.y = "Maruti";
//	cout << car1.x << "___"<< car1.y;
//	
//	return 0;
//}


//References 

//int main(){
//	string soup = "Veg Soup";
//	string &starter = soup; // & is used for references
//	cout << soup << "\n";
//	cout << &soup<<"\n"; // & is also used to print memory address
//	cout << starter;
//	
//	return 0;
// }


// Create a two references for both variables containing integers and then cout the sum of their references 

//int main(){
//int x = 25;
//int y = 50;
//
//int &a = x;
//int &b = y;
//cout << a+b;
//	
//	return 0;
//}


//Pointers 

//
//int main (){
//	string food = "Pizza";
//	string* ptr = &food;
//
//cout << "Value of food variable            = "<< food  <<"\n";
//cout << "Memory location of variable food  = "<< &food <<"\n";
//cout << "Reference pointer ptr value       = "<< ptr   <<"\n";
//cout << "Dereference of pointer var ptr    = "<< *ptr  <<"\n";	
//		
//	return 0;
//}


//int main(){
//	string food = "Pizza";
//	string* ptr = &food;
//	
//	cout << "Value of var food       = " << food  <<"\n";
//	cout << "Value of ptr            = " << ptr   <<"\n";
//	cout << "Dereferenceing          = " << *ptr  <<"\n";
////	changing the value from its menory locaion itself 
//*ptr = "Burger";
//cout << "Value of food after change  = "<< food;
//}



//Functons

//creating two void functons and running them in main function 

//void myVoidFunc1(){
//	cout << "Running Void function 1 \n";
//};
//
//void myVoidFunc2(){
//	cout << "Running void function 2 \n";
//}
//
//int main(){
//	myVoidFunc1();
//	myVoidFunc2();
//	return 0;
//}

//create a function to log attendance form api response 

//void attendanceLog(string name, string val){
//	cout << name <<"________"<<val<<"\n";
//}
//
//int main(){
////	sample api resp
//	string xName = "Reddy";
//	string xVal = "P";
//	
//	string yName = "Shivam";
//	string yVal = "A";
//	
//	attendanceLog(xName, xVal);
//	attendanceLog(yName, yVal);
//		
//	return 0;
//}



//Create a program to take input salary from user , if salary > 100000 offer 2.5 Lakh loan
//													 if Salary > 50000  offer 1.5 lakh loan
//													 if Salary > 25000  offer 0.75 lakh loan
//													 if Salary > 15000  offer 0.25 lakh loan
//													 if Salary < 15000  offer No loan
// Logic : Take input from user in main block and write a function to return result

//void offerLoan(int salary){
//	int offeredLoan;
//	if(salary>100000){
//		offeredLoan = 250000;
//	}else if(salary<100000 && salary>50000){
//		offeredLoan = 150000;
//	}else if(salary <50000 && salary >25000){
//		offeredLoan = 75000;
//	}else if(salary < 25000 && salary > 15000){
//		offeredLoan = 25000;
//	}else{
//		offeredLoan = 15000;
//	}
//	
//	cout << "Offered Loan = "<<offeredLoan<<"\n";
//}
//
//int main(){
//	int salary;
//	cout << "Enter your salary   = ";
//	cin >> salary;
//	
//	offerLoan(salary);
//	
//	return 0;
//}


//Default value 

//void checkCountry(string c="India"){
//	cout << c<<"\n";
//}
//
//int main(){
//	checkCountry("USA");
//	checkCountry("XYZ");
//	checkCountry();
//	checkCountry("Nepal");
//}


//Return usage 
//string countryCheck(string country){
//	if(country == "India"){
//		return "No visa required";
//	};
//	return "Visa Required";
//}
//
//int main(){
//	string val1 = countryCheck("India");
//	string val2 = countryCheck("USA");
//
//	cout << val1<<"\n";
//	cout << val2<<"\n";
//	return 0;
//}


//Create a calculator for + - / * by creating a function which takes 2 numbers (int) and 3rd argument as operator

//void calculator(int a, int b, int c){
//	switch(c){
//		case 1:
//			cout << "Sum is         = "<<a+b;
//			break;
//		case 2:
//			cout << "Substration is = "<< a-b;
//			break;
//		case 3:
//			cout << "Divisition is  = "<< a/b;
//			break;
//		case 4:
//			cout << "Multiplication is = "<< a*b;
//	}
//}
//
//int main(){
//	int x,y,z;
//	
//	cout<<"x = ";
//	cin>>x;
//	cout << "y = ";
//	cin>> y;
//	
//	cout<<"Operation Select 1 for additon, 2 for sub, 3 for division, 4 for multiply = ";
//	cin>>z;
//	
//	calculator(x, y, z);
//}
 
 
 
 
 // Pass an array to a function to iterate over it (pass array containing 5 integers)
//void sampleFunc(int sampleArr[5]){
//	for(int i; i<5; i++){
//		cout << sampleArr[i]<<"\n";
//	}
//}
//
//int main(){
//	int arr[5] = {1,2,3,4,5};
//	sampleFunc(arr);
//	return 0;
//}

//swap numbers 

//void swapNums(int &x, int &y){
//	int z = x;
//	x=y;
//	y=x;
//}
//
//int main(){
//	int num1 = 20;
//	int num2 = 90;
//	
//	cout <<"Before swapping value of num1 = "<<num1<<" & value of num2 = "<<num2<<"\n";
//	swapNums(num1, num2);
//	cout << "After swapping value of num1 = "<<num1<<" & value of num2 = "<<num2<<"\n";
////retrun 0;
//}


//function overloading 

//int adder(int a, int b){
//	return a+b;
//}
//
//double adder(double a, double b){
//	return a+b;
//}
//
//int main(){
//	cout<<"Adding 2, 4 using adder = "<<adder(2,4)<<"\n";
//	cout<< "Adding 2.4, 5.5 using adder = "<< adder(2.4, 5.5)<<"\n";
//	return 0;
//}


//create a function to add and subtract floats and integers using funtion overloading

//int sub(int a, int b){
//	return a-b;
//}
//
//double sub(double a, double b){
//	return a-b;
//}
//
//int main(){
//	cout<<"Sub 2, 4 using adder = "<<sub(2, 4)<<"\n";
//	cout<< "sub 2.4, 5.5 using adder = "<< sub(2.4, 5.5)<<"\n";
//	return 0;
//}


//Recustion 

//int sum(int x){
//	if(x>0){
//		return x + sum(x-1);
//	}else{
//		return 0; 
//	}
//}
//
//int main(){
//	int result = sum(10);
//	cout << result;
//}


// Create a funciton to find factorial of 10! = 10x9x8x7x6x5x4x3x2x1 = 3628800

//int factorial(int x){
//	if(x == 0 || x == 1){
//		return 1;
//	}else{
//		return x * factorial(x - 1);
//	}
//}
//
//
//int main(){
//	int x;
//	cout << "Enter a number to get Factorial of = ";
//	cin >> x;
//	int result = factorial(x);
//	cout << result;
//	return 0;
//}































