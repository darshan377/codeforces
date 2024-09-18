
#include<bits/stdc++.h>
using namespace std;

string charConversion(string s){
      int count_up = 0,count_low = 0;

      for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            count_up++;
        }
        else{
            count_low++;
        }
      }
      string ch;
      if(count_up>count_low){

        for(int i=0;i<s.size();i++){
            ch += toupper(s[i]);

        }
      }
       else{

        for(int i=0;i<s.size();i++){
            ch += tolower(s[i]);

        }
      }
      return ch;
}

int main(){
   string s;
   cin>>s;

   string c = charConversion(s);
   cout<<c;
}
