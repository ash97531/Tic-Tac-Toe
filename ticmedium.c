#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char block[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int computer_move_1(){
    
    if (block[0]=='O'){
        while(1){
            int k = rand() %5;
            if(block[k] != 'X' && block[k] != 'O' && (k==1 || k==3 || k==4)){
                // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
                return k; 
            }
        }
    }

    if (block[1]=='O'){
        while(1){
            int k = rand() %6;
            if(block[k] != 'X' && block[k] != 'O' && (k==0 || k==2 || k==4 || k==7)){
                // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
                return k; 
            }
        }
    }

    if (block[2]=='O'){
        while(1){
            int k = rand() %6;
            if(block[k] != 'X' && block[k] != 'O' && (k==1 || k==4 || k==5)){
                // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
                return k; 
            }
        }
    }

    if (block[3]=='O'){
        while(1){
            int k = rand() %6;
            if(block[k] != 'X' && block[k] != 'O' && (k==0 || k==4 || k==5 || k==6)){
                // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
                return k; 
            }
        }
    }

    if (block[4]=='O'){
        while(1){
            int k = rand() %6;
            if(block[k] != 'X' && block[k] != 'O' && (k==0 || k==1 || k==2 || k==3 || k==5 || k==6 || k==7 || k==8)){
                // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
                return k; 
            }
        }
    }

    if (block[5]=='O'){
        while(1){
            int k = rand() %6;
            if(block[k] != 'X' && block[k] != 'O' && ( k==2 || k==3 || k==4 || k==8)){
                // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
                return k; 
            }
        }
    }

    if (block[6]=='O'){
        while(1){
            int k = rand() %6;
            if(block[k] != 'X' && block[k] != 'O' && ( k==3 || k==4 || k==7)){
                // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
                return k; 
            }
        }
    }

    if (block[7]=='O'){
        while(1){
            int k = rand() %6;
            if(block[k] != 'X' && block[k] != 'O' && (k==1 || k==4 || k==6 || k==8)){
                // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
                return k; 
            }
        }
    }

    if (block[8]=='O'){
        while(1){
            int k = rand() %6;
            if(block[k] != 'X' && block[k] != 'O' && ( k==4 || k==5 || k==7)){
                // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
                return k; 
            }
        }
    }

    return 10;
    
}

int computer_move_2(){
    int count=0, empty=0;
    for(int i=0; i<3; i++){
        if(block[i]=='O'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[0]!='O'){return 0;}    if(block[1]!='O'){return 1;}     if(block[2]!='O'){return 2;}
    }

    count=0, empty=0;
    for(int i=3; i<6; i++){
        if(block[i]=='O'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[3]!='O'){return 3;}    if(block[4]!='O'){return 4;}     if(block[5]!='O'){return 5;}
    }

    count=0, empty=0;
    for(int i=6; i<9; i++){
        if(block[i]=='O'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[6]!='O'){return 6;}    if(block[7]!='O'){return 7;}     if(block[8]!='O'){return 8;}
    }

    count=0, empty=0;
    for(int i=0; i<7; i+=3){
        if(block[i]=='O'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[0]!='O'){return 0;}    if(block[3]!='O'){return 3;}     if(block[6]!='O'){return 6;}
    }

    count=0, empty=0;
    for(int i=1; i<8; i+=3){
        if(block[i]=='O'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[1]!='O'){return 1;}    if(block[4]!='O'){return 4;}     if(block[7]!='O'){return 7;}
    }

    count=0, empty=0;
    for(int i=2; i<9; i+=3){
        if(block[i]=='O'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[2]!='O'){return 2;}    if(block[5]!='O'){return 5;}    if(block[8]!='O'){return 8;}   
    }

    count=0, empty=0;
    for(int i=0; i<9; i+=4){
        if(block[i]=='O'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[0]!='O'){return 0;}    if(block[4]!='O'){return 4;}     if(block[8]!='O'){return 8;}
    }

    count=0, empty=0;
    for(int i=2; i<7; i+=2){
        if(block[i]=='O'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[2]!='O'){return 2;}    if(block[4]!='O'){return 4;}     if(block[6]!='O'){return 6;}
    }

    return 10;
}

int player_move_2(){
    int count=0, empty=0;
    for(int i=0; i<3; i++){
        if(block[i]=='X'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[0]!='X'){return 0;}    if(block[1]!='X'){return 1;}     if(block[2]!='X'){return 2;}
    }

    count=0, empty=0;
    for(int i=3; i<6; i++){
        if(block[i]=='X'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[3]!='X'){return 3;}    if(block[4]!='X'){return 4;}     if(block[5]!='X'){return 5;}
    }

    count=0, empty=0;
    for(int i=6; i<9; i++){
        if(block[i]=='X'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[6]!='X'){return 6;}    if(block[7]!='X'){return 7;}     if(block[8]!='X'){return 8;}
    }

    count=0, empty=0;
    for(int i=0; i<7; i+=3){
        if(block[i]=='X'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[0]!='X'){return 0;}    if(block[3]!='X'){return 3;}     if(block[6]!='X'){return 6;}
    }

    count=0, empty=0;
    for(int i=1; i<8; i+=3){
        if(block[i]=='X'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[1]!='X'){return 1;}    if(block[4]!='X'){return 4;}     if(block[7]!='X'){return 7;}
    }

    count=0, empty=0;
    for(int i=2; i<9; i+=3){
        if(block[i]=='X'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[2]!='X'){return 2;}    if(block[5]!='X'){return 5;}     if(block[8]!='X'){return 8;}
    }

    count=0, empty=0;
    for(int i=0; i<9; i+=4){
        if(block[i]=='X'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[0]!='X'){return 0;}    if(block[4]!='X'){return 4;}     if(block[8]!='X'){return 8;}
    }

    count=0, empty=0;
    for(int i=2; i<7; i+=2){
        if(block[i]=='X'){count++;}
        if (block[i]!='O' && block[i]!='X'){empty++;}
    }
    if(count ==2 && empty==1){
        if(block[2]!='X'){return 2;}    if(block[4]!='X'){return 4;}     if(block[6]!='X'){return 6;}
    }

    return 10;
}

