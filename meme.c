#include<stdio.h>

int main() {
     char a ;
     char name [] = {} ;
     int age ;
     float salary ;
     double area ;
     printf ("Enter a character: ") ;
     scanf ("%c", &a);
     
     printf("Enter your name:",a);
     scanf("%s",&name);
     
     printf("Enter age:");
     scanf("%d",&age);
     
     printf("Enter salary:");
     scanf("%f",& salary );
     
     printf("Enter area:");
     scanf("%1f", &area);
     
     printf("The character is\t %c\n",a);
     printf("The name (string) is%s\n",name);
     printf("The age (int) is %d \n",age);
    printf("The salary(float) is %.2f \n",salary );
    printf("The area(double) is %.41f \n",area); 
                                
    return 0;
}