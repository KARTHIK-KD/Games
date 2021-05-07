#include<stdio.h>
int main()
{
int date,month,year,n,nn,now,m;
int arr[12]={6,2,2,5,0,3,5,1,4,6,2,4};
printf("ENTER YOUR DATE  : ");
scanf("%d",&date);
date=date%7;
printf("ENTER YOUR MONTH : ");
scanf("%d",&month);
m=month;
month=arr[month-1];
printf("Enter YOUR YEAR  : ");
scanf("%d",&year);
if(year%400==0)
{
year=0;
printf("%d",year);
}
else
{
n=year;
n=n%100;
year=year-n;
if(year%4==0 && (m==1 || m==2))
{
month=month-1;
}

nn=n/4;
year=year%400;
if(year==100)
{
year=5;
}
else if(year==200)
{
year=3;
}
else
{
year=1;
}
}
year=year+n+nn;
year=year%7;
now=(date+month+year)%7;
switch(now)
{
	case 0:printf("SUNDAY");break;
	case 1:printf("MONDAY");break;
	case 2:printf("TUSDAY");break;
	case 3:printf("WEDNESDAY");break;
	case 4:printf("THURSDAY");break;
	case 5:printf("FRIDAY");break;
	case 6:printf("SATERDAY");break;
}

}
