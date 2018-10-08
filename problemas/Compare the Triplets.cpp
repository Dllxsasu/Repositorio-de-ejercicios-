//https://www.hackerrank.com/challenges/compare-the-triplets/problem
#include <iostream>
#include <vector>
using namespace std;
vector<int> score(vector<int> v,vector<int> x){
	vector<int> vx(2);
	for(int c=0;c<3;c++){
		if(v[c]>x[c]) vx[0]++;
		if(v[c]<x[c]) vx[1]++;
	}
	return vx;
}
void llenar(vector<int>& v){
	for(int c=0;c<v.size();c++){
		cin>>v[c];
	}
}
int main(){
	int n=3;
	vector<int> v(n),x(n);
	llenar(v);
	llenar(x);
	vector<int> point=score(v,x);
	cout<<point[0]<<" "<<point[1]<<"\n";
	return 0;
}