#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int N, K;
	int sum = 0;
	cin >> N >> K;
	int array[N];
	int index = 0;

	do{
		cin >> array[index];
		if(index < K)
			sum += array[index];
		index++;
	}while(--N);

	cout << sum;

	return(0); 
}