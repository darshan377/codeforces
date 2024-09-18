#include<iostream>
using namespace std;

 void help(int n){
     for(int i=1;i<=n;i++){
        cout<<"I ";
        if(i%2 == 0){
            cout<<"love ";
        }
        else{
            cout<<"hate ";
        }
        if(i == n){
            cout<<"it ";
        }
        else{
            cout<<"that ";
        }
     }
}

int main(){
    int n;
    cin>>n;
    help(n);
}
