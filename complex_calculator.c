//Name: Project [4]: Pass by Address
//Author: Kaitlyn Zhang
//Purpose: User pointers and pass variables by address

#include <stdio.h>

//Prototypes
int getMenuChoice(void);
void getComplexNumber(double *real_point, double *imagine_point);
void addComplexNumbers(double real1, double real2, double imagine1, double imagine2, double *real_point, double *imagine_point);
void subtractComplexNumbers(double real1, double real2, double imagine1, double imagine2, double *real_point, double *imagine_point);
void multiplyComplexNumbers(double real1, double real2, double imagine1, double imagine2, double *real_point, double *imagine_point);
void displayComplexNumbers(double real, double imagine);

int main() {
	int userInput; 

	double real_point, imagine_point;
	double real1, real2, imagine1, imagine2;
	double real, imagine;

	do{

	getMenuChoice();
	scanf("%d", &userInput);

	switch (userInput) {
	case 1: 
		printf("Enter the real component: ");
		scanf("%lf", &real1);
	
		printf("Enter the imaginary component: ");
		scanf("%lf", &imagine1);

		printf("Enter the real component: ");
		scanf("%lf", &real2);
	
		printf("Enter the imaginary component: ");
		scanf("%lf", &imagine2);

		addComplexNumbers(real1, real2, imagine1, imagine2, &real_point, &imagine_point);

		real = real_point;
		imagine = imagine_point;

		getComplexNumber(&real_point, &imagine_point);
		displayComplexNumbers(real, imagine);
		break;
	case 2: 
		printf("Enter the real component: ");
		scanf("%lf", &real1);
	
		printf("Enter the imaginary component: ");
		scanf("%lf", &imagine1);

		printf("Enter the real component: ");
		scanf("%lf", &real2);
	
		printf("Enter the imaginary component: ");
		scanf("%lf", &imagine2);

		subtractComplexNumbers(real1, real2, imagine1, imagine2, &real_point, &imagine_point);

		real = real_point;
		imagine = imagine_point;

		getComplexNumber(&real_point, &imagine_point);
		displayComplexNumbers(real, imagine);
		break;
	case 3: 
		printf("Enter the real component: ");
		scanf("%lf", &real1);
	
		printf("Enter the imaginary component: ");
		scanf("%lf", &imagine1);

		printf("Enter the real component: ");
		scanf("%lf", &real2);
	
		printf("Enter the imaginary component: ");
		scanf("%lf", &imagine2);

		multiplyComplexNumbers(real1, real2, imagine1, imagine2, &real_point, &imagine_point);

		real = real_point;
		imagine = imagine_point;

		getComplexNumber(&real_point, &imagine_point);
		displayComplexNumbers(real, imagine);
		break;
	case 0: 
		break;
	default: printf("Please enter a valid option!\n");
		}
	}while(userInput != 0);

	return 0;
}

int getMenuChoice(void)
{
	printf("***COMPLEX NUMBER CALCULATOR***\n");
	printf("1 - addition\n");
	printf("2 - subtraction\n");
	printf("3 - multiplication\n");
	printf("0 - EXIT\n");
}

void getComplexNumber(double *real_point, double *imagine_point){
	double real_input, imagine_input;

	*real_point = real_input;
	*imagine_point = imagine_input;
}

void addComplexNumbers(double real1, double real2, double imagine1, double imagine2, double *real_point, double *imagine_point){

	*real_point = real1 + real2;
	*imagine_point = imagine1 + imagine2;
}

void subtractComplexNumbers(double real1, double real2, double imagine1, double imagine2, double *real_point, double *imagine_point){
	
	*real_point = real2 - real1;
	*imagine_point = imagine2 - imagine1;
}

void multiplyComplexNumbers(double real1, double real2, double imagine1, double imagine2, double *real_point, double *imagine_point){

	*real_point = (real1 * real2) - (imagine1 * imagine2); 
	*imagine_point = (real1 * imagine2) + (real2 * imagine1);
}

void displayComplexNumbers(double real, double imagine){
	printf("%.2lf + %.2lfi\n", real, imagine);
}
