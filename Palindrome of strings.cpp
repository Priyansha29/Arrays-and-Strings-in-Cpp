// PRIYANSHA GOUR
//24070123079
//ENTC-A3
#include<iostream>
using namespace std;
int main(){
    
    string str1;
    cout<<"enter the string 1 = ";
    cin>>str1;
    int n=str1.length();
    for(int i=0;i<n/2;i++){
        if(str1[i] != str1[n-1-i]){
            bool isPalindrome=false;
            
            cout<<"the string is not palindrome";
            break;
        }
        else{
            cout<<"the string is palindrome";
            break;
        }
        
       
    }
    
    return 0;
}
