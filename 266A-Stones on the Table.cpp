
#include<bits/stdc++.h>
using namespace std;

int neighbour_stones(int n,string s){
    int count = 0;

    for(int i=0;i<n;i++){
        if(s[i] == s[i+1]){
            count++;
        }
    }
   return count;
}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c = neighbour_stones(n,s);

    cout<<c<<endl;
}
