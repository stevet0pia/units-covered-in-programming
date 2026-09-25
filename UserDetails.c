// User Details

#include <stdio.h>

int main(){
	//declare variable
	char name[15] ;//%s
	float height ;//%f
	double bankBalance ;//%lf
	int phoneNumber ;//%d
	
	printf("Enter your name: \t");
	scanf("%s",&name);
	
	printf("What is your height?  \t");
	scanf("%f", &height);
	
	printf("What is your bank account balance? \t");
	scanf("%lf", &bankBalance);
	
	printf("Enter your phone number: \t");
	scanf("%d", &phoneNumber);
	
	printf("My name is %s \n",name);
	printf("My height is %f  \n",height);
	printf("My bank account balance is %lf",bankBalance);
	printf("My phone number is %d",phoneNumber);
	
	
	return 0;
}