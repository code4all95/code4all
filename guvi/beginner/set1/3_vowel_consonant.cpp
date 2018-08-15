#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	char c = 0;
	cin >> c;
	
	if(c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u' | c == 'A' | c == 'E' | c == 'I' | c == 'O' | c == 'U')
		cout << "Vowel";
	else if(int(c) >= 65 && int(c) <= 90 || int(c) >= 97 && int(c) <= 122 )
		cout << "Consonant";
	else
		cout << "Invalid";
	
	return(0); 
}