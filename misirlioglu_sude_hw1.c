#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main(void)
{
	char symbol;
	int width,length,side;
	float area,circumference,radius;
	
	printf("Enter the shape(C/c,S/s,R/r):");
	scanf(" %c",&symbol);
	
	if(symbol == 'C' || symbol == 'c')
	{
		printf("Enter the radius of circle:");
		scanf("%f",&radius);
		area=pi*radius*radius;
        circumference=2*pi*radius;
        printf("Circle's area is %.2lf and circumference is %.2lf.  ",area,circumference);
	}
	else if(symbol=='S'|| symbol=='s')
	{
		printf("Enter the side of square:");
        scanf("%d",&side);
        area=side*side;
        circumference=4*side;
        printf("Square's area is %.2lf and circumference is %.2lf . \n ",area,circumference);
	}
	else if(symbol =='R'|| symbol == 'r')
	{
		printf("Enter the width and length of rectangle:");
         scanf("%d%d",&width,&length);

         if (width==length)
         {
         printf("Error. It is not a rectangle. \n");
         }
         else if (width<length)
         {
         area=width*length;
         circumference=2*(width + length);
         printf("Rectangle's area is %.2lf and circumference is %.2lf . \n",area,circumference);
        
         }
	}
	else 
	{
		printf("Error! It is not a correct shape. \n");
	}
	system("Pause");
	return 0;
}
