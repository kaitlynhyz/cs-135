//Name: Project[5]: File IO
//Author: Kaitlyn Zhang
//Purpose: Writing to a File

#include <stdio.h>

#define FILE_NAME "inventory_file.txt" 

//Prototypes
int getMenuChoice(void);
void displayInventory(FILE * result);
void addInventory(FILE * inventory);

int main(){
	
	FILE *fp, *result, *inventory;	
	int userInput;

	int i, item, quantity, digit;
	double price;

	do{

	getMenuChoice();
	scanf("%d", &userInput);

	switch (userInput) {
	case 1: fp = fopen("inventory_file.txt", "r");
		if(fp == NULL){
			printf("Can not open inventory file.\n");
			return 1;
		}
		else {
			displayInventory(fp);
			}
		fclose(fp);
		break;
	case 2: fp = fopen("inventory_file.txt", "a+");
		if(fp == NULL){
			printf("Can not open inventory file.\n");
			return 1;
		}
		else {
			addInventory(fp);
			}	
		fclose(fp);
		break;
	case 0:
		break;
	default: printf("Please enter a valid option!\n");
		break;
		}
	}while(userInput != 0);

	return 0;
}

int getMenuChoice(void)
{
	printf("***INVENTORY SYSTEM***\n");
	printf("1 - display inventory\n");
	printf("2 - add inventory\n");
	printf("0 - EXIT\n");
}

void displayInventory(FILE * result){
		
	int item;	
	int quantity, digit;
	double price; 
 
	printf("INVENTORY\n");
	printf("==================================================\n");
	printf("||Item Code   |   Item Quantity   |  Item Price ||\n");
	printf("||===============================================|\n");

	while(fscanf(result, "%d %d %lf", &digit, &quantity, &price) == 3)
	{
	printf("||------------|-------------------|-------------||\n");
	printf("||%11d | %9d\t  |%7.2lf\t||\n", digit, quantity, price);
	}
	printf("==================================================\n");
}

void addInventory(FILE * inventory)
{	
	int i;
	int item, quantity, digit;
	double price;

	printf("How many items are you adding? ");
	scanf("%d", &item);

	for (i = 0; i < item; i++)
	{
	printf("Enter a quantity: ");
	scanf("%d", &quantity);

	printf("Enter a price: ");
	scanf("%lf", &price);

	printf("Enter a six digit part number: ");
	scanf("%d", &digit);
	
	fprintf(inventory, "%-d %-d %-.2lf\n", digit, quantity, price);
	}
	
}
