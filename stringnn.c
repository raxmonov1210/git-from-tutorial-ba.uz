#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool isAlpha(int belgi){

    if(belgi<91 && belgi>64 || belgi>96 && belgi<123){
        return true;
    } else {
        return false;
    }
}


// satrni so'zlarga ajratish, string
int main(){

    char satr1[]="salom dunyo salom ? 1234, dunyo seni togangmas, bilding salom", satr2[]="salom";
    int counter=0, tengmas=-1;


    for(int i=0; i<strlen(satr1); i++){
        if(!isAlpha(satr1[i]) && satr1[i]!=' '){
            continue;
        }

        if(isAlpha(satr1[i])){
            printf("%c", satr1[i]);
        } else {
            printf("\n");
        }

    }
    printf("\n");


    return 0;
}