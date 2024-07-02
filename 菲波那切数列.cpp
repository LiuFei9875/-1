#include <iostream>
using namespace std;
int main(){
	int n1=1,n2=1,sum;
	int k;
	cin>>k;
	if(k==1||k==2){
		cout<<1<<endl;
	}
	else{
		for(int i=0;i<k-2;++i){
			sum=n1+n2;
			n1=n2;
			n2=sum;
		}
		cout<<sum<<endl;
	}
	return 0;
} 
