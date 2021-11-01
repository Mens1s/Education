#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void upperr(){
	char a;
	printf("please enter a big Character : ");
	scanf("%c",&a);
	if((int)a>96){
		printf("please enter a big Character!!!!");
	}
	else{
		printf("your char is %c",((int)a+32));
	}
}
void sqrrt(){
	int a;
	int result;
	do{
	printf("please enter a value : ");
	scanf("%d",&a);
	if(a>0){
		float b = sqrt(a);
		printf("your sqrt number is : %.2f\n",b);
	}
	else printf("pls enter pozitive number \n");
	continue;
	}while(a!=0);
}
void basic(){
	int a;
	printf("please enter a number : ");
	scanf("%d",&a);
	float result = 0;
	int takip = 1;
	do{
		result = (takip + 1)/(result+2);
		takip++;
		a--;
	}while(a>0);
	printf("result is : %.5f",result);
}
void pozorneg(){
	int a;
	printf(" if you type 85 you will exit. ");
	printf("\n please enter a value : ");
	do{
		
		//fflush(stdin);
		int typing = scanf("%d",&a);
		if(0==typing){
			printf("please enter a num.\n");
			a = 1;
		}
		else if(a>=0){
			printf("%d number is pozitive\n",a);
		}
		else if(a<0){
			printf("%d number is negative\n",a);
		}
		while(getchar()!='\n');
	}while(a != 85);
}
void threepow(){
	int initial = 1;
	int end =999;
	while(initial<=end){
		int hund = initial/100;
		int tens = (initial%100)/10;
		int ones = ((initial%100)%10);
		
		if(initial == pow(hund,3)+pow(ones,3)+pow(tens,3)){
			printf("%d\n",initial);
		}
		
		initial++;
	}
}
void numTriangle(){
	int a;
	printf("please enter a value: ");
	scanf("%d",&a);
	
	for(int b = 1;b<=a;b++){
		for(int c = 1;c<=b;c++){
			printf("%d",c);
		}
		printf("\n");
	}
}
void encoder(){
	char str[80];
	int encoder;
	printf("please submit your encoder : ");
	scanf("%d",&encoder);
	fflush(stdin);
	printf("please enter your password : ");
	fgets(str, 80, stdin);
	char pass[strlen(str)-1];
	for(int a = 0;a<strlen(str)-1;a++){
		pass[a] = (int)str[a]-encoder;
	}
	printf("your encoded password is %s \n",pass);
	char spass[strlen(str)-1];
	for(int a = 0;a<strlen(str)-1;a++){
		spass[a] = (int)pass[a]+encoder;
	}
	printf("your decoded password is ");
	for(int a = 0;a<strlen(str)-1;a++){
		printf("%c",spass[a]);
	}
}
int main(){
	char str[80];
	int encoder;
	printf("please submit your encoder : ");
	scanf("%d",&encoder);
	fflush(stdin);
	printf("please enter your password : ");
	fgets(str, 80, stdin);
	char pass[strlen(str)-1];
	for(int a = 0;a<strlen(str)-1;a++){
		pass[a] = (int)str[a]-encoder;
	}
	printf("your encoded password is %s \n",pass);
	char spass[strlen(str)-1];
	for(int a = 0;a<strlen(str)-1;a++){
		spass[a] = (int)pass[a]+encoder;
	}
	printf("your decoded password is ");
	for(int a = 0;a<strlen(str)-1;a++){
		printf("%c",spass[a]);
	}
}