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
    //kadane algo  sumgen all subarrays
    for(int i=0;i<n;i++){
        currsum=currsum+a[i]
        if(currsum<0){
            currsum=0;
        }
        //new maxsum will get updated
        maxsum=max(currsum,maxsum);
    }
    cout<<maxsum<<endl;
    }
	return 0;
}