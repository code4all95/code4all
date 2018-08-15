#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	char c = 0;
	cin >> c;
	
	if(c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u')
		cout << "Vowel";
	else
		cout << "Consonant";
	
	return(0); 
}