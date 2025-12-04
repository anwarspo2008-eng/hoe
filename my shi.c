#include <stdio.h>
#include <stdbool.h>

float addition(float X, float Y) {
    return X + Y;
}
float prodiuit(float X, float Y){
    return X * Y;
}
float devision(float X, float Y){
    return X / Y;
}
float min(float X, float Y){
	return X-Y;
}
float power(float X, int Y) {
    float result = 1;
    int i;
for ( i = 0; i < Y; i++) {
        result *= X;
    }

    return result;
}



int main() {
    float  a, b; 
	float  result;
    char c;
    bool i;
    int exp;
    int choice1;
    float haha;
    int choice2;
    float H;
    int N;
    float power_result;
    
    while (true) {
  printf("------------------------------------------------------------------------------\n");	
  printf("-----welcome to my thing ------\n");  	
    	
printf("if u press 1 u will just calculate power (anything else to use normal calculator)\n");
scanf("%d", &choice2);

while (choice2 == 1) {  
    printf("---power---\n");
    printf("give me ur num: ");
    scanf("%f", &H);

    printf("give me the power value: ");
    scanf("%d", &N);

    power_result = power(H, N);
    printf("Result: %.2f\n", power_result);

    
    printf("press 1 to calculate another power, 0 to continue: ");
    scanf("%d", &choice2);
}




printf("--------calculator----------\n");

        printf("Enter first number: ");
        scanf("%f", &a);

       
        i = false;
        while (i == false) {

            printf("Enter operation (+, *, / , -): ");
            scanf(" %c", &c);

            if (c == '+' || c == '*' || c == '/' || c=='-') {
                i = true;
            } else {
                printf("try again with operations\n");
            }
        }

        printf("Enter second number: ");
        scanf("%f", &b);

        if (c == '+') {
            result = addition(a, b);
        } 
        else if (c == '*') {
            result = prodiuit(a, b);
        } 
        else if (c == '/') {
            if (b == 0) {
                printf("no dev by 0 \n");
                continue;
            }
            result = devision(a, b);
        }
        else if (c=='-'){
        	result = min(a,b);
		}

        printf("The result is: %.2f\n", result);
        
    if (result >0){
	
    printf("if u want to make ur result with power press 1\n");
scanf("%d", &choice1);

if (choice1 == 1){
    printf("give me the power u need: ");
    scanf("%d", &exp);
    haha = power(result, exp);
    printf("Result with power: %.2f\n", haha); 
    result = haha;
}else {
    printf("No power applied. result stays: %.2f\n", result);
}
}
printf("------------------------\n");  
	printf("%.2f \n",result);
}

    return 0;
}

