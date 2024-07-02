#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <conio.h>
#include <fstream>
#include <algorithm>
#include <cstring>

using namespace std;

bool matchArr[26] = { false };

/*
��ȡ�ļ����ļ���ÿ��Ϊһ���ַ���Ԫ�أ�����һ�ַ�������
���룺�ļ���ַ
������ַ�������
*/
vector<string> readFile(string path) {
	vector<string> strList;
	ifstream ifs;
	ifs.open(path, ios::in);

	if (!ifs.is_open())
	{
		cout << "read fail." << endl;
		_getch();
		return {};
	}

	char buf[1000] = { 0 };
	while (ifs >> buf) {
		strList.push_back(buf);
	}
	
	return strList;
}


/*
����ƥ�����飬���������б�������ַ��������е��ַ�
���룺�ַ����ͣ�����ǵ�������ַ���
�������
*/
void setMatch(string s) {
	int asc;
	memset(matchArr, false, sizeof(matchArr));//��ձ������
	for (int i = 0; i < s.length(); i++)
	{
		asc = s[i] - 'A';
		if (asc > 26) asc = s[i] - 'a';

		matchArr[asc] = true;	//���
	}
}

/*
�ж��ַ����Ƿ�ƥ��
���룺�ַ����ͣ����жϵ��ַ���
����������ͣ��Ƿ�ƥ��
*/
bool isMatch(string s) {
	int asc;
	for (int i = 0; i < s.length(); i++)
	{
		asc = s[i] - 'A';
		if(asc>26) asc = s[i] - 'a';
		if (!matchArr[asc]) return false;	//��һ��û��ƥ�䣬���ز�ƥ��
		
	}
	return true;			//��ƥ�䣬����ƥ��
}


int main(int argc, char const* argv[]) {
	string s;
	vector<string> strList;
	vector<string> matchableStr;
	string path;
	unordered_map<string, bool> map;
	int asc;
	if (argc <= 1) {
		cout << "�������ļ�·����";
		getline(cin,path);
	}
	else {
		path = argv[1];
	}

	strList = readFile(path);
	if (strList.empty()) return 0;

	system("cls");
	cin >> s;

	for (int i = 0; i < strList.size(); i++)
	{
		setMatch(strList[i]);
		if (isMatch(s)) {						
			if (map[strList[i]]) continue;			//ȥ��
			matchableStr.push_back(strList[i]);		
			map[strList[i]] = true;					//����ѳ��֣������´�ȥ��
			cout << strList[i] << endl;
		}
	}

	cout <<endl<< "with a rate of " << matchableStr.size() << "/" << strList.size() << "(" <<  100.00 * matchableStr.size() / strList.size() << "%)" << endl;//�������
	sort(matchableStr.begin(), matchableStr.end(), [](string a, string b) {
			return a.length() > b.length();			//���ճ�������
		});
	for (int i = 0; i < matchableStr.size() && i<5; i++) {
		cout << matchableStr[i] << endl;
	}
	cout << endl << "��������˳�..." << endl;

	_getch();


	return 0;
}

