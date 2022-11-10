#include <iostream>
#include <string>
using namespace std;
int Count2(const string str, int max, int k, int i)
{
	if (i < str.size())
	{
		if ((str[i]) == ' ')
			k++;
		else
			k = 0;
		if (k > max)
		{
			max = k;
		}
		Count2(str, max, k, i+1);
	}
	return max;

}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << Count2(str, 0, 0, 0) << endl;
	return 0;
}