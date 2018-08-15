#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int count = 2;
	int temp;
	int max;

	cin >> max; 
	do{
		cin >> temp; 
		max = (max < temp)? temp : max;
	}while(--count);
	
	cout << max;

	return(0); 
}