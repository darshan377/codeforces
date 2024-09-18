/*
#include<bits/stdc++.h>
using namespace std;

int lucky(string s){
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '4' || s[i] == '7'){
            count++;
        }
    }
    return count;
}

int main(){
    long long n;
    cin>>n;

    string s = to_string(n);
    int l = lucky(s);

    if(l == 4 || l == 7){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int count = 0;

   while(n != 0){
    if(n%10 == 4 || n%10 == 7){
        count++;
    }
    n/=10;
   }
    if(count == 4 || count == 7){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}

