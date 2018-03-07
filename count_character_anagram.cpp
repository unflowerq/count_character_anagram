#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string input_str1 = "aabbcc";
	string input_str2 = "xxyybb";

	vector<char> str1;
	vector<char> str2;
	vector<char> redun;

	for (int i = 0; i < input_str1.length(); i++)
	{
		str1.push_back(input_str1[i]);
	}

	for (int i = 0; i < input_str2.length(); i++)
	{
		str2.push_back(input_str2[i]);
	}

	for (int i = 0; i < str1.size(); i++)
	{
		for (int j = 0; j < str2.size(); j++)
		{
			if (str1[i] == str2[j])
			{
				redun.push_back(str1[i]);
				str1.erase(str1.begin() + i);
				str2.erase(str2.begin() + j);
				i--;
				break;
			}
		}
	}

	cout << input_str1.length() + input_str2.length() - (redun.size() * 2) << endl;

	return 0;
}