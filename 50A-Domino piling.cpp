
#include<iostream>
using namespace std;

int numOfDominos(int M,int N){
   int dominos = 0;
   dominos = (M*N)/2;
   return dominos;
}

int main(){
    int M,N;
    cin>>M>>N;
    int d = numOfDominos(M,N);
    cout<<d<<endl;
}
