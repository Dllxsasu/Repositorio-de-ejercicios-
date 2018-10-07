//https://www.hackerrank.com/challenges/diagonal-difference/problem
#include <iostream>
using namespace std;
int main(){	
	int n,a,b=0,c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a;
			if(i==j) b+=a;
			if(i+j==n-1) c+=a;  
		}
	}
	cout<<((b>c)?b-c:c-b)<<"\n";
	return 0;
}