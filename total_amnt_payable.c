//Total amount payable

#include <stdio.h>

//function prototype
float calculateDiscount(float purchase_amnt);

int main(){
	
	float amount, result,final_amount;
	printf("Enter the amount purchased \t");
	scanf("%f", &amount);
	//function call
	result = calculateDiscount(amount);
	final_amount= amount -result;
	
	printf("\n");
	printf("STEVETOPIA'S DISCOUNT PROGRAM \n");
	printf("======================= \n");
	printf("Initial Amount: Ksh. %.2f \n",amount);
	printf("Discount Offered: Ksh. %.2f \n",result);
	printf("Final amount Payable: Ksh. %.2f \n",final_amount);
	printf("======================= \n");
	
	return 0;
}
//function definition
float calculateDiscount(float purchase_amnt){
	float discount;
	if (purchase_amnt <5000){
		discount = 0.05 * purchase_amnt;
		
	}
	else if (purchase_amnt >=5000 && purchase_amnt<=9999){
		discount = 0.1 * purchase_amnt;
		
	}
	else if(purchase_amnt>=10000){
		discount = 0.15 * purchase_amnt;
	}
	
	return discount;
}