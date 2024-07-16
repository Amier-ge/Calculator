#include<stdio.h>

void input(double *num1, char *sym, double *num2);
void calculator(double *num1, char *sym, double *num2, double *total);

int main(){

	double num1, num2, res;
	char symbol;

	do{
		input(&num1, &symbol, &num2);
		if(num2 == 0) printf("\n<<Do not input '0' to num2>>\n\n");
	}while(num2 == 0);

	calculator(&num1, &symbol, &num2, &res);

	printf("Answer : %.1lf\n", res);

	return 0;
}

void input(double *num1, char *sym, double *num2){
	int count = 0;
	do{
		if(count > 0) printf("\n");
		printf("** 기호는 사칙연산만 가능 **\n");
		printf("수식(ex → 12+13) : ");
		scanf("%lf%c%lf", num1, sym, num2);
		count++;
	}while( (*sym != '+') && (*sym != '-') && (*sym != '*') && (*sym != '/') );

}

void calculator(double *num1, char *sym, double *num2, double *total){

	switch(*sym){
		case '+':
			*total = *num1 + *num2;
			break;
		case '-':
			*total = *num1 - *num2;
			break;
		case '*':
			*total = *num1 * *num2;
			break;
		case '/':
			*total = *num1 / *num2;
			break;
		default:
			break;
	}
	
}