//ALUNOS: FABRICIO MADY & BERNARDO KANEKIYO
#include <iostream>

using namespace std;

void calculaCristais(int d,int c){

   int cristaisFaltando=d-c;
   int i =2,j;
   int total=c,carga = c;

   while (cristaisFaltando > 0){
      j=0;
      carga--;
      total = total + (1*i);
      j++;
      carga++;
      i++;
      cristaisFaltando = cristaisFaltando-j;

   }

   cout << total;
}


int main(){

   int d,c;


    cin >> d;
    cin >> c;

    if (c >= d){
        cout <<d;
    }
    else{
      calculaCristais(d,c);
    }

  return 0;
}
