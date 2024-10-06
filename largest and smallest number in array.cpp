#include<iostream>
using namespace std;
int main() {
	int n, largest,smallest;
	int array[10];
	cout << "Enter the values of arrays\n";
	for (int i = 0; i < 10; i++) {
		
		cin >> array[i];
	}
	largest = array[0];
	smallest = array[0];
	for(int j=0;j<10;j++){
		

		if (array[j] >largest) {
			largest = array[j];
		}
		if(array[j]<smallest){ 
			smallest = array[j];
		}

	}
	cout << "The Largest Number is: " << largest<<endl;
	cout << "The Smallest Number is: " << smallest << endl;
	return 0;
}