#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 39-misol, string
int main(){

    char satr1[]="salom dunyo salom, dunyo seni togangmas, bilding salom";
    int index1=-1, index2=-1;


    for(int i=0; i<strlen(satr1); i++){
        if(satr1[i]==' '){
            if(index1==-1){
                index1 = i;
            } else if(index2==-1){
                index2 = i;
            } else {
                break;
            }
        }
    }   
    char satr2[100]="";
    int index3=0;

    for(int i=index1+1; i<index2; i++){
        satr2[index3++] = satr1[i];
    }

    printf("%s\n", satr2);

    return 0;
}