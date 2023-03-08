#include<stdio.h>

int main()
{
	//duzeltmeli oldugun bir pox var burda
	
	int x;
	int y;
	int toplama;
	int cixma;
	int vurma;
	int bolme;
	printf("1ci ededi yaz :");
	scanf("%d",&x);
	printf("2ci ededi yaz :");
	scanf("%d",&y);
	printf("emeller :\n1-toplama\n2-cixma\n3-vurma\n4-bolme\n");
	int emel;
	printf("\nemel secin :");
	scanf("%d",&emel);
	toplama=x+y;
	cixma=x-y;
	vurma=x*y;
	bolme=x/y;
	switch(emel)
	{
		case 1: printf("emelin neticesi :%d",toplama);break;
			
		case 2: printf("emelin neticesi :%d",cixma);break;
			
		case 3: printf("emelin neticesi :%d",vurma);break;
			
		case 4: printf("emelin neticesi :%d",bolme);break;
		
		default:printf("duz emel sec de gijdillax");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
