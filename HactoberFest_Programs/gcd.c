#include<stdio.h>
int gcd(int num1,int num2){
	int g;
for (int i = 1; i <= num1 && i <= num2; i++)
   {
      if (num1 % i == 0 && num2 % i == 0)
         g = i;
   }
return g;
}
int main(){
	int num1,num2,res=0;
	printf("\nEnter 2 numbers : ");
	scanf("%d%d",&num1,&num2);
	res=gcd(num1,num2);
	printf("\nGCD of %d and %d is : %d\n",num1,num2,res);
	return 0;
}
