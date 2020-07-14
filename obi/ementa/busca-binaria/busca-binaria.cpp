#include <iostream>
#define MAXN 10000010 /*Tamanho máximo do vetor*/
using namespace std;
int vetor[MAXN], tam; /*Declaração do vetor e do seu tamanho*/
/*Algoritmo da Busca Binária*/
int bb(int valor){
    int hi=tam-1;
    int lo=0;
    int mid;
    while(hi>=lo){
        mid=(hi+lo)/2;
        if(vetor[mid]==valor) return mid;
        if(vetor[mid]<valor) lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}
int main(){
    /*Etapa de inicialização*/
    int valor_buscado;
    cin>>tam;
    for(int i=0;i<tam;i++) cin>>vetor[i];
    cin>>valor_buscado;
    /*Fim da inicialização*/
    cout<<bb(valor_buscado)<<"\n";
    return 0;
}