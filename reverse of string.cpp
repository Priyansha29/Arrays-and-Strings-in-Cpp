//Priyansha Gour
//24070123079
//ENTC-A3


#include <iostream>
using namespace std;
int main() {
    string a;
    cout<<"Enter string a : ";
    cin>>a;
    int n=a.length();
    cout<<"REVERSE of given string is : ";
    for(int i=n; i>=0; i--){
        cout<<a[i];
    }
    return 0;
}
