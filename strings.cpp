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
