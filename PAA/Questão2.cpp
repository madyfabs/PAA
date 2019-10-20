//ALUNOS:FABRICIO MADY & BERNADO KANEKIYO
#include <iostream>
#include <cmath>


using namespace std;


void coinRow(unsigned long long int *vetor, int k, int distancia){
    unsigned long long int fila[k+1];
    fila[0] = 0;
    fila[1] = vetor[0];

    for(int i=2;i<=k;i++){
        if((i-distancia)>0){
            fila[i] = max(vetor[i-1] + fila[i-distancia], fila[i-1]);

        }else{
            fila[i] = max(vetor[i-1] + fila[0], fila[i-1]);
             }
    }
    cout << fila[k];
}

int main(){

   unsigned long long int *x;
   int tamVetor;
   int distancia;

   cin>>tamVetor;
   x= new unsigned long long int[tamVetor];

   for(int i=0;i<tamVetor;i++){
    cin>>x[i];
   }

   cin>> distancia;

   coinRow(x,tamVetor,distancia);

}
