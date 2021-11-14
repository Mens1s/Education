#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
	/*
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
	*/
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

void sqrtMy(double a){
	/*
	double a;
	printf("please enter value : ");
	scanf("%lf",&a);
	sqrtMy(a);
	return 0;
	*/
	double b = a/2;
	if(a>0.0){
		for(int i = 0;i<50;i++){
			b =((b*b)+a)/(2*b);
		}
		printf("%.2lf  karekoku = %.3lf",a,b);
	}
	else if(a==0)printf("%d  karekoku = %d",0,0);
	else{
		printf("please enter pozitive value");
	}
	
}

void drawBut(int a){
	/*
	int a;
	printf("please enter value: ");
	scanf("%d",&a);
	drawBut(a);
	*/
	int bos;
	int bosC=0;
	int starC=0;
	float result;
	result = a/2;
	if( a/2 < result) result = result;
	else result++;
	for(int sat = 0;sat<=a;sat++){
		if(sat<result){
			for(bos = 0;bos<sat;bos++){
				printf(" ");
			}
			for(int star = a;star>bos*2;star--){
				printf("*");
			}
			printf("\n");
		}
		else{
			for(bos = a/2;bos>bosC;bos--){
				printf(" ");
			}
			for(int star = 0;star<=starC;star++){
				printf("*");
			}
			bosC++;
			starC+=2;
			printf("\n");
		}
	}
}

void calculateHour(int a){
	/*
	int a;
	printf("please enter seconds : ");
	scanf("%d",&a);
	calculateHour(a);
	*/
	int hour = a/3600;
	int minute = (a%3600)/60;
	int seconds = ((a%3600)%60);
	printf("%d : %d : %d",hour,minute,seconds);
}

void toFahr(int a, int f){
	/*
	int a,b;
	printf("please enter (cel)degree : ");
	scanf("%d",&a);
	printf("please enter (fahr)degree : ");
	scanf("%d",&b);
	toFahr(a,b);
	*/
	float fahr = (1.8*a)+32;
	float celc = (5*(f-32))/9;
	printf(" %d celcius equals to %.2f fahrenit \n %d fahrenit is equals to %.2f celcius",a,fahr,f,celc);
}

void findArea(int a,int b,int c){
	/*
	int a,b,c;
	printf("please enter side lenght of threeangle : ");
	scanf("%d%d%d",&a,&b,&c);
	findArea(a,b,c);
	*/
	int u = (a+b+c)/2;
	float alan=sqrt(u*(u-a)*(u-b)*(u-c));
	printf("area is %.2f",alan);
}

void calArr(int a){
	/*
	int a;
	printf("please enter a value : ");
	scanf("%d",&a);
	calArr(a);
	*/
	int result = 0;
	for(int b = 1;b<=a;b++){
		result = result + b*b;
	}
	printf("%d",result);
}

