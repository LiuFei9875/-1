#include<iostream>
using namespace std;

int main()
{
	int x;//����һ��int�ͱ���x
	cin>>x;

	bool yes_no=true;//���岼���ͱ���yes_no,������ʾx�Ƿ�Ϊ����
					//�ȼٶ�x����������˽�yes_no�ĳ�ʼֵ��Ϊtrue
	for(int n=2;n<x;n++)
	{	
		if(x%n==0)	//���x�ܱ�ĳ��n��������x�Ͳ�������
		{
			yes_no=false;
			break;
		}
		//���x���ܱ�x��������yes_no����true���䣬���������һ����
	}
	if(yes_no==true)
	{
	cout<<"������"<<endl;
	}
	else cout<<"��������"<<endl;
	return 0;
}



