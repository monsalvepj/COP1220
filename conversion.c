/*2.) CONVERSION: TEMPERATURE
 Implement the following integer functions:
a)	Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b)	Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c)	Use these functions to write a program that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees,
and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a neat tabular format that minimizes
the number of lines of output while remaining readable.*/


//Pedro Monsalve - P07496482 - Temperature Conversion
#include <stdio.h>
void fahrenheitFunc ();

void celciusFunc ();

int main(){
	
	int selection, tf, tc;
	
	printf("Celsius to Fahrenheit conversion chart program\n");
	printf("Select (1) for Fahrenheit conversion chart or (2) for Celsius chart, press (3) to exit program: ");
	scanf("%d", &selection);
	
	switch(selection){
		case 1:
		fahrenheitFunc();
		break;
		case 2:
		celciusFunc();
		break;
		case 3:
		break;
		default:
		printf("Try again\n");
	}
	
	printf("Hope you enjoyed the program\n");

	return 0;
}






void fahrenheitFunc (int ftf){
	printf("F to C");
	
}






void celciusFunc (int ftc){
	printf("C to F");
}