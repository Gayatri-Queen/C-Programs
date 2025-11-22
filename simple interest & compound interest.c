//simple interest and compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float P,T,R,SI,CI;
	printf("enter principle");
	scanf("%f",&P);
	printf("enter time period");
	scanf("%f",&T);
	printf("enter rate of interest");
	scanf("%f",&R);
	SI=P*T*R/100;
	CI=P*pow(1+R/100,T)-P;
	printf("the simple interest is %0.2f\n",SI);
	printf("the compound interest is %0.2f",CI);
}
