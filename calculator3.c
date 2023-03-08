#include<stdio.h>

int main (){
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
	toplama=x+y;
	printf("emeli secin :\n1-toplama;\n2-cixma;\n3-vurma;\n4-bolme");
	int giris;
	printf("emeli secin :");
	scanf("%d",&giris);
	if(giris==1)
	{	
		printf("emelin neticesi :%d",toplama);
	}
	else if(giris==2)
	{
		printf("emelin neticesi :%d",cixma);
	}
	else if(giris==3)
	{
		printf("emelin neticesi :%d",vurma);
	}
	else if(giris==4)
	{		
		printf("emelin neticesi :%d",bolme);
	}
	else
	{
		printf("duz emel sec de gijdillax");
	}
	
	
	return 0;
}
