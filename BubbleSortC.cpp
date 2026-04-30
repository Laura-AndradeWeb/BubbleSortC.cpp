/*
Nome: BubbleSortC.cpp
Autor: Laura Farias
Data 29/04/2026
Descrição: Programa que ordena um vetor através do algoritmo de ordenção BubbleSort
*/

#include <stdio.h>

//seção de prototipação
void BubbleSort(int *, int);
void ImprimeVetor(int*, int);

//Variáveis globais
int comp, trocas; //variáveis que respectivamente armazenam quantidade de comparações e trocas.

main()
{

    int vetor[] = {15, 22, 1, 23, 6}; //vetor recebe 5 valores desordenados
    int tam = sizeof(vetor)/sizeof(int); //tamanho recebe o tamanho do vetor
    comp = trocas = 0;

    puts("Vetor desordenado: ");
    ImprimeVetor(vetor, tam);
    BubbleSort(vetor, tam); //Chama a função com os parametros vetor e tamanho
    puts("\nVetor ordenado pelo BubbleSort: ");
    ImprimeVetor(vetor, tam);

}

//Função que ordena o vetor através do BubbleSort
void BubbleSort(int *vet, int tam)
{

    int i, j, aux;

    for(i = tam-1; i >= 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            //"Se o elemento selecionado for maior que o seguinte..."
            if(vet[j] > vet[j+1])
            {
                //Faz a troca ultilizando a variável auxiliar
                aux = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = aux;
                trocas++;
            }
            comp++;
        }
    }


}

//Função para imprimir o vetor
void ImprimeVetor(int *vet, int tam)
{

    for(int i = 0; i < tam; i++)
        printf("%d|", vet[i]);

}
