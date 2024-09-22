
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;
    string s, tim = "Timur";
    sort(s.begin(),s.end());
    sort(tim.begin(),tim.end());

    if(s == tim){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    return 0;
}
