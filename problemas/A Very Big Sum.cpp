#include <iostream>
#include <vector>
using namespace std;
long big_sum(vector<long> arr){
	long sum=0;
	int n=arr.size();
	for(int c=0;c<n;c++){
		sum+=arr[c];
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	vector<long> arr(n);
	for(int c=0;c<n;c++){
		cin>>arr[c];
	} 
	cout<<big_sum(arr)<<"\n";
	return 0;
}