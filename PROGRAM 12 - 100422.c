 /* Reading 20 integers from the user and storing them in an array.
 Return the number of elements in the array that are divisible by a number entered by the user.*/

#include <stdio.h>
#include <stdlib.h>

void ler_vet(int vet[20])
{
/* Reading 20 integers from the user and storing them in an array. */
    int i;
    for (i = 0; i < 20; i++)
    {
        printf("Digite o elemento do vetor [%d]: ", i);
        scanf("%d", &vet[i]);
    }
    return;
}
void exb_vet(int vet[20])
{
/* Printing the array. */
    int i;
    for (i = 0; i < 20; i++)
        printf("%d ", vet[i]);
    printf("\n\n");
    return;
}
void verif_ind(int vet[20], int num)
{
/* Counting the number of elements in the array that are divisible by the number entered by the user. */
    int i, count = 0;
    for (i = 0; i < 20; i++)
    {
        if (vet[i] % num == 0)
            count++;
    }
    printf("Qtd de numeros divisiveis por %d: %d\n\n", num, count);
    return;
}

main()
{
    int vetor[20], n;

    printf("Vetor:\n");
    ler_vet(vetor);

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    printf("Vetor digitado:\n");
    exb_vet(vetor);

    verif_ind(vetor, n);

    system("pause");
}
