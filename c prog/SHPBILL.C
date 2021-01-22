#include<stdio.h>
#include<conio.h>
void main()
{       float bill,rate[10];
    int qty[10],i,bid,n;
    float disc;
    char item[10][20];
    clrscr();
    printf("\nHow many purchase items=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("\nEnter the %d item name=",i+1);
       //fflush(stdin);
	gets(item[i]);
	printf("\nEnter the rate of %s item=",item[i]);
	scanf("%f",&rate[i]);
	printf("\nEnter the quantity of %s item=",item[i]);
	scanf("%d",&qty[i]);
	bill=bill+(rate[i]*qty[i]);
    }
    if(bill<=2000)
    {
    disc=0;
    }
    else if(bill>2000 && bill<5000)
    {
    disc=bill-(bill*0.08);
    }
    else if(bill>=8000 && bill<=10000)
    {
    disc=bill-(bill*0.12);
    }
    else if(bill>=10000)
    {
    disc=bill-(bill*0.2);
    }
    printf("\nItem name\tRate\tQty\tAmount");
    for(i=0;i<n;i++)
    {
    printf("\n%s\t\t%.2f\t%d\t%.2f",item[i],rate[i],qty[i],rate[i]*qty[i]);
    }

    printf("\n\n\t\t\tTotal=  %.2f",bill);
    printf("\nbill after discount=%.2f",disc);
    getch();
}