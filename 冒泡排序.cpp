#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[10];
	int N;
	int i = 0, j= 0;
	cin>>N;
	
	for(i = 0; i<N; i++)
	cin >> a[i];
	for(i = 0;i<N - 1;i++){
		for (j = 0; j<N; j++){
			if( a[j>a[j+1]]) {
				int tmp;
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp; 
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		cout<< a[i] << "";
		 
	}
	cout<<endl;
	return 0;
 } 
