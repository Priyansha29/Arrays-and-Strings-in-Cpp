//PRIYANSHA GOUR
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;
int main() {
    int n;
    
    cout<<"enter size: ";
    cin>>n;
    int ar1[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    cout<<"Elements are:\n";
    for(int i=0;i<n;i++){
        cout<<ar1[i]<<" ";
    }
    return 0;
}
