//ALUNOS:FABRÍCIO MADY & BERNADO KANEKIYO
#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

bool compare(const pair<int, int>&i, const pair<int, int>&j){
    return i.second < j.second;
}

int main(){

  vector <pair <int,int> > vetor,aux;
  int n,f;
  int s1,s2;

  cin >> n;

  for (int i=0;i<n;i++){
    cin >> f;
    vetor.push_back(make_pair(f,i+1));
  }

  sort(vetor.begin(),vetor.end(),compare);
  reverse(vetor.begin(),vetor.end());
  sort(vetor.begin(),vetor.end());

  s1 =vetor[n-1].first;
  s2 =vetor[n-2].first;

  for (int i=0;i<n;i++){
    if (vetor[i].first == s1){
        aux.push_back(make_pair(vetor[i].first,vetor[i].second));
    }
  }

  for (int i=0;i<n;i++){
    if (vetor[i].first == s2){
        aux.push_back(make_pair(vetor[i].first,vetor[i].second));
     }
  }

  if (aux[0].second > aux[1].second){
    cout <<aux[1].second <<" "<<aux[0].second;
  }
  else{
     cout <<aux[0].second <<" "<<aux[1].second;
  }



  return 0;
}
