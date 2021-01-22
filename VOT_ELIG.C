#include<stdio.h>
#include<conio.h>
int voting(int i);

int voting(int i)
{
	if(i>18)
	{
	printf("\nperson is  eligible");
	}
	else
	{
	printf("\nperson is not eligible");
	}

	return i;

}


void main()
{
char a[10];
int n,i;
clrscr();
printf("enter the person name::");
scanf("%s",a);
printf("\nenter the age::");
scanf("%d",n);
voting(i);

//return 0;
getch();
}
