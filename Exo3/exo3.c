#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Lire(FILE * file, char * filename,char * mod){

    file = NULL;
    printf("Veuillez introduire le nom de fichier ainsi que le mode de lecture \n");
    scanf("%[^\n]  %[^\n]",filename, mod);
    
    file=fopen(filename,mod);
        if(file!=NULL){
            printf("le nom du fichier et le mode de lecture sont correcte\n");

        }else{
            printf("le fichier n'existe pas ou le mode de lecture est incorrecte\n");
            return 1;
        }   
        fclose(file);
    return 0;
}


int Affichage(FILE * file, char *filename, char *aff){
    
    file=fopen(filename,"r");
    printf("Le contenu du fichier %s est le suivant : \n",filename);
    while((fscanf(file,"%[^\n]\n",aff))!=EOF){
        printf("%s \n",aff);

    }
    fclose(file);
    
    return 0;
}

int enregistrer(FILE * file, char * filename ){
    file=fopen(filename,"w");
    char chaine[255];
    printf("Entrez une chaine de caractere : ");
    scanf(" %[^\n]",chaine);
    fputs(chaine,file);
    fclose(file);
    return 0;

}

int main(){

    FILE * file;
    char * filename;
    char mod[255];
    char aff[255];

    
    if(Lire(file,filename,mod)==0){

        if(strcmp(mod,"r")==0){
            Affichage(file,filename,aff);

        }else{
            enregistrer(file,filename);
         }
    }

    return 0;
}
