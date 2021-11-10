#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countLetter(char arr[100],int *len){
	int counter;
	for(int a = 0;a <strlen(arr);a++){
		if( arr[a] != '\n' ){
			counter++;
		}
	}
	*len = counter;
}
void commanChar(char arr_one[100],char arr_two[100],int *len){
	int char_one[27]={0,0};
	int char_two[27]={0,0};
	int comman;
	for(int a = 0;a<strlen(arr_one);a++){
		if((int)arr_one[a]>96){
			char_one[(int)arr_one[a]-96]++;
		}
		else if((int)arr_one[a]>64){
			char_one[(int)arr_one[a]-64]++;
		}
	}
	for(int a = 0;a<strlen(arr_two);a++){
		if((int)arr_two[a]>96){
			char_two[(int)arr_two[a]-96]++;
		}
		else if((int)arr_two[a]>64){
			char_two[(int)arr_two[a]-64]++;
		}
	}
	for(int a = 0;a<=27;a++){
		if(char_one[a]>0 && char_two[a]>0){
			if(char_one[a] >= char_two[a]){
				comman += char_two[a];
			}
			else{
				comman += char_one[a];
			}
		}
	}
	*len = comman;
}

int main(){
	printf("please enter your char arr : ");
	char arr[100]; // array
	int len; // strlen
	fgets(arr,100,stdin);
	countLetter(arr,&len);
	
	int comChar;
	printf("please enter your first char arr : ");
	char arr_one[100];
	char arr_two[100];
	fgets(arr_one,100,stdin);
	printf("please enter your second char arr : ");
	fgets(arr_two,100,stdin);
	commanChar(arr_one,arr_two,&comChar);
	printf("your first char len is : %d \n",len);
	printf("comman char is %d",comChar);
}