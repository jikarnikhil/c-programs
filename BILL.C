#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
char a[10];
int i,pr,qty,tprice,n=10;
float discprice;

printf("enter ten items details to read=%d",n);
//scanf("%d",&n);

for(i=1;i<=n;++i)
{
	printf("\nenter the product name::");
	//fflush(stdin);
	//gets(a[i])
	scanf("%s",&a);
	printf("enter the product price::");
	scanf("%d",&pr);
	printf("enter quantity::");
	scanf("%d",&qty);
	tprice=pr*qty;
}

	printf("\nproduct name\tprice\tquantity\tamount");
	for(i=0;i<n;i++)
	{
	printf("\n%s\t\t%.2f\t\t%d\t%.2f",a,pr,qty,pr*qty);
	}


printf("\nthe total bill is::%d",tprice);
discprice=tprice-(tprice*0.05);
printf("\ntotal bill with 5 percent discount::%f",discprice);
getch();
return 0;
}