#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b){
	return a+b;
}

int ops(int a,int b,char islem){
	/*
	int a,b;
	char islem[1];
	int result;
	printf("please enter values : \n");
	scanf("%d%d",&a,&b);
	printf("please enter your op :");
	scanf(" %c",&islem);
	result = ops(a,b,*islem);
	printf("Your result is : %d",result);
	*/
	switch(islem){
		case '+':
			return a+b;
			break;
		case '-':
			return a-b;
			break;
		case '*':
			return a*b;
			break;
		case '/':
			return a/b;
			break;
		default:
			return 0;
	}
}

int fakt(int a){
	/*
	int a;
	printf("please enter a values that will be factoried : ");
	scanf("%d",&a);
	int result = fakt(a);
	printf("%d factoried is %d",a,result);
	*/
	int b = a;
	a = 1;
	for(;b>0;b--){
		a = b*a;
	}
	return a;
}

int usal(int a,int b){
	/*
	int a,b;
	printf("please enter your under number : ");
	scanf("%d",&a);
	printf("please enter your upper number : ");
	scanf("%d",&b);
	int result = usal(a,b);
	printf("your %d ^ %d equals to : %d",a,b,result);
	*/
	int protect = a;
	for(int c = 1;c<b;c++){
		a = a*protect;
	}
	return a;
}

void multifakt(int a){
	/*
	int a;
	printf("please enter a number : ");
	scanf("%d",&a);
	multifakt(a);
	*/
	int result = 1;
	int c;
	for(int b = 0;b<a;b++){
		result = 1;
		for(c = 1;c<=b;c++){
			result = result * (c+1);
		}
		printf("%d ! = %d \n",c,result);
	}
}

int check(int a){
	/*
	int a;
	while(1){
		printf("enter a number : ");
		scanf("%d",&a);
		int cont = check(a);
		if(cont==0)break;
	}
	*/
	if(a<0) return 0;
	else return 1;
}

int perfect(int a){
	/*
	int a;
	printf("please enter a value : ");
	scanf("%d",&a);
	int check = perfect(a);
	if(check == 1) printf("perfect number");
	else printf("not perfect number");
	*/
	int control = 0;
	for(int b = 1;b<=(a/2);b++){
		if(a%b==0){
			control += b;
		}
	}
	if(control == a) return 1;
	else return 0;
	
}

int bigger(int a,int b){
	/*
	int a,b;
	printf("please enter two values : \n");
	scanf("%d%d",&a,&b);
	int result = bigger(a,b);
	if(result==1) printf("%d is bigger than %d",a,b);
	else if(result == 0) printf("%d is bigger than %d",b,a);
	else printf("Thet are equal");
	*/
	if(a>b)return 1;
	else if(b>a) return 0;
	else return 2;
}

int evenorodd(int a){
	/*
	int a;
	printf("please enter values : " );
	scanf("%d",&a);
	int result = evenorodd(a);
	if(result == 1) printf("%d is even",a);
	else printf("%d is odd",a);
	*/
	if(a%2==0) return 1;
	else return 0;
}

void showodd(int a){
	/*
	int a;
	printf("please enter a value : ");
	scanf("%d",&a);
	showodd(a);
	*/
	for(int b=1;b<=a;b++){
		if(b%2 != 0){
			printf("%d\t",b);
		}
		if(b%5==0){
			printf("\n");
		}
	}
}

void fibonacci(int a){
	/*
	int a;
	printf("enter end point of fibonacci : ");
	scanf("%d",&a);
	fibonacci(a);
	*/
	int tutucu=1;
	int c = 1;
	printf("1 \t 1 \t");
	for(int b=3;b<=a;b++){
		int d = c;
		c = tutucu+c;
		printf("%d\t",c);
		tutucu = d;
	}
	
}

void floyd(int a){
	/*
	int a;
	printf("enter a number : ");
	scanf("%d",&a);
	floyd(a);
	*/
	int d = 1;
	for(int b = 1;b<=a;b++){
		for(int c = 0;c<b;c++){
			printf("%d\t",d);
			d++;
		}
		printf("\n\n");
	}
}

int max(int a){
	/*
	int a;
	printf("please enter a value : ");
	scanf("%d",&a);
	int maks = max(a);
	printf("maks value is : %d\n",maks);
	int minn = min(a);
	printf("min value is : %d\n",minn);
	*/
	int b = 0;
	int num;
	int cont = 0;
	while(b<a){
		num = rand()%100;
		printf("your number is %d\n",num);
		if(cont<num)cont = num;
		b++;
	}
	return cont;
}
int min(int a){
	/*
	int a;
	printf("please enter a value : ");
	scanf("%d",&a);
	int maks = max(a);
	printf("maks value is : %d\n",maks);
	int minn = min(a);
	printf("min value is : %d\n",minn);
	*/
	int b;
	int num;
	int cont=100;
	while(b<a){
		num = rand() %100;
		printf("your num is : %d \n",num);
		if(num<cont) cont=num;
		b++;
	}
	return cont;
}

