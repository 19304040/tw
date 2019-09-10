#include "stdio.h"
void main(){
    int i;
    int j;

    for(i = 0; i < 99999; i++){
        for(j = 0; j<99999; j++){
            printf("%d\t", i*j);
        }
        printf("\n");
    }
    //遊んでないで授業受けてください
}