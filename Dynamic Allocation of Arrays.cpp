#include <iostream>
using namespace std;

int main() {
    //multiple 1D array and will combine them to form 2D array
    int **arr;
    int r,c;
    cin>>r>>c;
    //create array of row heads
    arr= new int*[r];
    //create 2D array
    for (int i=0;i<r;i++){
        arr[i]= new int[c];
    }
    //take inputn an print the element
    int val=1;
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=val;
            val++;
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
