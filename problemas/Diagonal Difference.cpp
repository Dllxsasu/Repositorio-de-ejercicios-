//https://www.hackerrank.com/challenges/diagonal-difference/problem
#include <iostream>
using namespace std;
int main(){	
	int n,a,b=0,c=0;
	for(int c=0;c<n;c++){
		for(int j=0;j<n;j++){
			cin>>a;
			if(c==j) b+=a;
			if(c+j=n-1) c+=a;  
		}
	}
	cout<<((a>b)?a-b:b-a)<<"\n";
	return 0;
}