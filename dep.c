#include <stdio.h>

int main() {

	int income, data, sum;
	
	printf("Enter your income and data: ");
	scanf("%d""%d", &income, &data);

	if(income <= 100000) {
		if(data <= 30) {
			sum = income - income / 10;
			printf("Your deposit is: %d", sum);
		}
		else if(data <= 120) {
			sum = income + income * 2 / 100;
			printf("Your deposit is: %d", sum);
		}
		else if(data <= 240) {
			sum = income + income * 6 / 100;
			printf("Your deposit is: %d", sum);
		}
		else {
			sum = income + income * 12 / 100;
			printf("Your deposit is: %d", sum);
		}
	}
	else {
        if(data <= 30) {
            sum = income - income / 10;
            printf("Your deposit is: %d", sum);
        }
        else if(data <= 120) {
            sum = income + income * 3 / 100;
            printf("Your deposit is: %d", sum);
        }
        else if(data <= 240) {
            sum = income + income * 8 / 100;
            printf("Your deposit is: %d", sum);
        }
        else {
            sum = income + income * 15 / 100;
            printf("Your deposit is: %d", sum);
        }
	}
	return 0;
}