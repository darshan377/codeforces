
#include<iostream>
#include<string>
using namespace std;

int minimumSteps(int x){
    int minSteps = 0;

        if(x%5 == 0){
            minSteps = x/5;
        }
        else{
            minSteps = x/5+1;
        }

    return minSteps;
}

int main(){
      int x;
      cin>>x;
      int steps = minimumSteps(x);

      cout<<steps<<endl;

}
