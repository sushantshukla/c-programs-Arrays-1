using namespace std;
bool ispallidrome(char a[1000]){
    int i=0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    //loop terminates
    return true;
}
int main() {
    //palindrome check
    char a[1000];
   // readline(a,1000);
    cin.getline(a,1000);
    if(ispallidrome(a)){
        cout<<"palindromic string";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}
//remove duplicates
#include <iostream>
#include<cstring>
using namespace std;
// remove dulpicates character from the string which are consecutive
//ccoooding---->coding
void removeDeplicates(char a[]) {
    int l=strlen(a);
    if(l==1 or l==0){
        return ;
    }
    //current=i
    //prev=j// if condition is not 
    //true still current is getting increased
    int prev=0;
    for(int current=1; current<l;current++){
        if(a[current]!=a[prev]){
            prev++;
            a[prev]=a[current];
        }
    }
    a[prev+1]= '\0';
    return;



}
int main() {
   char a[1000];
   // readline(a,1000);
    cin.getline(a,1000);
    removeDeplicates(a);
    cout<<a<<endl;
    
    return 0;
}

