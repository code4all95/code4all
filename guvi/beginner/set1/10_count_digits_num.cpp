#include <iostream>
#include <vector>

using namespace std;

int main(void){
	unsigned long int num;
	int digitsCount = 0;

	cin >> num;

	while(num){
		num /= 10;
		digitsCount++;
	}
	cout << digitsCount;

	return(0); 
}