#include <iostream>

using namespace std;

int main(void)
{
	int num = 0;
	cin >> num;
	
	if(num > 0)
		cout << "Positive";
	else if(num < 0)
		cout << "Negative";
	else
		cout << "Zero";
	
	return(0); 
}