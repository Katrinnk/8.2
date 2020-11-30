#include <iostream>
#include <string>
using namespace std;
int Search(const char* s, const char* cs)
{
	int k = 0;
	for (int i = 0; cs[i] != '\0'; i++)
	{


		for (int j = 0; s[j] != '\0'; j++)
			if (cs[i] == s[j])
			{
				k++;
			}
	}
	return k;
}
int main()
{
	char s[10] = "haaaard";
	char cs[] = "aa";
	if (Search(s, cs))
		cout << Search(s, cs) << endl;
	else
		cout << "no" << endl;
	return 0;
}