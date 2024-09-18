
#include<iostream>
using namespace std;

long long ceil_spots(long long p,long long q){
    return (p+q)/q;
}

int main(){
    int t;
    cout<<"number of testcases: ";
    cin>>t;

    while(t--){
        int x,y,k;
        cin>>x>>y>>k;

        long long moveOfX = ceil_spots(x,k);
        long long moveOfY = ceil_spots(y,k);

        int ultimate = (moveOfX + moveOfY);

        cout<<"output: "<<ultimate<<endl;
    }
   return 0;
}
