#include <iostream>
using namespace std;
int main() {
    //row wise traversal of array
    int a[1000][1000]={0};// initializing it with all zeros
    int m,n;
    cin>>m>>n;
    int val=1;
    for (int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//print wave in matrix
int main() {
    //row wise traversal of array
    int a[1000][1000]={0};// initializing it with all zeros
    int m,n;
    cin>>m>>n;
    for (int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            cin>>a[row][col];
        }
        cout<<endl;
    }
    for (int col=0;col<=n-1;col++){
        //in case of even col we print top down colm
        if(col%2==0){
            for(int row=0;row<=m-1;row++){
            cout<<a[row][col]<<" ";
            }
        }
        //bottom up
        else if(col%2!=0){
            for(int row=m-1;row>=0;row--){
            cout<<a[row][col]<<" ";
            }
        }
        
    }
return 0;
}
//print spiral in 2D matrix
void spiralprint(int a[1000][1000],int m, int n){
    int startrow=0;
    int startcol=0;
    int endrow=m-1;
    int endcol=n-1;
    //print the spiral till (while condition)
    while (startrow<=endrow and startcol<=endcol){
        //first row
        for (int i=startcol;i<=endcol;i++){
            cout<<a[startrow][i]<<" ";
        }
        startrow++;
        //print last colm
        for (int i=startrow;i<=endrow;i++){
            cout<<a[i][endcol]<<" ";
        }
        endcol--;

    // print the bottomrow
        if(endrow>startrow){
            for (int i=endcol;i>=startcol;i--){
                cout<<a[endrow][i]<<" ";
            }
            endrow--;
        }
     //print start colm
     if(endcol>startcol){
            for(int i=endrow;i>=startrow;i--){
                cout<<a[i][startcol]<<" ";
            }
            startcol++;
     }

    }
}

/*int main() {
    //row wise traversal of array
    int a[1000][1000]={0};// initializing it with all zeros
    int m,n;
    cin>>m>>n;
    int val=1;
    for (int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val++;
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    spiralprint(a,m,n);
}
*/
// rotate image interview question(normal iteration , USING STL function)
#include <iostream>
#include<algorithm>
using namespace std;
void rotate(int a[1000][1000],int n){
    //reerse each row
    for(int row=0;row<n;row++){
        int start_col=0;
        int end_col=n-1;
        while(start_col<end_col){
            swap(a[row][start_col],a[row][end_col]);
            start_col++;
            end_col--;
        }
    }
    // take the transpose of matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }


}
/*void rotate_stl(int a[1000][1000], int n){
    //same thing using stl reverse(start_cont,end_cont) methods
    for (int i=0;i<n;i++){
        //a[i]is the row pointer
        reverse(a[i],a[i]+n);
    }
    // take the transpose of matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }


}
*/
int main() {
    //row wise traversal of array
    int a[1000][1000]={0};// initializing it with all zeros
    int n;
    cin>>n;
    for (int row=0;row<=n-1;row++){
        for(int col=0;col<=n-1;col++){
            cin>>a[row][col];
            
        }
        
    }
    rotate(a,n);
    for (int row=0;row<=n-1;row++){
        for(int col=0;col<=n-1;col++){
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
}

// arrays spiral print anticlockwise-hackerblocks question
#include<iostream>
using namespace std;
void spiralprint(int a[1000][1000],int m, int n){
    int startrow=0;
    int startcol=0;
    int endrow=m-1;
    int endcol=n-1;
    //print the spiral till (while condition)
    while (startrow<=endrow and startcol<=endcol){
        //first row
        for (int i=startrow;i<=endrow;i++){
            cout<<a[i][startcol]<<", ";
        }
        startcol++;
        //print last colm
        for (int i=startcol;i<=endcol;i++){
            cout<<a[endrow][i]<<", ";
        }
        endrow--;

    // print the bottomrow
        if(endrow>startrow){
            for (int i=endrow;i>=startrow;i--){
                cout<<a[i][endcol]<<", ";
            }
            endcol--;
        }
     //print start colm
     if(endcol>startcol){
            for(int i=endcol;i>=startcol;i--){
                cout<<a[startrow][i]<<", ";
            }
            startrow++;
     }

    }
}

int main() {
    //row wise traversal of array
    int a[1000][1000]={0};// initializing it with all zeros
    int m,n;
    cin>>m>>n;
    for (int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            cin>>a[row][col];
        }
        
    }
    spiralprint(a,m,n);
	cout<<"END";
}
// piyush and magical park
#include <iostream>
using namespace std;
void magical_park(char a[][100], int m, int n, int k, int s){
    bool success=true;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            char ch=a[i][j];
            //check if strenth is less than threshold strength
            if(s< k){
                success=false;
                break;
            }
            if(ch=='*'){
                s+=5;
            }
            else if(ch=='.'){
                s-=2;
            }
            else{
                break;
            }//we lose 1 when moving right except for last colm
            if(j!=n-1){
                s--;
            }
        }
    }
    //means the condition inside if is true
    if(success){
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
int main() {
    //row wise traversal of array
    char park[100][100];// initializing it with all zeros
    int m,n,k,s;
    // m is row and n is colm
    cin>> m >> n >> k >> s;
    for (int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            cin>> park[row][col];
            
        }
    }
    magical_park(park,m,n,k,s);
    return 0;
  }
#include <iostream>
using namespace std;
int main() {
    //this will have 4 rows and 10 no of col
    //updating a bucket in char
    char[10][10];
    c[0][0]='A';
    char b[][100]={{'a','b','c','\0'},{'d','e','f','\0'}};
    char a[50][100]={"abc","def","ghi","hello"};
    cout<<b[0][2]<<endl;
    cout<<b[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    //read list of strings and store them in 2D array
    char  a[100][1000];
    int n;
    cin >>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a[i],1000);

    }
    //print out all the strings
    for (int j=0;j<n;j++){
        cout<<a[j]<<endl;
    }
    return 0;
}





