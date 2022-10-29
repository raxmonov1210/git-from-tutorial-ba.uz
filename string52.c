#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


// 52-misol, string
int main(){

    char satr1[]="salom dunyo kadilak salom kerak dsadsdsdsdsdsd dunyo seni toga fdsfdsf sdfs ngmas saloms";
    int probellar[100], yordamchi_indexlovchi=0;


    for(int i=0; i<strlen(satr1); i++){
        if(satr1[i]==' '){
            probellar[yordamchi_indexlovchi++] = i;
        }
    }


    for(int i=0; i<yordamchi_indexlovchi-1; i++){
        if(i==0){
            satr1[0] = satr1[0]-32;
        } else {
            satr1[probellar[i-1]+1] = satr1[probellar[i-1]+1]-32;
        }

        if(i==yordamchi_indexlovchi-2){
            satr1[probellar[i]+1] = satr1[probellar[i]+1]-32;
            satr1[probellar[i+1]+1] = satr1[probellar[i+1]+1]-32;
        }
    }

    printf("Natija: %s", satr1);

    return 0;
}