#include<stdio.h>
int main()
{
int name,age;
printf("enter name\n");
scanf("%c", &name);
printf("\nYour name is = %c",name);
printf("enter age\n");
scanf("%d", &age);
printf("\nYou are %d years old",age);
printf("hello you are %d years old", &age);
return 0;
}
