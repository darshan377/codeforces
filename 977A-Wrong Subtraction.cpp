
#include<bits/stdc++.h>
using namespace std;

int subtract(int n,int k){
    for(int i=1;i<=k;i++){
        if(n%10 == 0){
            n /= 10;
        }
        else{
            n--;
        }
    }
    return n;
}

int main(){
    int n,k;
    cin>>n>>k;
    int w = subtract(n,k);
    cout<<w<<endl;
}
