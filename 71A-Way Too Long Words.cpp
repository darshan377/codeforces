#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;

    for(int i=0;i<n;i++){
        cin>>s;
    }
    for(int i=0;i<n;i++){
        if(s.length()>10){
            cout<<s[0]<<s.length()-2<<s[s.length()-1];
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}
