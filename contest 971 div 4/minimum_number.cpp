
#include<iostream>
using namespace std;

int main(){
    int t;
    cout<<"number of test cases: ";
    cin>>t;

    while(t--){
        int a,b;
        cout<<"a: ";
        cin>>a;
        cout<<"b: ";
        cin>>b;

        cout<<"output: "<<(b-a)<<endl;
    }
    return 0;
}
