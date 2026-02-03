#include <stdio.h>
int main(){
    int i,n,nombre;
    int sommeNegatifs = 0;
    int compteurNegatifs = 0;

    printf("Combien de nombres voulez-vous entrer ? ");
    scanf("%d",&n);

    for(i = 1; i <= n; i+=1){
        printf("Entrez le nombre numero %d : ", i);
        scanf("%d", &nombre);
        if(nombre < 0){
            sommeNegatifs += nombre;
            compteurNegatifs += 1;
        }
    }
        if (compteurNegatifs > 0){
            printf("\nVous avez saisi %d nombre(s) negatif(s).\n", compteurNegatifs);
            printf("La somme de ces nombres negatifs est : %d\n", sommeNegatifs);
        } else {
            printf("\nVous n'avez saisi aucun nombre negatif.\n");
        }
    return 0;
}
