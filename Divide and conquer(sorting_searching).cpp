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