void checkarr(int a,int rm){
	/*
	int a,b;
	printf("please enter a value : ");
	scanf("%d",&a);
	printf("please enter a value that you will remove : ");
	scanf("%d",&b);
	checkarr(a,b);
	*/
	int b=0;
	char arr[a];
	while(b<a){
		arr[b] = rand()%100;
		printf("your %d . value is %d \n",b+1,arr[b]);
		b++;
	}
	b = 0;
	while(b<a){
		if(rm<=b){
			arr[b] = arr[b+1];
		}
		else{
			arr[b] = arr[b];
		}
		b++;
	}
	b=0;
	while(b<a-1){
		printf("your %d . value is now %d \n",b+1,arr[b]);
		b++;
	}
}

void drawBak(int a){
	/*
	int a;
	printf("please enter a value: ");
	scanf("%d",&a);
	drawBak(a);
	*/
	int en = a*2-1;
	for(int c = 1;c<=en;c++){
		if(c<=a){
			for(int d = 0;d<a-c;d++){
				printf(" ");
			}
			for(int d = 0;d<c*2-1;d++){
				printf("%c",'c');
			}	
		}
		else{
			int d;
			for(d = 0;d<c-a;d++){
				printf(" ");
			}
			for(int f = 0;f<en-(d*2);f++){
				printf("%c",'c');
			}
		}
		printf("\n");
	}
}

void arrList(int a){
	/*
	int a;
	printf("please enter a value : ");
	scanf("%d",&a);
	arrList(a);
	*/
	int arr[a];
	int newarr[a];
	int cont = 0;
	int b= 0;
	while( b < a){
		arr[b] = rand()%100;
		if(b%5==0){
			printf("\n");
		}
		printf("%d\t",arr[b]);
		b++;
	}
	int c=0,d=0;
	while( c < a){
		while( d < a){
			if(cont < arr[d]){
				cont = arr[d];
				newarr[c] = cont;
			}
			d++;
		}
		c++;
	}
	b=0;
	while( b < a){
		if(b%5==0){
			printf("\n");
		}
		printf("%d\t",newarr[b]);
		b++;
	}
	
}

void addArr(int a, int num, int index){
	/*
	int a,b,c;
	printf("please enter a value : ");
	scanf("%d",&a);
	printf("please enter a value that enrol arr : ");
	scanf("%d",&b);
	printf("please enter index number : ");
	scanf("%d",&c);
	addArr(a,b,c);
	*/
	int b=0;
	int arr[a+1];
	int tutucu,tut;
	while(b<a){
		arr[b] = rand()%90;
		printf("%d\t",arr[b]);
		b++;
	}
	b=0;
	while(b<a+1){
		if(b<index){
			arr[b] = arr[b];
		}
		else if(b==index){
			tutucu = arr[b];
			arr[b] = num;
		}
		else{
			tut = arr[b];
			arr[b] = tutucu;
			tutucu = tut; 
		}
		b++;
	}
	b=0;
	printf("\n");
	while(b<a+1){
		printf("%d\t",arr[b]);

		b++;
	}
}
	
void circle(int a){
	/*
	int a;
	printf("please enter radius : ");
	scanf("%d",&a);
	circle(a);
	*/
	printf(" alan : %.2f \n cevre : %.2f",a*a*3.14);
}	

void change(int a,int b){
	/*
	int a,b;
	printf("enter two values : ");
	scanf("%d%d",&a,&b);
	change(a,b);
	*/
	// return b,a;
	printf("%d, %d",b,a);
}

void divide(int a,int b){
	/*
	int a,b;
	printf("please enter values a/b :\n");
	scanf(" %d%d",&a,&b);
	divide(a,b);
	*/
	int first = a;
	int result = 0;
	while(a>b){
		a = a-b;
		result++;
	}
	printf("%d divide by %d is %d and remainder  is %d",first,b,result,a);
}

int median(int *arr,int boyut){
	int a;
	int boyut;
	int in;
	printf("please enter a value that you enter : ");
	scanf("%d",&boyut);
	int arr[boyut];
	while(a<boyut){
		printf("enter your %d . value : ",a+1);
		scanf("%d",&in);
		arr[a] = in;
		a++;
	}
	float returned = median(arr,boyut);
	printf("%.2f",returned);
	int sum;
	int b=0;
	
	while(b<boyut){
		sum = sum+ arr[b];
		b++;
	}
	float result = sum/boyut;
	return result;
}

int main(){
	
}