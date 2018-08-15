#include <iostream>

using namespace std;

int main(void)
{
	int num = 0;
	cin >> num;
	
	if(num & 1)
		cout << "Odd";
	else
		cout << "Even";
	
	return(0); 
}