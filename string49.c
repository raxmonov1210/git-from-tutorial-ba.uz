#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


// 49-misol, string
int main(){

    char satr1[]="salom dunyo kadilak salom kerak dsadsdsdsdsdsd dunyo seni toga fdsfdsf sdfs ngmas bilding saloms";
    int probellar[100], yordamchi_indexlovchi=0;


    for(int i=0; i<strlen(satr1); i++){
        if(satr1[i]==' '){
            probellar[yordamchi_indexlovchi++] = i;
        }
    }

    for(int i=0; i<yordamchi_indexlovchi-1; i++){
        if(i==0){
            for(int j=0; j<=probellar[i]-1; j++){
                if(satr1[j]==satr1[0] && j!=0){
                    satr1[j] = '.';
                }
            }
        } else {
            for(int j=probellar[i-1]+1; j<=probellar[i]-1; j++){
                if(satr1[j]==satr1[probellar[i-1]+1] && j!=probellar[i-1]+1){
                    satr1[j] = '.';
                }
            }
        }
        
        if(i==yordamchi_indexlovchi-2){
            for(int j=probellar[i+1]+1; j<=strlen(satr1)-1; j++){
                if(satr1[j]==satr1[probellar[i+1]+1] && j!=probellar[i+1]+1){
                    satr1[j] = '.';
                }
            }
        }
    }

    printf("Natija: %s", satr1);

    return 0;
}