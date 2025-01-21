#include <stdlib.h>
#include <stdio.h>


int soma_vet(int vet[], int num){
    int soma =0;
    int *result;
    int *final = vet + num;
    /*while(num > 0){
        soma += *result;
        num= num-1;
        ++*result;
    }*/

    for (result = vet; result < final; ++result)
    {
        soma += *result;
    }
    

    return soma;
}

int main(void){
    int vet[5]={1,2,3,4,5};
    printf("A soma desse vetor e = %d\n", soma_vet(vet,5));
    
    return 0;
}