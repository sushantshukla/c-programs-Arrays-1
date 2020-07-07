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

//Aggresive cows
#include<bits/stdc++.h>
using namespace std;
long long int c;
bool is_Answer(long long int *arr,long long int n,long long int ans){
    int ca=1;
    long long int prev=arr[0];
    for(long long int i=1;i<n;i++){
        if(arr[i]-prev>=ans){
            prev=arr[i];
            ca++;
            if(ca==c)
            return true;
        }
    }
    if(ca<c)
    return false;
    return true;
}

int main() {
    long long int n;
    cin>>n>>c;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int max=a[n-1],ans=0;
    long long int si=0,ei=a[n-1];
    while(si<=ei){
        long long int mid=(si+ei)/2;
        if(is_Answer(a,n,mid)){
            ans=mid;
            si=mid+1;
        }
        else
        ei=mid-1;
    }
    cout<<ans<<endl;
	return 0;
}

//book allocation problem
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
bool ispossible(int arr[], int n, int m, int curr_min){
    int studentused=1;
    int pages_reading= 0;
    for(int i=0;i<n;i++){
        if(pages_reading+arr[i]> curr_min){
            studentused++;
            pages_reading=arr[i];
            if(studentused>m){
                return false;
            }
        }
        else {
            pages_reading +=arr[i];
        }

    }
    return true;
}

int bookallocation(int n , int m, int arr[]){
    long long sum=0;
	
    if (n<m){
        return -1;
    }
    //count the no of pages
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=arr[n-1];
	int e=sum;
    int ans=INT_MAX;
    while(s<=e){
        int mid=(s+e)/2 ;
        if (ispossible(arr,n,m,mid)){
            ans= min(ans,mid);
            e=mid-1;
        }
        else{
            //when not possin=ble to divide in x pages
            s=mid+1;
        }
    }
    return ans;
	


}
int main() {
	int t,m,n;
	int arr[1000];
	cin>>t;
	for (int i=0;i<t;i++){
		cin>> n >> m;
		for(int j=0;j<n;j++){
			cin>>arr[j];

		}

        cout<<bookallocation(n,m,arr)<<endl;
	}
	
	return 0;
}

//winnnig coding Blocks scholarship
#include<iostream>
using namespace std;

int main() {
  long long int n,m,x,y;
  cin>>n>>m>>x>>y;
  int s=0;
  int e=n;
  int mid;
  long long int finalans=0;
  while (s<=e){
    mid =(s+e)/2;
    if ((mid*x)<=m+((n-mid)*y)){
      s=mid+1;
      finalans=mid;
    }else{
      e=mid-1;
    }
  }cout<<finalans<<endl;
  
	return 0;
}
//sorting in linear time 0,1,2
#include<iostream>
using namespace std ;
void counting_sort(int a[] , int n)
{
    int freq[1000]={0} , i  ;
    for(i=0 ; i<n ;i++)
    {
        freq[a[i]]++ ;
    }
     i=0 ;
   while(i<3) // use 3 instead of n 
    {
        if(freq[i]==0)
        {
            i++ ;
        }
        else
        {   while(freq[i]){ // loop over the freq of elements
            cout<< i << endl;
            freq[i]-- ;
        }
        }
    }
}

int main()
{
    int a[100000] = {0}, n , i ;
    cin >> n ;
    for(i=0 ; i< n ; i++ )
    {
        cin >> a[i] ;
    }
    counting_sort(a,n) ;
    return 0 ;
}




