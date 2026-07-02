#include <stdio.h>
int main(){
	int age;
	printf("how old are you?");
	scanf("%d", &age);
	
	if(age>=18) {
		printf("yes you are eligible to vote \n");
	}
	else if(age>=15) {
		printf("with time you will be voting");
	}
	else {
		printf("sorry, you are not eligible!");
	}
	return 0;
}
