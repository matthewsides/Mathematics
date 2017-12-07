#include <iostream>
#include <cmath>
// Imports external C++ Libaries known as "cmath" and "iostream"

using namespace std;
int main() {
 int x[4], y[4];
 
// x and y are defined as integers.
//The value x and y may hold 4 values in an array.

 char next;
// char next holds the int input for comparision 

 int count;
 
// int count is assigned to check the amount of cords inputted 
// int count is further used to break a loop asking for input

 for(count=0; count<4; count++){
	cout << "Enter coordinates?";
	cin >> next;

	if(next=='Y'){
		cout << "\nEnter X" << count+1 << "=";
		cin >> x[count];

	cout << "\nEnter Y" << count+1 << "=";
	cin >> y[count];
	}else{
	cout << "\nOk, we have " << count << " coordinates";
	break;
 
 // loop above checks the input adding to a preset variable value 
 // if count is less than four add one to the variable count
 // the 
 // if count is equal to 4 it will initiate a comparision 
 // Essentially seeing whether the cords equal to a square or rectangle
 // Whilst if count equals 3 it checks whether the cords may form a triangle (must be 0)
 // else ity must not be a simple shape
 
	}
	}

 if(count==4){
 //distance between 2 points

	double term1 = pow((x[1]-x[0]),2);
	double term2 = pow((y[1]-y[0]),2);
// double is essentially a float but larger (floats work with decimals)
// The term variables holds the preset x and y values that equal a shape
// which is a square in this instance
// Pow returns base raised to the power exponent
// Essentially meaning that a valarray containing the results of the power operation on all the elements, in the same order will be returned. 
// And that the results calculated are x raised to the power y (xy)

	double d1 = sqrt(term1+term2);
 
 // The variables d with a numerical value at the end implemnt pythagros therom 
 // The d variables add the pre-set cords (within both terms) together
 // Then multiples them by themselves, square rooting the final value
 // This essentially finds the distance between the points 
 // And helps work out as to whether the cords form a simple shape
// if the cords inputted match non of the pre-set cords it is determined that it is not a simple shape (not a square,triangle or rectangle)
	term1 = pow((x[3]-x[2]),2);
	term2 = pow((y[3]-y[2]),2);

	double d2 = sqrt(term1+term2);
	
	term1 = pow((x[2]-x[0]),2);
	term2 = pow((y[2]-y[0]),2);

	double d3 = sqrt(term1+term2);

	term1 = pow((x[3]-x[1]),2);
	term2 = pow((y[3]-y[1]),2);

	double d4 = sqrt(term1+term2);

	if(d1==d2 && d2==d3 && d3==d4){
		cout << "\nSquare!";
}	else if(d1==d2 && d3==d4){
		cout << "\nRectangle!";
}	else{
		cout << "\nNot a simple shaple!";
	}
}	else if(count == 3){
	
		double term1 = pow((x[1]-x[0]),2);
		double term2 = pow((y[1]-y[0]),2);

		double d1 = sqrt(term1+term2);

		term1 = pow((x[2]-x[0]),2);
		term2 = pow((y[2]-y[0]),2);

		double d2 = sqrt(term1+term2);

		term1 = pow((x[2]-x[1]),2);
		term2 = pow((y[2]-y[1]),2);

		double d3 = sqrt(term1+term2);

		if(d1!=0 && d2!=0 && d3!=0){
			cout << "\nTriangle!";
}		else{
			cout << "\nNot a simple shaple!";
 }

 } 		else {
			cout << "\nNot a simple shaple!";
 }

 return 0;
}