#include <iostream>
using namespace std; 
  
int findWater(int arr[], int n) 
{ 
    // left[i] contains height of tallest bar to the 
    // left of i'th bar including itself 
    int left[n]; 
  
    // Right [i] contains height of tallest bar to 
    // the right of ith bar including itself 
    int right[n]; 
  
    // Initialize result 
    int water = 0; 
  
    // Fill left array 
    left[0] = arr[0]; 
    for (int i = 1; i < n; i++) 
       left[i] = max(left[i-1], arr[i]); 
  
    // Fill right array 
    right[n-1] = arr[n-1]; 
    for (int i = n-2; i >= 0; i--) 
       right[i] = max(right[i+1], arr[i]); 
  
    // Calculate the accumulated water element by element 
    // consider the amount of water on i'th bar, the 
    // amount of water accumulated on this particular 
    // bar will be equal to min(left[i], right[i]) - arr[i] . 
    for (int i = 0; i < n; i++) 
       water += min(left[i],right[i]) - arr[i]; 
  
    return water; 
} 
int main() {
    
    int n, ans=0,left=0,right=0,j;

    cin>>n;
    int  arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findWater(arr,n);
    
    return 0;

}
// sum equal to triplets in array
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
  sort(arr, arr+n);
  for(int i=0; i<n-2; i++){
    for(int j=i+1; j<n-1; j++){
      for(int k=j+1; k<n; k++){
        int a = arr[i];
        int b= arr[j];
        int c = arr[k];
        if(a+b+c==target){
          cout<<a << ", " << b << " and " << c <<endl;
        }
      }
    }
  }
	return 0;
}

//max. circular sum
#include<iostream>
using namespace std;
int kadane_algo(int arr[],int test)
{
int ms=0,cs=0;

for(int j=0;j<test;j++)
{
cs=cs+arr[j];
if(cs<0){
cs=0;
}
ms=max(cs,ms);

}
return ms;
}

void maxCircularSum(int a[], int n)
{
for(int j=0;j<n;j++) // input array elements shifted from kadane function to here because every time you enter kadane function
// , you were inputing elements in array which is wrong .
{
cin>>a[j];
}
int max_kadane = kadane_algo(a, n);
int max_wrap = 0, i;
for (i=0; i<n; i++)
{
max_wrap += a[i];
a[i] = -a[i];
}
max_wrap = max_wrap + kadane_algo(a, n);
int y = (max_wrap > max_kadane)? max_wrap: max_kadane;
cout<<y<<endl; // changes made
}

int main()
{
int n;
cin>>n;
int test[n];
for(int i=0;i<n;i++)
{
cin>>test[i];
int arr[test[i]];
 maxCircularSum(arr,test[i]);
//cout<<x;
}
return 0;
}
//form biggest no
#include<bits/stdc++.h>
using namespace std;
bool mycmp(string a,string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n,mycmp);
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    }
	return 0;
}
// 2 arrays sum .
#include<iostream>
using namespace std;
int main()
{
	int M[1000],N[1000],A[1000];
	int sum[1000],carry=0;
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>M[i];
	}
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>N[j];
	}
    int c[10001],ind=0;
    int i=n-1,j=m-1;
    while(i>=0 && j>=0){
        c[ind]=(N[i]+M[j])%10;ind++;
        if(N[i]+M[j]>=10){
            if(i-1>=0){
                N[i-1]+=1;
            }
            else if(j-1>=0){
                M[j-1]+=1;
            }
            else{
                c[ind]=1;ind++;
            }
        }
        i--;j--;
    }
		
	if(i>=0){
        while(i>=0){
            c[ind]=N[i]%10;ind++;
            if(N[i]>=10){
                if(i-1>=0){
                    N[i-1]+=1;
                }
                else{
                    c[ind]=1;ind++;
                }
            }
            i--;
        }
    }
	if(j>=0){
        while(j>=0){
            c[ind]=M[j]%10;ind++;
            if(M[j]>=10){
                if(j-1>=0){
                    M[j-1]+=1;
                }
                else{
                    c[ind]=1;ind++;
                }
            }
            j--;
        }
    }
    for(int i=ind-1;i>=0;i--){
        cout<<c[i]<<", ";
    }
    cout<<"END";

	
return 0;
	
	
}
