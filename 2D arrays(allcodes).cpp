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

