#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string s;
	unsigned long long int cont;
	while(cin >> s && s!="0")
	{
		cont=0;
		unsigned int tam=s.size();
		for(unsigned int i=0;i<tam;++i)
		{
			if(s[i]=='0') continue;
			cont+=(s[i]-48)*(pow(2,tam-i)-1);
		}
		cout << cont << endl;	
	}
	
	return 0;
}