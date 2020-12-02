#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int loop=0;
    FILE * file;
    char filename[255];
    char str[1024];
    printf("Veuillez introduire le nom de fichier\n");
    scanf(" %[^\n]",filename);

    file = fopen(filename,"w");  
    if(file != NULL){

        fclose(file);
        }else{
            printf("erreur de lecture");
            return 0;
        }
    while(loop ==0){
        fopen(filename,"a");
        printf("Veuillez saisir une phrase :  \n");
        scanf(" %[^\n]",str); 
        if(strcmp(str,"")==0){
            printf("erreur dans la valeur introduite\n");
            loop=1;
        }else{
        fputs(str,file);
        fclose(file);
        strcpy(str, "");
        }
    }

    return 0;
}
