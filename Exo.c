#include <stdio.h>
int main(){
    int i,n,nombre;
    int sommePairs = 0;
    int compteurPairs = 0;
    float moyenne;

    printf("Combien de nombres voulez-vous entrer ? ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        printf("Entrez le nombre numero %d : ", i);
        scanf("%d", &nombre);
        if(nombre % 2 == 0){
            sommePairs += nombre;
            compteurPairs += 1;
        }
    }
        if (compteurPairs > 0){
            moyenne = (sommePairs * 1.0) / compteurPairs;
            printf("\nLa moyenne des %d nombres pairs est : %.2f\n", compteurPairs, moyenne);
        } else {
            printf("\nVous n'avez saisi aucun nombre pair.\n");
        }
    return 0;
}
