#include <iostream>
using namespace std;
int main ()
{
	int k;
	cin>>k;
	double s=0;
	int n=1;
	while(s<=k){
		s+=1.0/n;
		n++;
	}
	cout<<n-1;
	return 0;
}
