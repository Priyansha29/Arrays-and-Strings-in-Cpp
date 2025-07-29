//PRIYANSHA GOUR
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;
int main() {
    int s,avg=0,i,sum=0;
    cout<<"Enter no of elemets: ";
    cin>>s;
    int a[s];
    for(i=0;i<s;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>a[i];
    }
    for(i=0;i<s;i++){
        sum=sum+a[i];
    }
    cout<<"Sum is: "<<sum<<endl;
    avg=sum/s;
    cout<<"Avg is: "<<avg;
    return 0;
}

/*OUTPUT:
Enter no of elemets: 3
Enter element 1: 23
Enter element 2: 45
Enter element 3: 67
Sum is: 135
Avg is: 45
*/
