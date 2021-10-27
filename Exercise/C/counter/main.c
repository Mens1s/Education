#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
		char cdizi[140];
		int harf[140]={};
		long int follower=0;
		int sayici = 1;
		int kelime=0,sayi=0,bosluk=0;
    	printf("Bir karakter dizisi giriniz: ");
    	fgets(cdizi,40,stdin);
    	while(cdizi[follower] != EOF){
    		if(cdizi[follower]==' '){
    			if(sayici==0){
    				kelime++;
    			}
    			bosluk++;
    			sayici = 1;
    		}
    		else if((int)cdizi[follower] <= 122 && 65 <= (int)cdizi[follower]){
    			if((int)cdizi[follower]<=90){
    				harf[(int)cdizi[follower]-(int)'A']++;
    			}
    			else{
    				harf[(int)cdizi[follower]-(int)'a']++;
    			}
    			sayici = 0;
    		}
    		else if((int)cdizi[follower]>=48 && (int)cdizi[follower]<=57){
    			sayi++;
    			sayici = 0;
    		}
    		follower++;
    	}
    	printf(" bosluk : %d\n kelime : %d\n sayi : %d\n",bosluk,kelime,sayi);
	
	

	/*
	char cumle[100];
	char alfabe[100] = {};
	int i;
	int maks;
	char maks_c;
	printf("please enter your sentence : ");
	gets(cumle);
	for(int c = 0;c<strlen(cumle);c++){
		alfabe[(int)cumle[c]-(int)'a']++;	
	}
	for(int c = 0;c<40;c++){
		if(maks<alfabe[c]){
			maks = alfabe[c];
			maks_c = cumle[c+1];
		}
		
	}
	printf("maks len : %d and char is : %c",maks,maks_c);
	*/
	return 0;
}