int computer(){
    srand(time(NULL));
    
    int x=1;
    while(x==1){
        int comp_move = rand() %9;

        if(block[comp_move] != 'X' && block[comp_move] != 'O'){
            // printf("\nCOMPUTER MOVE: %d\n", comp_move + 1);
            return comp_move; 
        }
    }
}

int win(){
    
    if ((block[0]=='X' && block[1]=='X' && block[2]=='X')
     || (block[0]=='X' && block[3]=='X' && block[6]=='X')
     || (block[2]=='X' && block[5]=='X' && block[8]=='X')
     || (block[6]=='X' && block[7]=='X' && block[8]=='X')
     || (block[0]=='X' && block[4]=='X' && block[8]=='X')
     || (block[6]=='X' && block[4]=='X' && block[2]=='X')
     || (block[3]=='X' && block[4]=='X' && block[5]=='X')
     || (block[1]=='X' && block[4]=='X' && block[7]=='X')){

         return 1;

    } else if ((block[0]=='O' && block[1]=='O' && block[2]=='O')
    || (block[0]=='O' && block[3]=='O' && block[6]=='O')
    || (block[2]=='O' && block[5]=='O' && block[8]=='O')
    || (block[6]=='O' && block[7]=='O' && block[8]=='O')
    || (block[0]=='O' && block[4]=='O' && block[8]=='O')
    || (block[6]=='O' && block[4]=='O' && block[2]=='O')
    || (block[3]=='O' && block[4]=='O' && block[5]=='O')
    || (block[1]=='O' && block[4]=='O' && block[7]=='O')){

        return 2;

    } 
    
    return 3;
}

int main(){

    for(int i=0; i<5; i++){
        printf("\n");
        printf(" %c | %c | %c \n", block[0], block[1], block[2]);
        printf("--------------\n");
        printf(" %c | %c | %c \n", block[3], block[4], block[5]);
        printf("--------------\n");
        printf(" %c | %c | %c \n", block[6], block[7], block[8]);

        int j;

        while(1){
            printf("YOUR CHANCE: ");
            scanf("%d", &j);
            if (j>=1 && j<=9){
                if(block[j-1]!='X' && block[j-1]!='O'){
                    block[j-1] = 'X';
                    break;
                } else {
                    printf("ALREADY FILLED, PLEASE TRY AGAIN\n");
                }
            } else {
                printf("INVALID INPUT\n");
            }
        }

        if (i !=4 ){
            if (computer_move_2() != 10){
                int cmove2=computer_move_2();
                block[cmove2]='O';
                printf("COMPUTER MOVE: %d\n", cmove2+1);
            } else if (player_move_2() != 10){
                int pmove2=player_move_2();
                block[pmove2] = 'O';
                printf("COMPUTER MOVE: %d\n", pmove2+1);
            } else if(computer_move_1() != 10){
                int cmove1=computer_move_1();
                block[cmove1]='O';
                printf("COMPUTER MOVE: %d\n", cmove1 + 1);
            } else {
                int cmove=computer();
                block[cmove]='O';
                printf("COMPUTER MOVE: %d\n", cmove+1);
            }
        }

        if (win() == 1){

            printf("\n");
            printf(" %c | %c | %c \n", block[0], block[1], block[2]);
            printf("--------------\n");
            printf(" %c | %c | %c \n", block[3], block[4], block[5]);
            printf("--------------\n");
            printf(" %c | %c | %c \n", block[6], block[7], block[8]);

            printf("\nYOU WON\n");
            return 0;
        } else if(win() == 2){

            printf("\n");
            printf(" %c | %c | %c \n", block[0], block[1], block[2]);
            printf("--------------\n");
            printf(" %c | %c | %c \n", block[3], block[4], block[5]);
            printf("--------------\n");
            printf(" %c | %c | %c \n", block[6], block[7], block[8]);

            printf("\nYOU LOST !!!\n");
            return 0;
        } 
        
    }    

    printf("\n");
    printf(" %c | %c | %c \n", block[0], block[1], block[2]);
    printf("--------------\n");
    printf(" %c | %c | %c \n", block[3], block[4], block[5]);
    printf("--------------\n");
    printf(" %c | %c | %c \n", block[6], block[7], block[8]);

    printf("\nGAME DRAW\n");
    return 0;
}