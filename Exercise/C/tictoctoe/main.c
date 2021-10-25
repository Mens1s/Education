#include <stdio.h>
#include <stdlib.h>

int main()
{
    int selected_number,player,step;
    player = 2;
    char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int winning = 0;
    while(step<9){
        printf(" -----------\n");
        board(arr);
        printf("\n Player : %d \n please select number : ",(player%2)+1);
        scanf("%d",&selected_number);
        switch(selected_number)
        {
            case 1:
                if(player%2==0){
                    arr[0][0] = 'x';
                }
                else{
                    arr[0][0] = 'o';
                }
                break;
            case 2:
                if(player%2==0){
                    arr[0][1] = 'x';
                }
                else{
                    arr[0][1] = 'o';
                }
                break;
            case 3:
                if(player%2==0){
                    arr[0][2] = 'x';
                }
                else{
                    arr[0][2] = 'o';
                }
                break;
            case 4:
                if(player%2==0){
                    arr[1][0] = 'x';
                }
                else{
                    arr[1][0] = 'o';
                }
                break;
            case 5:
                if(player%2==0){
                    arr[1][1] = 'x';
                }
                else{
                    arr[1][1] = 'o';
                }
                break;
            case 6:
                if(player%2==0){
                    arr[1][2] = 'x';
                }
                else{
                    arr[1][2] = 'o';
                }
                break;
            case 7:
                if(player%2==0){
                    arr[2][0] = 'x';
                }
                else{
                    arr[2][0] = 'o';
                }
                break;
            case 8:
                if(player%2==0){
                    arr[2][1] = 'x';
                }
                else{
                    arr[2][1] = 'o';
                }
                break;
            case 9:
                if(player%2==0){
                    arr[2][2] = 'x';
                }
                else{
                    arr[2][2] = 'o';
                }
                break;
            default:
                printf("please enter correct value!");
        }
        player++;

        winning = winner(arr);
        if(winning==1){
            printf("\n player %d won the game.\n",(player%2));
            break;
        }
        step++;
        system("cls");
    }
    printf("\n the game has finished!\n");
    return 0;
}

void board(char arr[3][3]){
    for(int a = 0;a<3;a++){
        printf("| %c | %c | %c |\n",arr[a][0],arr[a][1],arr[a][2]);
        printf(" -----------\n");
    }
}
int winner(char arr[3][3]){
    if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]){
            return 1;
    }
    else if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2]){
            return 1;
    }
    else if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2]){
            return 1;
    }
    else if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2]){
            return 1;
    }
    else if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1]){
            return 1;
    }
    else if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2]){
            return 1;
    }
    else if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
            return 1;
    }
    else if(arr[0][2] == arr[1][1] && arr[1][1] == arr[0][2]){
            return 1;
    }
    else{
        return 0;
    }

}
