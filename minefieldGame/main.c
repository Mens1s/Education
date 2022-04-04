#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_table(char game[4][8]){

    for(int a = 0 ; a < 4; a++) {
        for(int b = 0 ; b < 8;b++) {
            printf("%c ",game[a][b]);
        }printf("\n");
    }

}

void draw_table(char game[4][8], char bombs[4][8]){

    FILE *fp = fopen("play.txt","w");

    for(int a = 0 ; a < 4; a++) {
        for(int b = 0 ; b < 8;b++) {
            game[a][b] = 'X';
            bombs[a][b] = 'X';
        }
    }
    srand(time(0));
    for(int a = 0; a < 4;a++){
        int r_1 = rand() % 8;
        int r_2 = rand() % 8;

        while(r_1 == r_2) {
            
            r_2 = rand() % 8;
        }
        bombs[a][(r_1)] = '0';
        bombs[a][(r_2)] = '0';
    }
    for(int a = 0 ; a < 4; a++) {
        for(int b = 0 ; b < 8;b++) {
            fputc(bombs[a][b],fp);
        }fputc('\n',fp);
    }
    fclose(fp);
}

int play(char game[4][8],char bombs[4][8],int row,int col){
    if(bombs[row][col] == '0' ) return -1;
    if(game[row][col] != 'X') return 0;
    int count = 0;
    for(int a = 0; a < 8; a++){
        for(int b = 0; b < 8 ;b++){ 
            if(bombs[a][b] == '0'){
                if(a == row && col == b-1) count++;
                if(a-1 == row && col == b-1) count++;
                if(a-1 == row && col == b) count++;
                if(a-1 == row && col == b+1) count++;
                if(a == row && col == b+1) count++;
                if(a+1 == row && col == b+1) count++;
                if(a+1 == row && col == b) count++;
                if(a+1 == row && col == b-1) count++;
            }
        }
    } 
    game[row][col] = (char)count+48;
    return 1;
}

int main(){
    int res;
    int play_time = 0;
    char game[4][8];
    char bombs[4][8];

    int row;
    int col;

    draw_table(game,bombs);

    do{
        show_table(game);
        printf("\nPlease enter row[0,7] : ");
        scanf("%d",&row);

        printf("\nPlease enter col[0,7] : ");
        scanf("%d",&col);

        while(row > 4 || row < 0 || col > 7 || col < 0){
            printf("\nPlease enter right numbers..");
            printf("\nPlease enter row[0,7] : ");
            scanf("%d",&row);

            printf("\nPlease enter col[0,7] : ");
            scanf("%d",&col);
        }
        // -1 patladin
        res = play(game,bombs,row,col);
        if(res == 1) play_time++;
    }while(res != -1 && play_time <= 24);
    if(res == -1) printf("You Blow UP !");
    return 0;
}