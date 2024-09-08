#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c;
	float discriminant, root1, root2;
	
	//input coefficient a, b, and c
	printf("enter the values of a, b, c : ");
	scanf("%f %f %f", &a, &b, &c);
	
	//calculate the discriminant
	discriminant = 	(b * b )- (4 * a * c );
	printf("\nD: %.3f", discriminant);
	
	
	//calculate root based on the value of discriminant
	if(discriminant > 0)
	{
		root1 = (- b + sqrt(discriminant) )/ (2 * a);
		root2 =(- b - sqrt(discriminant)) / (2 * a);
		printf(" Roots are real and distinct");
		printf(" Root 1 = %.2f\n" , root1);
		printf(" Root 2 = %.2f\n" , root2);
	}
	else if(discriminant==0)
	{
		root1 = - b / (2 * a);
		printf(" Roots are real and same ");
		printf(" Root 1 = %.2f \n" , root1);
	}
	else
	{
		
		printf("root are complex and different");
		
	}
	return 0;
}
