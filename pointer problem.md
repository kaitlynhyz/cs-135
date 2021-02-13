## The overarching problem:
Create a program which accepts two user inputted values for the cost of shows, passees the cost of the two pairs of shoes and the tax rate in the counties they will be broug in to the function `calc_total()`, calculates the total cost of the two pairs of shoes in the function, and then prints the total cost of the shoes to the screen.

## Result

```
Enter the cost of the first pair: 81.99
Enter the county's tax rate: .0825
Enter the cost of the second pair: 82.99
Enter the county's tax rate: .0675

The first pair of shoes costs $88.75, the second pair costs $88.59
```
## Algorithm
### Main
1. Declare variables
1. Get user's input
1. Call calc_total
  1. Pass shoe variables by address
1. Print the total cost of the shoes

### Calc_Total
1. Deference shoe variable [to dereference a pointer --> use *]
1. Perform arithmetic on shoe variables

# Implementation
```
#include <stdio.h>

//prototype
void calc_total (double* first_pair, double* second_pair, double* first_taxrate, double* second_taxrate); 

int main(){

	double first_pair, first_taxrate, second_pair, second_taxrate;

	printf(“enter the cost of the first pair: \n“);
	scanf(“%lf”, &first_pair);

	printf(“enter the county’s tax rate: \n“);
	scanf(“%lf”, &second_taxrate);

	printf(“enter the cost of the second pair: \n“);
	scanf(“%lf”, &second_pair);

	printf(“enter the county’s tax rate: \n“);
	scanf(“%lf”, &second_taxrate);

	//pass shoe variables by address
	calc_total(&first_pair, &second_pair, first_taxrate, second_taxrate);
	
	printf(“the first pair of shoes costs %.2lf, the second pair costs %.2lf”, first_pair, second_pair);

	return 0;
}

void calc_total (double* first_pair, double* second_pair, double* first_taxrate, double* second_taxrate) 
{
	
	*first_pair = *first_pair + *first_pair*first_taxrate;
	*second_pair = *second_pair + *second_pair*second_taxrate; 
}

```
