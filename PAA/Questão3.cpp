//ALUNOS: FABRICIO MADY & BERNARDO KANEKIYO
#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

int main(){

    unsigned long long int testaOver = numeric_limits<unsigned long long int>::max();
    unsigned long long int a,l,c;

    int n,ra,aux=0,aux2=0;
    int total=0;

    vector<unsigned long long int> p;
    vector<unsigned long long int> r;


    cin >> n;



    for (int i=0;i<n;i++){
       cin>> a;
       cin>> l;
       cin>> c;

       testaOver = pow (a,2) - pow (l,2) - pow (c,2);

       if (testaOver < 0){

       }
       else{
         p.push_back(pow(a,2)+pow(l,2)+pow(c,2));
       }

    }

     for (int i=0;i<n;i++){
       cin >> ra;
       r.push_back(4*(pow(ra,2)));
    }

    sort(p.begin(),p.end());
    sort(r.begin(),r.end());

    while (aux <n && aux2<n){
        if (p[aux] <= r[aux2]){
            aux++;
            aux2++;
            total++;
        }
        else{
            aux2++;
        }
    }

    cout << total;



    return 0;

}
