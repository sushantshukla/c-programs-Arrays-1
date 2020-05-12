#include <iostream>
using namespace std;
int main() {
	int k;
	cin>>k;
	for (int i=0;i<k;i++){
    int n;
    cin>>n;
    int a[1000];
    int maxsum=0;
    int currsum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //gen all subarrays
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //elements of subarray i to j
            currsum=0;
            for(int k=i;k<=j;k++){
                currsum+=a[k];
            }
            //update max sumif cs>maxsum
            if(currsum>maxsum){
                maxsum=currsum;
            }
            
        }
    }
    cout<<maxsum<<endl;
    }
	return 0;
}