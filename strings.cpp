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

//lOWECASE UPPERCASE SPECIAL CHARACTER USING ASCII CODE QUESTION
#include<iostream>
using namespace std;

using namespace std;
int main() {
char ch1;
cin>>ch1;
int ch;
ch=int(ch1);
//ASCII value of uppercase is 65 to 90 A-Z
if(ch<=90&&ch>=65){
cout<<"UPPERCASE";
}
//ascii value of lowercase is 97 to 122 a-z
else if(ch<=122&&ch>=97){
cout<<"lowercase";
}
else {
cout<<"Invalid";
}
return 0;
}
//most frequent character
// count[str[i]]++
// means for character at str[i] its frequency is incremented by 1. The array will expect its index to be an integer but you may think that str[i] is a character. Yes str[i] is a character but in count[str[i]]++ compiler will treat str[i] with its ascii value which is an integer(which ranges from 0-255).
// So if str[i]==‘a’. Knowing that acii value of ‘a’ is 97.
// count[str[i]]++ will actually be count[97]++
#include<bits/stdc++.h>
using namespace std;
void count(string str)
{ int n=0;
  char max;
  int count[256]={0};
  for(int i=0;i<str.size();i++)
  {
     count[str[i]]++;
    if (count[str[i]]>n) { 
            n= count[str[i]]; 
            max = str[i]; 
        } 
  }
  cout<<max<<endl;
}
int main() {
  string str;
  cin>>str;
  count(str);
	return 0;
}
#include<iostream>
#include<string>
using namespace std;
int main() 
{
	string S;
	getline(cin,S);
	int len=S.length();
	int i=0;
	for(int i=0;i<len+1;i++)
	{
	    if(i==0 && S[i]>='A' && S[i]<='Z')
	    {
	        cout<<S[i];
	    }//if the letter tis in small directly print the output
	    else if(S[i]>='a'&& S[i]<='z')
	    {
	        cout<<S[i];
	    }//if the letter is in cap than print a line than print the output .
	    else if(S[i]>='A' && S[i]<='Z')
	    {
	        cout<<endl;
	        cout<<S[i];
	    }
	}
	return 0;
}
//is pallindrome
#include<cstring>
using namespace std;
bool ispallidrome(int a[1000],int i,int j){
	if(i>=j){
		return true;
	}
	
    if(a[i]!=a[j]){
		return false;
		
	}
	return ispallidrome(a,i+1,j-1);
	
	
//loop terminate
}
int main() {
    //palindrome check
    int n;
	cin>>n;
	int a[1000];
   // readline(a,1000);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int i=0;
	int j=n-1;
    if(ispallidrome(a,i,j)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
   
    return 0;
}
//shorten the string by counting the individual character
//aaabbccc----------a2b2c3
#include<iostream>
int main() { using namespace std;
char arr[101];
cin>>arr;   ///CHANGE. Input of strings is taken in this way.
char ch;
int count=0;
ch=arr[0];
int i=0;
while(arr[i]!='\0')
{
  if(ch==arr[i])
  {
    count++;
  }
  else{
    cout<<ch<<count;
    ch=arr[i];
    count=1;
  }
  i++;
}
cout<<ch<<count;
	return 0;
}



