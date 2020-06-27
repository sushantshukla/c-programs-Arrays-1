#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int arr[] = {1, 10, 11, 9, 100};
    int n = sizeof(arr) / sizeof(int);
    //Search --> find

    int key ;
    cin >> key;
    auto it = find(arr, arr + n, key);
    int index = it - arr;
    if (index == n) {
        cout << key << " not present";
    }
    else {
        cout << "Present at index " << index;
    }


    return 0;
}
#include <algorithm>
using namespace std;


int main() {

    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(int);
    //Search in a sorted array
    int key ;
    cin >> key;

    bool present = binary_search(arr, arr + n, key);
    if (present) {
        cout << "Present";
    }
    else {
        cout << "Absent!";
    }

    //Two more things
    // Get the index of the element
    // lower_bound(s,e,key) and upper_bound(s,e,key)

    auto lb = lower_bound(arr, arr + n, 41);
    cout << endl << "Lower bound of 40 is" << (lb - arr) << endl;


    //uppper bound method
    auto ub = upper_bound(arr, arr + n, 40);
    cout << endl << "Upper bound of 40 is" << (ub - arr) << endl;

    cout << "Occ Freq of 40 is " << (ub - lb) << endl;

    return 0;
}
//money change problem online video 168 =100,50,10,5,2,1
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a , int b){
    return a<=b;
}

int main() {
    int coins[]= {1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(coins)/sizeof(int); //will give me the length
    int money=168;
    while(money>=0){
    int lb=lower_bound(coins,coins+n,money,compare)-coins -1;
    int m=coins[lb];
    cout<<m<<" ,";
    money=money-m;
    
    }
    
   return 0;
}


//Next permutation concept videos
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    rotate(arr, arr + 2, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //Apply the same on a vector
    vector<int> v{1, 2, 3};

    //rotate(v.begin(),v.begin()+3,v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    //Next_permuation
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    cout << endl;
    //for each loop
    for (int x : v) {
        cout << x << " ";
    }
return 0;
}

//Next Permutation Question
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	for (int i=0;i<t;i++){
		int n;
		cin>>n;
   		int  arr[n];
    	for(int i=0; i<n; i++){
        cin>>arr[i];
    	}
		next_permutation(arr,arr+n);
		for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    	}
		cout<<endl;
	}
	return 0;
}

