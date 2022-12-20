#include<iostream>
using namespace std;

char before(char x){
	int A = x;
	char B = A;
	if(A <= 91 && A > 48)
	{
		A--;
		if(A < 65)
		{
			A += 26;
		}
	}
	else
	{
		A = 48;
	}
	B = A;
	return B;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
