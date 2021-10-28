#include <stdio.h>

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
int main(){
	
}