
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    double sum = 0;
    for ( int i = 0; i < n; i++ ){
        double juice;
        cin>>juice;

        sum += juice;
    }
    double avg = sum / n;
    cout<<avg<<endl;

    return 0;
}
