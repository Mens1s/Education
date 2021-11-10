#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void rightArrow(){
	int sayi;
	printf("please enter a value : ");
	scanf("%d",&sayi);
	for(int a = 0;a<sayi;a++){	
		for(int b = 0;b<a;b++){
			printf("  ");
		}
		for(int b = 0;b<sayi-a;b++){
			printf("* ");
		}
		if(a != sayi-1){
			printf("\n");
		}
		
	}
	for(int a  = 0;a<sayi+1;a++){
		for(int b = 0;b<sayi-a;b++){
			printf("  ");
		}
		for(int b = 0;b<a;b++){
			printf("* ");
		}
		printf("\n");
	}
}
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
void saglam(){
	int d;
	printf("please enter a column number : ");
	scanf("%d",&d);
	d = d+1;
	long column[d][d];
	column[0][0]=1;
	column[1][1]=1;
	column[1][0]=1;
	for(int a = 0;a<d;a++){
		column[a][a]=1;	
		column[a][0]=1;	
		for(int b = 1;b<a;b++){
			column[a][b]=column[a-1][b]+column[a-1][b-1];		
		}
	}
	for(int a = 0;a<d-1;a++){
		if(a == 0){
			printf("P\t");
		}
		printf("%d\t",a);
		if(a==d-2){
			printf("\n");
			printf("n\t\t ------------------------------------------------------");
		}
	}
	
	for(int c = 0;c<d;c++){
		printf("%d -- \t",c);
		for(int e = 0;e<c;e++){
			printf("%d\t",column[c][e]);
		}printf("\n");
	}
}
void carpimtablo(){
	int sayi;
	printf("please enter a number : ");
	scanf("%d",&sayi);
	int arr[sayi][sayi];
	for(int a = 1;a<=sayi;a++){
		printf("\t %d",a);
		for(int b = 1;b<=sayi;b++){
			arr[a-1][b-1]=a*b;
		}
		if(a==sayi){
			printf("\n -------------------------------------------------------------------------------------- \n");
		}
	}
	for(int a = 0;a<sayi;a++){
		printf("%d\t",a+1);
		for(int b = 0;b<sayi;b++){
			printf("%d\t",arr[a][b]);
		}printf("\n");
	}
}
void charCounter(){
	char string[100];
	printf("please enter your sentence : ");
	fgets(string,100,stdin);
	int arr[32][50]={0,0};
	for(int a = 0;a<strlen(string);a++){
		if((int)string[a]>96 && (int)string[a]<123){
			arr[(int)string[a]-96][1]++;
		}
		else if ((int)string[a]>64 && (int)string[a]<90){
			arr[(int)string[a]-64][1]++;
		}
	}
	for(int a = 0;a<27;a++){
		printf("%c   :   %d \n",(char)a+65,arr[a+1][1]);
	}
}
void cift(int sayi){
	if(sayi%2==0){
		printf("Entered number is a multiple of 2\n");
	}}
void thirt(int sayi){
	if(sayi%3==0){
		printf("Entered number is a multiple of 3\n");
	}
	if(sayi%6==0){
		printf("Entered number is a multiple of 6\n");
	}
}
void divide(int *deger){
	if(*deger%2==0){
		printf("your entered number is multiple of 2\n");
	}
	if(*deger%3==0){
		printf("your entered number is multiple of 3\n");
	}
	if(*deger%6==0){
		printf("your entered number is multiple of 6\n");
	}
}
void calculator(char *op,int *a,int *b){
	/*
		int a,b;
	char op;
	printf("please enter your op: ");
	scanf("%c",&op);
	printf("please enter two number : ");
	scanf(" %d%d",&a,&b);
	calculator(&op,&a,&b);
	*/
	switch(*op){
		case '+':
			printf("%d + %d = %d",*a,*b,*a+*b);
			break;
		case '-':
			printf("%d - %d = %d",*a,*b,*a-*b);
			break;
		case '/':
			printf("%d / %d = %d",*a,*b, (int)(*a / *b));
			break;
		case '*':
			printf("%d X %d = %d",*a,*b,*a * *b);
			break;
	}
}
void arrlist(){
	int len;
	printf("please enter your arr length :");
	scanf("%d",&len);
	int arr[len];
	for(int c = 0;c<len;c++){
		arr[c] = rand() % 100;
	}
	for(int d = 0;d<len;d++){
		int temp = 0;
		for(int c = 0;c<len-1;c++){
			if(arr[c]<arr[c+1]){
				continue;
			}
			else{
				temp = arr[c+1];
				arr[c+1]=arr[c]; 
				arr[c] = temp;
			}
		}
	}
	for(int a = 0;a<len;a++){
		printf("%d\t",arr[a]);
	}
}
int enterArr(int *min,int *max,int *sum){
	int column,line;
	int mina=100,maxa=0,suma=0;
	printf("please enter your column len : ");
	scanf("%d",&column);
	printf("please enter your line len : ");
	scanf(" %d",&line);
	int arr[column][line];
	for(int a = 0;a<line;a++){
		for(int b = 0;b<column;b++){
			printf("please enter your %d %d element : \n",a+1,b+1);
			scanf("%d",&arr[a][b]);
		}
	}
	printf("your arr is : \n");
	for(int a= 0;a<line;a++){
		for(int b = 0;b<column;b++){
			suma += arr[a][b];
			printf("%d\t",arr[a][b]);
			if(arr[a][b]>= maxa){	
				maxa = arr[a][b];
			}
			if(arr[a][b]<=mina){
				mina = arr[a][b];
			}
		}printf("\n");
	}
	*min = mina;
	*max = maxa;
	*sum = suma;
}
int main(){
	int sum,min,max;
	enterArr(&min,&max,&sum);
	printf(" sum is %d \n min is %d \n max is %d",sum,min,max);
}