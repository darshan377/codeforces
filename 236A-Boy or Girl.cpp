
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l = s.size();
    if(l%2 == 0){
        cout<<"ignore him"<<endl;
    }
    else{
        cout<<"chat with her"<<endl;
    }

    return 0;

}
