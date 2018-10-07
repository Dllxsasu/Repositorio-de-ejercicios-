	//https://www.hackerrank.com/challenges/staircase/problem
	#include <string>
	#include <iostream>
	using namespace std;
	int main(){
		int n;
		cin>>n;	
		for(int c=1;c<=n;c++){	
			cout<<string(n-c,' ');
			cout<<string(c,'#');
			cout<<"\n";
		}	
		return 0;
	}