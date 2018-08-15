#include <iostream>

using namespace std;

int main(void)
{
	char c = 0;
	cin >> c;
	
	if(int(c) >= 65 && int(c) <= 90 || int(c) >= 97 && int(c) <= 122)
		cout << "Alphabet";
	else
		cout << "No";
	
	return(0); 
}