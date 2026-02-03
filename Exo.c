#include <stdio.h>
int main(){
    int i,n,nombre;
    int sommeImpairs = 0;
    int compteurImpairs = 0;
    float moyenne;

    printf("Combien de nombres voulez-vous entrer ? ");
    scanf("%d",&n);

    for(i = 1; i <= n; i+=1){
        printf("Entrez le nombre numero %d : ", i);
        scanf("%d", &nombre);
        if(nombre % 2 != 0){
            sommeImpairs += nombre;
            compteurImpairs += 1;
        }
    }
        if (compteurImpairs > 0){
            moyenne = (sommeImpairs * 1.0) / compteurImpairs;
            printf("\nLa moyenne des %d nombres pairs est : %.2f\n", compteurImpairs, moyenne);
        } else {
            printf("\nVous n'avez saisi aucun nombre impair.\n");
        }
    return 0;
}
