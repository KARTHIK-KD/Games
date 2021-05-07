#include<stdio.h>
struct tictok
{
char arr[10];
};
void main()
{
	struct tictok t;
	int k=1,opt,inti=1,p1=1,p2=0,c=0,plp,cc,m=0,ccc,tra=0,cccc=0;
	char name1[100],name2[100],y;
	printf("PLAYER 1 , PLEASE ENTER YOUR NAME :"); 
	scanf("%s",&name1);
	printf("PLAYER 2 , PLEASE ENTER YOUR NAME :"); 
	scanf("%s",&name2);
	printf("\n<<<<<<<<<<<<<<<HELLO PLAYERS..!WELCOME,YOUR GAME IS START>>>>>>>>>>>>>>>\n");
	printf("\nPLAYER 1: %s\n",name1);
	printf("PLAYER 2: %s\n",name2);
	printf("\n");
	cccc:
	for(int i=1;i<10;i++)
	{
		t.arr[i]='*';
	}
	cc:
	printf("	");
	
	while(m<9)
	{
		m++;
		if(c==2)
		{
			printf("%c\n	",t.arr[m]);
			c=0;
		}
		else
		{
			c=c+1;
			printf("%c  ",t.arr[m]);
		}
	}
	
	printf("\n");
	m=0;
	if((t.arr[2]=='o' && t.arr[5]=='o' && t.arr[8]=='o') || (t.arr[1]=='o' && t.arr[2]=='o' && t.arr[3]=='o') || (t.arr[1]=='o' && t.arr[4]=='o' && t.arr[7]=='o') || (t.arr[1]=='o' && t.arr[5]=='o' && t.arr[9]=='o') || (t.arr[3]=='o' && t.arr[6]=='o' && t.arr[9]=='o') || (t.arr[7]=='o' && t.arr[8]=='o' && t.arr[9]=='o') || (t.arr[4]=='o' && t.arr[5]=='o' && t.arr[6]=='o') || (t.arr[3]=='o' && t.arr[5]=='o' && t.arr[7]=='o') )
{
	printf("PLAYER1 %s WIN....!!!\n",name1);
	inti=10;
}
	if((t.arr[2]=='x' && t.arr[5]=='x' && t.arr[8]=='x') || (t.arr[1]=='x' && t.arr[2]=='x' && t.arr[3]=='x') || (t.arr[1]=='x' && t.arr[4]=='x' && t.arr[7]=='x') || (t.arr[1]=='x' && t.arr[5]=='x' && t.arr[9]=='x') || (t.arr[3]=='x' && t.arr[6]=='x' && t.arr[9]=='x') || (t.arr[7]=='x' && t.arr[8]=='x' && t.arr[9]=='x') || (t.arr[4]=='x' && t.arr[5]=='x' && t.arr[6]=='x') || (t.arr[3]=='x' && t.arr[5]=='x' && t.arr[7]=='x') )
{
	printf("PLAYER2 %s WIN....!!!\n",name2);
	inti=10;
}		if(tra==9)
		{
		printf(" MATCH TRA....YOU WILL CONTINUE PRESS 'Y' ,YOU ARE EXIT PRESS 'N': ");
		scanf("%c",&y);
		if(y=='Y' || y=='y')
		{
			goto cccc;
		}
		else
		{
			printf("THANKS FOR PLAYING");
		}
		}

	while(inti<10)
	{tra+=1;
	ccc:
	printf("SELECT YOUR POSITION ");
		if(p1==1)
		{
			printf("PLAYER1 %s:",name1);
			scanf("%d",&plp);
			if(t.arr[plp]=='o' || t.arr[plp]=='x' || plp==0)
			{
				printf("SORRY PLEASE ANOTHER ONE POSIOTION...PLEASE TRY AGAIN:");
				goto ccc;
			}
				
			t.arr[plp]='o';
			p1=0;p2=1;inti+=1;
			goto cc;
		}
		if(p2==1)
		{
			printf("PLAYER2 %s:",name2);
			scanf("%d",&plp);
			if(t.arr[plp]=='x' || t.arr[plp]=='o')
			{
				printf("SORRY THIS POSITION IS ALREADY SELECTED...PLEASE TRY AGAIN:");
				goto ccc;
			}
			t.arr[plp]='x';
			p1=1;p2=0;inti+=1;
			goto cc;
		}
	}
	
	
		printf("YOU WILL CONTINUE PRESS 'Y' ,YOU ARE EXIT PRESS 'N': ");
		scanf("%c",&y);
		if(y=='Y' || y=='y')
		{
			goto cccc;
		}
		else
		{
			printf("THANKS FOR PLAYING");
		}
	
	
}









