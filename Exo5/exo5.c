#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    int choice=0;
    FILE * file;
    int tab[10];

    while (choice != 1 && choice != 2)
    {
        printf("Veuillez choisir une des options suivantes : \n");
        printf("_________________________________________\n");
        printf("1.Ecrire dans le fichier \n");
        printf("2.Lire le fichier \n");
        printf("_________________________________________\n");
        scanf("%d",&choice);
    }

    switch (choice)
    {
    case 1:

        file= fopen("file.bin","wb");
        printf("Veuillez saisir les dix valeurs\n");
        for(int i=0 ; i<10 ; i++){
        printf("Veuillez saisir la valeur N %d\n",i+1);
        scanf("%d",&tab[i]); 
    }
        fwrite(tab,sizeof(int),10,file);

        fclose(file);
        break;
    case 2:
        file=fopen("file.bin","rb");
        printf("Affichage du contenu du fichier\n");
        fread(tab,sizeof(int),10,file);

        for (int i = 0; i < 10; i++)
        {
            printf("valeurs numero %d est de %d\n",i+1,tab[i]);
        }

        fclose(file);
        break;

    }
    return 0;
}





