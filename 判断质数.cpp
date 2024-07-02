#include<iostream>
using namespace std;

int main()
{
	int x;//定义一个int型变量x
	cin>>x;

	bool yes_no=true;//定义布尔型变量yes_no,用来表示x是否为素数
					//先假定x是素数，因此将yes_no的初始值设为true
	for(int n=2;n<x;n++)
	{	
		if(x%n==0)	//如果x能被某个n整除，则x就不是素数
		{
			yes_no=false;
			break;
		}
		//如果x不能被x整除，则yes_no保持true不变，继续检查下一个数
	}
	if(yes_no==true)
	{
	cout<<"是素数"<<endl;
	}
	else cout<<"不是素数"<<endl;
	return 0;
}