void comArr(int fl,int sl){
	/*
	int a,b;
	printf("please enter lenght of first arr : ");
	scanf("%d", &a);
	printf("please enter lenght of second arr : ");
	scanf(" %d", &b);
	comArr(a,b);
	*/
	int f_arr[fl];
	int s_arr[sl];
	int r_arr[fl+sl];
	for(int a = 0;a<fl;a++){
		f_arr[a] = rand()%50;
		printf("%d\t",f_arr[a]);
	}
	printf("\n");
	for(int a = 0;a<sl;a++){
		s_arr[a] = rand()%50;
		printf("%d\t",s_arr[a]);
	}
	printf("\n");
	for(int a = 0;a<sl+fl;a++){
		if(a<fl){
			r_arr[a] = f_arr[a];
		}
		else{
			r_arr[a] = s_arr[a-fl];
		}
		printf("%d\t",r_arr[a]);
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Dışardan girilen n sayısına kadar olan sayıların toplamını veren c programı.
void sum(){
    int a,result= 0;
    printf("please enter a value : ");
    scanf("%d",&a);
    for(int b = 0;b<a;b++){
        result = result +b;
    }
    printf("result is : %d",result);
}

//Yarı çapı dışardan girilen bir dairenin çevresini ve alanını bulan c programı.

void circle(){
    int radius,len,alan;
    printf("please enter radius :");
    scanf("%d",&radius);
    printf(" area is : %.2f \n circumference length is : %.2f",2*3.14*radius*radius,2*radius*3.14);
}

//Dışarıdan girilen bir n tam sayısına kadar olan tek tam sayıların toplamını bulan c programı.
void tekTop(){
    int sayi,result =0;
    printf("please enter a value : ");
    scanf("%d",&sayi);
    for(int a = 1;a<sayi;a++){
        if(a%2==1){
            result = a+result;
        }
    }
    printf("the result is : %d",result);
}

//Dışardan girilen n sayısına kadar olan sayıların karelerinin toplamını hesaplayan c programı.
void sumsquare(){
    int sayi,result;
    printf("please enter a value : ");
    scanf("%d",&sayi);
    for(int a = 0;a<sayi;a++){
        result = result+(sayi*sayi);
    }
    printf("%d",result);
}

//Dışardan girilen 3 sayının en büyüğünü bulan c programı.
void findBig(){
    int a,result = 0;
    printf("please enter a len : ");
    scanf("%d",&a);
    int arr[a];
    for(int b = 0;b<a;b++){
        printf("please enter your %d . value : ",b+1);
        scanf("%d",&arr[b]);
        if(b>0){    
            if(arr[b]>arr[b-1]){
                result = arr[b];
            }
        }
    }
    printf("result is : %d",result);
}

//Dışardan girilen n adet sayının aritmetik sayının aritmetik ortalamasını bulan c programı
void arithmetic(){
    int len;
    float result = 0;
    printf("please enter a len : ");
    scanf("%d",&len);
    for(int a = 0;a<len;a++){
        int temp;
        printf("enter your %d value : ",a+1);
        scanf("%d",&temp);
        result = temp+result;
    }
    printf("your result is : %.2f",result/len);
}

//Çarpma işlemini kullanmadan iki sayının çarpımını bulan c programı
void longMulti(){
    int a,b;
    printf("please enter a first value : ");
    scanf("%d",&a);
    printf("please enter second value : ");
    scanf("%d",&b);
    int result = 0;
    for(int c = 0;c<b;c++){
        result = a+result;
    }
    printf("result is %d",result);
}

//1'den 999'a kadar olan tam sayılar içeresinden basamaklarının küp değeri toplamı kendisine eşit olan c programı
void interesting(){
    for(int sayi = 0;sayi<1000;sayi++){
        int yuz = sayi/100;
        int ond = (sayi%100)/10;
        int birlik = (sayi%100)%10;
        if((yuz*yuz*yuz)+(ond*ond*ond)+(birlik*birlik*birlik) == sayi)
        {
            printf("%d\n",sayi);            
        }
    }
    
}

//Dışarıdan girilen bir sayının rakamları toplamını bulan c programı.
void charSum(){
    int sayi = 0,result,toplam;
    printf("please enter a value : ");
    scanf("%d",&sayi);
    while(sayi>10){
        result = sayi%10;
        toplam += result;
        sayi = sayi / 10;
    }
    printf("%d",result);
}
/*
2 3 4 5 6
3 5 7 9 11
4 7 10 13 16
5 9 13 17 21
6 11 16 21 26
Yukarıdaki çıktıyı veren c programı.
*/
void dont(){
    for(int a = 1;a<7;a++){
        int sayi = 1;
        for(int b = 1;b<=5;b++){
            sayi = sayi+a;
            printf("%d\t",sayi);
        }printf("\n");
    }
}
/*
*
**
***
****
*****
Yukarıdaki çıktıyı veren c programı.
*/
void stars(){
    int sayi;
    printf("please enter a value : ");
    scanf("%d",&sayi);
    for(int a = 0; a<sayi;a++){
        for(int b = 0;b<a+1;b++){
            printf("* ");
        }printf("\n");
    }
}
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
Yukarıdaki çıktıyı veren c programı.
*/
void numPat(){
    int sayi;
    printf("please line number : ");
    scanf("%d",&sayi);
    int result = 1;
    for(int a = 1;a<=sayi;a++){
        for(int b = 0;b<a;b++){
            printf("%d ",result);
            result++;
        }printf("\n");
    }
}
// iki sayi arasındaki asal sayı adedi
void findPrime(){
    int start,end;
    printf("iki value enterla");
    int control = 0;
    scanf("%d%d",start,end);
    for(;start<end;start++){
        control = 0;
        for(int a = 2;a<start;a++){
            if(start%a == 0){
                control = 1;
            }
        }
        if(control == 0){
            printf("%d is prime",start);
        }
    }
}
/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1
7 6 5 4 3 2 1
Yukarıdaki çıktıyı veren c programı.
*/
void starPat(){
    for(int a = 0;a<8;a++){
        for(int b = a;b>0;b--){
            printf("%d\t",b);
        }printf("\n");
    }
}
//N elemanlı bir dizideki elemanların toplamını bulan program
void arrSum(){
    int len,sum = 0;
    printf("please enter your arr len: ");
    int arr[len];
    for(int a = 0;a < len; a++){
        printf("enter your %d . number of array : ");
        scanf("%d",arr[a]);
        sum += arr[a];
        printf("your new int is : %d and new sum is : %d",arr[a],sum);
    }
}

//N elemanlı bir dizideki pozitif elemanların ortalamasını bulan program.
void medianPoz(){
    int len;
    printf("please enter len : ");
    scanf("%d",&len);
    int arr[len];
    int sum;
    float control = 0;
    for(int a = 0;a<len;a++){
        printf("please enter %d . value.",a+1);
        scanf("%d",&arr[a]);
        if(arr[a]>0){
            sum += arr[a];
            control++;
        }
    }
    printf("median is : %.2f",(sum/control));
}
//N elemanlı bir dizideki en küçük elemanı ve bu elemanın adresini bulan program.
void findmin(){
    int a,min;
    printf("please enter len : ");
    scanf("%d",&a);
    int result[a];
    for(int b = 0;b<a;b++){
        printf("please enter a value : ");
        scanf("%d",&result[b]);
        if(b>0){
            if(result[b]<result[b-1]){
                min = result[b];
            }
        }
    }
    printf("min is : %d\n ",min);
    printf("location is : ",&min);
}

//Dışarıdan girilen N elemanlı bir diziyi tersine çeviren program.
void reverseArr(){
    int len;
    printf("please enter len : ");
    scanf("%d",&len);
    int arr[len];
    int control = 0;
    for(int a = 1;a<=len;a++){
        printf("please enter %d . value. ",a);
        scanf("%d",&arr[len-control-1]);
        control++;
    }
    for(int a = 0;a<len;a++){
        printf("your %d . value is : %d \n",a+1,arr[a]);   
    }
}

//Fibonacci Sayılarını dışarıdan girilen N sayısı kadar yazan c programı.
void fibonacc(){
    int end;
    printf("please end point : ");
    scanf("%d",&end);
    int now=1,temp=0,tempp = 0;
    for(int a = 0;a<end;a++){
        temp = now;
        now = now +tempp;
        tempp = temp;
        printf(" now is : %d  temp is : %d\n",now,temp);
    }
}
//N elemanlı bir dizideki tek elemanları dizinin başına çift elemanları dizinin sonuna taşıyan c programı.
void oddStart(){
    int len;
    printf("please enter value : ");
    scanf("%d",&len);
    int arr[len];
    int temp;
    int control_e = 1,control_o = 0;
    for(int a = 0;a<len;a++){
        printf("please enter your %d . value .", a+1);
        scanf("%d",&temp);
        if(temp % 2 == 0){
            arr[len-control_e] = temp;
            control_e++;
        }
        else{
            arr[control_o] = temp;
            control_o++;
        }
    }
    for(int a = 0;a<len;a++){
        printf("%d\n",arr[a]);
    }
}

//Dışarıdan girilen N boyutlu A ve B vektörlerinin skaler çarpımını hesaplayan c programı.
void skalerMinus(){
    //input
    int arr[3][3][3]=
    {
        {{1,2,3},{4,5,6},{7,8,9}},
        {{10,11,12},{13,14,15},{16,17,18}},
        {{19,20,21},{22,23,24},{25,26,27}}
    };
    int dimen;
    printf("please enter your array dimensions : ");
    scanf("%d",&dimen);
    
    for(int a = 0; a < dimen ; a++ ){
        int temp = 1;
        for(int b = 0;b<dimen;b++){
            temp *= arr[b][a][0];
            
        }printf("%d\n",temp);
        temp = 1;
        for(int b = 0;b < dimen ; b++){
            temp *= arr[b][a][1];
        }printf("%d\n",temp);
        temp = 1;
        for(int b = 0;b < dimen ; b++){
            temp *= arr[b][a][2];
        }printf("%d\n",temp);
    }

}

//Dışarıdan girilen n elemanlı bir dizideki en büyük elemanı en küçük elemanı ve en büyük elemanla en küçük eleman arasındaki farkı bulan c programı.
void sub(){
    int len;
    printf("please enter len : ");
    scanf("%d",&len);
    int arr[len];
    /*
    printf("please enter pozitive number if you say enough please type 0 or negative number : ");
    int temp = 1,a=0;
    while(temp > 0){
        scanf("%d",&temp);
        arr[a] = temp;
        a++;
    }
    */
   int big=0,small=100;
   for(int a = 0;a<len;a++){
        printf("please enter %d. number : ",a+1);
        scanf("%d",&arr[a]);
        if(a>0){
            if(arr[a]>arr[a-1]){
                big = arr[a];
            }
            else{
                small = arr[a];
            }
       }
   }
   printf("\n big is %d , smaall is : %d  substract is %d ",big,small,big-small);

}



//Bir dizinin elemanlarını dışarıdan girilen bir X sayısına göre küçükleri dizinin baş tarafına, büyükleri ise son tarafına yerleştiren program.
void orderByme(){
    int arr[10] = {5,3,8,2,6,9,7,4,1,0};
    printf("please enter value : ");
    int num;
    scanf("%d",&num);
    int big = 9;
    int small = 0;
    int temp;
    int new_arr[10];
    for(int a = 0;a<10;a++){
        if(num>arr[a]){
            new_arr[small] = arr[a];
            small++;
        }
        else{
            new_arr[big] = arr[a];
            big--;
        }
        
    }
    for(int a = 0;a<10;a++){
        printf("%d\n",new_arr[a]);
    }
}

//Dışarıdan girilen N elemanlı bir dizideki tek indisli elemanlarının başka bir diziye atayan program.
void evenIndex(){
    int len,counter = 0;
    printf("please enter a len ");
    scanf("%d",&len);
    int arr[len];
    int arr_o[len];
    for(int a = 0;a<len;a++){
        printf("please enter your %d. element : ",a+1);
        scanf("%d",&arr[a]);
        if(a == 0){
            a = a;
        }
        else if(a%2==0){
            a = a;
        }
        else{
            arr_o[counter] = arr[a];
            counter++;
        }
    }
    for(int a = 0;a<counter;a++){
        printf("%d\n",arr_o[a]);
    }
}   

//Dışarıdan girilen bir X değerinini yine dışarıdan girilen N elemanlı bir dizideki elemanlardan hangisine en yakın olduğunu bulan program.
void findNear(){
    int num,len;
    printf("please enter your num : ");
    scanf("%d",&num);
    printf("please enter len : ");
    scanf("%d",&len);
    int print;
    int temp = 0;
    int cevap = 11000;
    for(int a = 0;a<len;a++){
        printf("please enter your %d. value : ",a+1);
        scanf("%d",&temp);
        int result = num-temp;
        if (result < 0) result = -result;
        if(result < cevap){
            cevap = result;
            print = temp;
        }
    }
    printf("your result is : %d ",print);
}
//Permütasyon hesaplayan formülü fonksiyon kullanarak c kodlarını yazınız.
void perm(){
    char arr[3] = "abc";
    for(int a = 0; a < 3;a++){
        for(int b = 0; b< 3;b++){
            printf("%c %c\n",arr[a],arr[b]);
        }printf("\n");
    }
}
//Dışarıdan girilen bir sayının yine dışarıdan girilen üssünü hesaplayan programı fonksiyon kullanarak yapınız.
void us(){
    printf("please a number : ");
    int num;
    scanf("%d",&num);
    int temp = num;
    printf("please another number : ");
    int num_two;
    scanf("%d",&num_two);
    for(int a = 0;a<num_two-1;a++){
        num = num * temp;
    }
    printf("%d^%d is : %d",temp,num_two,num);
}
//N x M boyutlu matristeki en büyük elemanı ve bu elemanın satır ve sütün adresini bulan C programı.
void maks(){
    int line,column,maks;
    printf("please enter line number : ");
    scanf("%d",&line);
    printf("please enter column number : ");
    scanf("%d",&column);
    int arr[line][column];
    int temp = 0;
    int location_l,location_c;
    for(int a = 1;a<=line;a++){
        for(int b = 1;b<=column;b++){
            printf("please enter your %d. %d. value : ",a,b);
            scanf("%d",&arr[a][b]);
            if(b>0){
                if(arr[a][b]>maks){
                    location_l = a;
                    location_c = b;
                    printf("maks is %d %d ",location_l,location_c);
                    maks = arr[a][b];
                }
            }

        }
    }
    printf("maks is %d %d ",location_l,location_c);
}

//NxN boyutlu bir matrisin esas köşegenin elemanlarının toplamını bulan C programı
void find(){
    int len;
    printf("please enter n : ");
    scanf("%d",&len);
    int arr[len][len];
    int result;
    for(int a = 0;a<len;a++){
        for(int b = 0;b<len;b++){
            arr[a][b] = rand() % 100;
            if(a==b || a+b==len-1){
                if(a==b && a+b==len-1){
                    result += arr[a][b];
                }
                result += arr[a][b];
            }
            printf("%d \t",arr[a][b]);
        }printf("\n");
    }printf(" sum  is %d",result);
}

//NxM boyutlu iki matrisin toplamını bulan c programı.
void sumMatrix(){
    int line,column;
    printf("please enter a value : ");
    scanf("%d",&line);
    printf("please enter second value : ");
    scanf("%d",&column);
    int arr[line][column];
    int arr_2[line][column];
    int result = 0;
    for(int a = 0;a<line;a++){
        for(int b = 0;b<column;b++){
            arr[a][b] = rand() % 50;
            arr_2[a][b] = rand() % 50 +50;
            result += arr_2[a][b] + arr[a][b];
            printf("%d + %d = %d\n",arr[a][b],arr_2[a][b],result);
        }printf("\n");
    }
    printf("result is : %d",result);
}

//NxN boyutlu bir matrisin sütunları toplamını başka bir diziye atayan c programı.
void sumSutun(){
    int len;
    printf("please enter a len : ");
    scanf("%d",&len);
    int arr[len][len],return_arr[len][1];
    for(int a = 0;a<len;a++){
        int result = 0;
        for(int b = 0;b<len;b++){
            arr[a][b] = rand() % 100;
            result += arr[a][b];
        }
	    return_arr[a][0] = result;   
        printf("result is : %d\n",return_arr[a][0]);
    }
}

//Dışarıdan girilen NxN boyutlu bir matriste bazı hatalar oluşmuştur. Bu hatalar sıfır ile gösterilmiştir. Her satırda kaç tane hata olduğunu bulan c programı.
void fixMatrix(){
    int n = 5;
    int arr[5][5] ={
            {0,1,2,3,0},
            {4,5,0,7,0},
            {8,0,9,10,11},
            {12,0,14,15,0},
            {0,17,0,0,0}
            }; 
    for(int a = 0;a<n;a++){
        for(int b = 0;b<n;b++){
            if(arr[a][b]==0){
                arr[a][b] = 26;
            }
        }
    }
    for(int a = 0;a<n;a++){
        for(int b = 0;b<n;b++){
            printf("%d\t",arr[a][b]);
        }printf("\n");
    }
}

//Dışarıdan girilen NxN boyutlu bir kare matrisin simetrik olup olmadığını bulan c programı.
void simetricMatrix(){
    int len = 5;
    int arr[5][5] ={
            {0,0,0,0,0},
            {0,0,0,0,0},
            {0,0,0,0,0},
            {0,0,0,0,0},
            {0,0,0,0,0}
            };
    int non = 0;
    for(int a = 0;a<len;a++){
        int control = len-1;
        for(int b = 0;b<len/2-1;b++){
            if(arr[a][b]!=arr[a][control]){
                non = 1;
            }
            control--;
        }
    }
    printf("%d",non);
}

//Kullanıcı tarafından girilen metinin şifrelenip, çözülmesini sağlayan C programı.
void encode(){
    char sifre[100];
    char encoded[100];
    printf("please enter your password : ");
    fgets(sifre,100,stdin);
    for(int a = 0;a<strlen(sifre)-1;a++){
        
        encoded[a] = (char)((int)sifre[a]-24);
        printf("%c",encoded[a]);
        
    }
    printf("\n");
    int choice;
    printf("do you want your password again type 1:");
    scanf("%d",&choice);
    if(choice == 1){
        for(int a = 0;a<strlen(sifre)-1;a++){
        
        encoded[a] = (char)((int)encoded[a]+24);
        printf("%c",encoded[a]);
        
    }
    }
}

void sortingInt(){
    int len;
    printf("please enter a len of array : ");
    scanf("%d",&len);
    int arr[len];
    for(int a = 0; a < len ; a++){
        arr[a] = rand() % 100;
        printf("%d  ",arr[a]);
    }
    int temp;
    for(int a = 0; a < len ; a++){
        for(int b = 0; b < len-1 ; b++){

            if(arr[b]>arr[b+1]){
                temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = temp;
            }
        }
    }
    printf("\n");
    for(int a = 0;a<len;a++){
        printf("%d  ",arr[a]);
    }
}

void sortingChar(){
    printf("please enter your sentence : ");
    char sentence[100];
    fgets(sentence,100,stdin);
    char temp;

    for(int a = 0; a < strlen(sentence) ; a++){
        for(int b = 0; b < strlen(sentence)-1 ; b++){
            if((int)sentence[b] > (int)sentence[b+1] ){
                    temp = sentence[b];
                    sentence[b] = sentence[b+1];
                    sentence[b+1] = temp;
            }
        }
    }


    for(int a = 0; a < strlen(sentence) ; a++ ){
        printf("%c",sentence[a]);
    }
}  
int main(){

}