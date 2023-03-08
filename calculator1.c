#include<stdio.h>

int main (){
	printf("emeli secin :1-toplama; 2-cixma; 3-vurma; 4-bolme");
	int giris;
	printf("emeli secin :");
	scanf("%d",&giris);
	if(giris==1){
		int x;
		int y;
		int toplama;
		printf("1ci ededi yaz :");
		scanf("%d",&x);
		printf("2ci ededi yaz :");
		scanf("%d",&y);
		toplama=x+y;
		printf("emelin neticesi :%d",toplama);
	}
	else if(giris==2){
		int x;
		int y;
		int cixma;
		printf("1ci ededi yaz :");
		scanf("%d",&x);
		printf("2ci ededi yaz :");
		scanf("%d",&y);
		cixma=x-y;
		printf("emelin neticesi :%d",cixma);
	}
	else if(giris==3)
	{
		int x;
		int y;
		int vurma;
		printf("1ci ededi yaz :");
		scanf("%d",&x);
		printf("2ci ededi yaz :");
		scanf("%d",&y);
		vurma=x*y;
		printf("emelin neticesi :%d",vurma);
	}
	else if(giris==4){
		int x;
		int y;
		int bolme;
		printf("1ci ededi yaz :");
		scanf("%d",&x);
		printf("2ci ededi yaz :");
		scanf("%d",&y);
		bolme=x/y;
		printf("emelin neticesi :%d",bolme);
	}
	
	
	return 0;
}
