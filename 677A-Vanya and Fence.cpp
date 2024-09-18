
#include<bits/stdc++.h>
using namespace std;

int width(int arr[],int n,int h){

    int wid = 0;

    for(int i=0;i<n;i++){
        if(arr[i]<=h){
            wid += 1;
        }
        else{
            wid += 2;
        }
    }
    return wid;
}

int main(){
    int n,h;
    cin>>n>>h;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int w = width(arr,n,h);

    cout<<w<<endl;
}
