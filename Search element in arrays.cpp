//PRIYANSHA GOUR
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;
int main() {
    int key, i;
    cout<<"enter element: ";
    cin>>key;
    int ar1[]={3,4,5,6,7,8};
    for(i=0; i<5; i++){
    if(key==ar1[i]){
        cout<<"key found at :"<<i<<endl;
        return 0;
        
    }
    }
    cout<<"key not found"<<endl;
    return 0;
}

/* output:
enter element: 
6
key found at :3*/
