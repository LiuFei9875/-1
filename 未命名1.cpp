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
读取文件，文件内每行为一个字符串元素，返回一字符串数组
输入：文件地址
输出：字符串数组
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
设置匹配数组，即在数组中标记输入字符串中所有的字符
输入：字符串型，待标记的输入的字符串
输出：无
*/
void setMatch(string s) {
	int asc;
	memset(matchArr, false, sizeof(matchArr));//清空标记数组
	for (int i = 0; i < s.length(); i++)
	{
		asc = s[i] - 'A';
		if (asc > 26) asc = s[i] - 'a';

		matchArr[asc] = true;	//标记
	}
}

/*
判断字符串是否匹配
输入：字符串型，待判断的字符串
输出：布尔型，是否匹配
*/
bool isMatch(string s) {
	int asc;
	for (int i = 0; i < s.length(); i++)
	{
		asc = s[i] - 'A';
		if(asc>26) asc = s[i] - 'a';
		if (!matchArr[asc]) return false;	//有一个没有匹配，返回不匹配
		
	}
	return true;			//都匹配，返回匹配
}


int main(int argc, char const* argv[]) {
	string s;
	vector<string> strList;
	vector<string> matchableStr;
	string path;
	unordered_map<string, bool> map;
	int asc;
	if (argc <= 1) {
		cout << "请输入文件路径：";
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
			if (map[strList[i]]) continue;			//去重
			matchableStr.push_back(strList[i]);		
			map[strList[i]] = true;					//标记已出现，用于下次去重
			cout << strList[i] << endl;
		}
	}

	cout <<endl<< "with a rate of " << matchableStr.size() << "/" << strList.size() << "(" <<  100.00 * matchableStr.size() / strList.size() << "%)" << endl;//计算比例
	sort(matchableStr.begin(), matchableStr.end(), [](string a, string b) {
			return a.length() > b.length();			//按照长度排序
		});
	for (int i = 0; i < matchableStr.size() && i<5; i++) {
		cout << matchableStr[i] << endl;
	}
	cout << endl << "按任意键退出..." << endl;

	_getch();


	return 0;
}

