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



