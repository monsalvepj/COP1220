#include <stdio.h>
#include <stdlib.h>

#define AS 20

void findDuplicate (int af[], int fAS);

int main(){

	int a[AS], i , j, k;
	int last = 0;
	
	printf("Enter %d numbers between 10 and 100:\n", AS);
	
	for (i = 0; i < AS; i++){
		scanf("%d",&a[i] );
		if (a[i] >= 10 && a[i] <= 100 ){
			continue;
		} else {
			printf("You must enter values between 10 - 100\n");
			i = i -1;
		}	
	}
	
	findDuplicate(a, AS);
	
	return 0;
}



void findDuplicate (int af[], int fAS){
	int c;
	
	printf("You entered ");
	
	for (c=0; c < fAS; c++){
			if (af[c] != af[c+1]){
				printf("%d ", af[c]);
			}
			continue;
		}
	
	printf("\n");
}