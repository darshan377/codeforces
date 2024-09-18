
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2,letter1,letter2;
    cin>>str1>>str2;

    for(int i=0;i<str1.size();i++){
        letter1 = toupper(str1[i]);
        letter2 = toupper(str2[i]);
    }

    if(letter1 == letter2){
        continue;
    }

    if(letter1 < letter2){
        cout<<-1<<endl;
        break;
    }
    else {
        cout<<1<<endl;
        break
    }
    if(letter1 == letter2){
        cout<<0<<endl;
    }

        return 0;
}
