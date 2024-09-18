

#include<iostream>
#include<string>
using namespace std;

int years(int a,int b){
    int count = 0;

    while(1){
        a *= 3;
        b *= 2;
        count++;
        if(a>b){
            break;
        }
    }
   return count;
}

int main(){
    int a,b;
    cin>>a>>b;
    int y = years(a,b);
    cout<<y<<endl;
}
