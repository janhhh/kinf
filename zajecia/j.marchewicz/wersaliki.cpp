#include<iostream>
using namespace std;
int main()
{
	string s;
	getline (cin,s);
	string male="aąbcćdeęfghijklłmnńoóprsśtuwyzźż";
	string duze="AĄBCĆDEĘFGHIJKLŁMNŃOÓPRSŚTUWYZŹŻ";
	for (int i=0; i< s.length(); i++) 
	{
		int j=0;
		while (j< male.length() && s[i]!= male[j]) 
		{
			j++;
		}
		if (s[i]==male[j]) 
		{
			cout << duze[j];
		} 
		else 
		{
			cout << s[i];
		}
	}	
	cout << endl;
	return 0;
}
