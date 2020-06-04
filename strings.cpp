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

// find largest string of all
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    int n;
    cin>> n;
    char a[1000];
    char largest[1000]; 

    int len=0;
    int largest_len=0;
    cin.get(); // null character consume
    for (int i=0;i<n;i++){
        cin.getline(a,1000);
        len=strlen(a);
        if(len > largest_len){
            largest_len=len;
            //copy all the characters from array to array largest
            strcpy(largest ,a);
        }
    }
     cout<< largest<<" and "<< largest_len<<endl;
    return 0;


    
}


