//Pedro Monsalve - P07496482 - Temperature Conversion
#include <stdio.h>
void fahrenheitFunc ();

void celciusFunc ();

int main(){
	
	int selection, tf, tc;
	int repeat = 1;
	
	while (repeat == 1){
		printf("Celsius to Fahrenheit conversion chart program\n\n");
		printf("Select:\n(1) for Fahrenheit conversion chart\n(2) for Celsius chart\n(3) to exit program: ");
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
			printf("Entry not valid. Try again\n");
		}
			
			
			printf("Would you like to run the program again? (1 - Yes/ 2 - No) ");
			scanf("%d", &repeat);
			
		// printf("Celsius to Fahrenheit conversion chart program\n\n");
		// printf("Select:\n(1) for Fahrenheit conversion chart\n(2) for Celsius chart\n(3) to exit program: ");
		// scanf("%d", &selection);
			
	}
	
	printf("\nHope you enjoyed the program\n");

	return 0;
}






void fahrenheitFunc (){
	
	float tf;
	int tc, i;
	
	printf("\nEnter temperature in C (Celsius): ");
	scanf("%d",&tc);
	
	tf = (tc * 1.8 + 32);
	
	printf("%d degrees Celsius = %.1f Fahrenheit\n",tc, tf);
	
	printf("\nHere's a handy little chart:\n");
	
	printf("CELSIUS\t\tFAHRENHEIT\n");
	for (i = 0; i < 10; i++){
		printf("%5d\t%15.1f\n", i, (i * 1.8 + 32));
	}
	
	for (i = 10; i <= 100; i+=10){
		printf("%5d\t%15.1f\n", i, (i * 1.8 + 32));
	}
	
}






void celciusFunc (){
	float tf;
	int tc, i;
	
	printf("\nEnter temperature in F (Fahrenheit): ");
	scanf("%f",&tf);
	
	tc = ((((tf - 32) * 5) / 9));
	
	printf("%.1f Fahrenheit degrees Celsius = %d Celsius\n",tf, tc);
	
	printf("\nHere's a handy little chart:\n");

	printf("FAHRENHEIT\tCELSIUS\n");
	for (i = 0; i < 10; i++){
		printf("%8.1f%12d\n", (i * 1.8 + 32), i);
	}
	
	for (i = 10; i <= 100; i+=10){
		printf("%8.1f%12d\n", (i * 1.8 + 32), i);
	}
}