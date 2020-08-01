//replace pi with 3.14
#include<iostream>
#include<cstring>
using namespace std;
string replacePi(string str) {
	if (str.length() == 0) return str;

	char ch = str[0];
	string ros = str.substr(1);

	string recursionResult = replacePi(ros);

	if (ch == 'p' and recursionResult[0] == 'i') {
		return "3.14" + recursionResult.substr(1);

	} else {
		return ch + recursionResult;
	}
}

int main() {
	int n;
	string str;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>str;
		cout<<replacePi(str)<<endl;
	}
	
	return 0;
}
