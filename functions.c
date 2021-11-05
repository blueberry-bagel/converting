#include "functions.h"

int convert2Binary(unsigned int num)
{
    
    if(num == 0){
        for(int w = 1; w < 40; w++){
            if((w % 5) == 0){
                printf(" ");
            }else{
                printf("0");
            }
        }
        printf("\n");
        return 0;
    }
    
    if(num == 1){
        for(int i = 1; i < 39; i++){
            if((i % 5) == 0){
                printf(" ");
            }else{
                printf("0");
            }
        }
        printf("1");
        printf("\n");
        return 0;
    }
    
    int bin[32];
    
    int i = 0;
    while(num > 0){
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    int cr = i;
    int z = 38 - i;
    
    if(i < 31){
    for(int q = 1; q < z; q++){
        if((q % 5) == 0){
            printf(" ");
        }else{
            printf("0");
        }
    }
    }
    
    
    for(int j = i - 1; j >= 0; j--){ // 39 or 40
        if((cr % 4) == 0){
            printf(" ");
        }
        cr--;
        printf("%d", bin[j]);
    }
    
    printf("\n");
    
    return 0;
    
}

char convert2Hex(unsigned int num) //11 all space 2
{
    
    char fun = 'i';
    
    if(num == 0){
        for(int w = 1; w < 12; w++){
            if((w % 3) == 0){
                printf(" ");
            }else{
                printf("0");
            }
        }
        printf("\n");
        return fun;
    }
    
    if(num == 1){
        for(int i = 0; i < 11; i++){
            if((i % 3) == 0){
                printf(" ");
            }else{
                printf("0");
            }
        }
        printf("1");
        printf("\n");
        return fun;
    }
    
    
    char hex[100];
    
    int i = 0;
    while(num != 0){
        int temp = 0;
        
        temp = num % 16;
        
        if(temp < 10){
            hex[i] = temp + 48;
            i++;
        }else{
            hex[i] = temp + 55;
            i++;
        }
        num = num/16;
    }
    
    int cr = i;
    int z = 11 - i;
    
    if(i < 7){
    for(int q = 1; q < z; q++){
        if((q % 3) == 0){
            printf(" ");
        }else{
            printf("0");
        }
    }
    }
    
    for(int j = i-1; j >= 0; j--){
        if((cr % 2) == 0){
            printf(" ");
        }
        cr--;
        printf("%c", hex[j]);
    }
    
    printf("\n");
    
    
}

void printHex(char num)
{
    
}

void printBinary(int num)
{
    
}
