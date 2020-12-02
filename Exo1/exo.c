#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Lire(FILE * file, char * filename,int size){

    file = NULL;
    printf("Veuillez introduire le nom de fichier\n");
    scanf("%[^\n]",filename);
    file=fopen(filename,"r");
        if(file!=NULL){
            
        }else{
            printf("le fichier n'existe pas\n");
            return 1;
        }   
    return 0;
}

int Calcule(FILE * file, char *filename, int * nbr){
    int nbr2=0;
    char l[255];
    file=fopen(filename,"r");
    while(fgets(l,255,file)!=NULL){
        nbr2++;
    }
    *nbr=nbr2;

    return 0;
}

int Affichage(int *nbr){
    
    printf("le fichier contient : %d line(s)\n",*nbr);
    
    return 0;
}

int main(){

    FILE * file;
    char * filename;
    int nbr=0;
    
    if(Lire(file,filename,255)==0){
    
    Calcule(file,filename,&nbr);
    Affichage(&nbr);
    }
    
    
    return 0;
}