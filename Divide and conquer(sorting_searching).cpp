//Bubble sort
#include<iostream>
using namespace std;

void bubblesort(int a[],int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}					
		}
	}
	
	
}

int main(){
		
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
			cin>>a[i];
	}
	bubblesort(a,n);
	for(int i=0;i<n;i++)
			cout<<a[i]<<endl;
	
	return 0;	
	}
//Selection sort
#include <iostream>
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)  //CHANGE
        {  
            if(arr[j]<arr[min])
            {
                min=j;
                swap(arr[min],arr[i]);  //CHANGE
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
	return 0;
}
//Insertion sort
#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int i,j,key;
    for(i=1; i<n; ++i)
    {
        key = arr[i];
       
        j = i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }

}

void print(int *arr, int n)
{ 
    int i;
    for(i=0; i<n; ++i)
    {
        cout<<arr[i]<<" ";
    }
}

int main() 
{
   int arr[100000],n;
   cin>>n;
   for(int i=0; i<n; ++i)
   {
       cin>>arr[i];
   }
   sort(arr,n);
   print(arr,n);
}

//Help rahul to find element
#include <iostream>
using namespace std;

int find_key(int a[],int n, int key){
    int s=0;
    int e=n-1;
    while (s<=e){
        int mid=(s+e)/2;
        if (a[mid]==key){
            return mid;
        }
        else if(a[s]<=a[mid]){
            if (key>=a[s] and key<=a[mid]){
                e=mid-1;

            }
            else {
                s=mid+1;
            }
        }
        else {
            if (key>=a[mid] and key <=a[e]){
                s=mid+1;

            }
            else {
                e=mid-1;
            }

        }
    }
    return -1;
}
int main() 
{
    int n;
   int a[100000];
   cin>>n;
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }
   int key;
   cin>>key;
   cout<<find_key(a, n, key)<<endl;
   return 0;
}
//square root using Binary Search
#include <iostream>
using namespace std;
float square_root(int n,int p){
    int s=0;
    int e=n;
    float ans=-1;
    while(s<=e){
        int mid=(s+e) ;
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    //foating part
    //brute force 
    float inc=0.1;
    for (int times=1; times<=p;times++){
        while(ans*ans<=n){
            ans=ans +inc;
        }
        //overshoot or one step backward
        ans=ans-inc;
        inc=inc/10;
    }
    return ans;

}



int main() {
    int n;
    cin>>n;
    int p=5;
    cout<<square_root(n,p)<<endl;

    
    return 0;
}

//find upper and lower bound
#include<iostream>
using namespace std;

void upperbound(int s,int e,int ans,int n,int a[]){
 
 if(s>e){  // base case should be s>e
     cout<<ans<<" "<<endl;
     return;
 }
 
 int mid=(s+e)/2;
 if(a[mid]>n){
     upperbound(s,mid-1,ans,n,a); // end should be equal to mid-1
 }
 else if(a[mid]<n){
     upperbound(mid+1,e,ans,n,a);// start should be equal to mid+1
 }
 else { 
     ans=mid;
     upperbound(mid+1,e,ans,n,a);          
 }
}

void lowerbound(int s,int e,int ans,int n,int a[]){
 
 if(s>e){  // base case should be s>e
     cout<<ans<<" ";
     return;
 }

 int mid=(s+e)/2;
 if(a[mid]>n){
     lowerbound(s,mid-1,ans,n,a); // end should be equal to mid-1
 }
 else if(a[mid]<n){
     lowerbound(mid+1,e,ans,n,a); // start should be equal to mid+1
 }
 else { 
     ans=mid;
     lowerbound(s,mid-1,ans,n,a);           //lower bound     
 }
}

int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}    
    int t;
    cin>>t;
    int b;
    for(int i=0;i<t;i++){
         cin>>b;
         lowerbound(0,n,-1,b,a);
         upperbound(0,n,-1,b,a);
    }
}



