#include <iostream>
#include <vector>

std::vector<int> memorize;
int fibo(int n) {
	if(memorize[n-1]!=-1) {
		return memorize[n-1];
	}
	return memorize[n-1] = fibo(n-1) + fibo(n-2);
}  

int main() {
	int n;
	std::cin>>n;
	memorize.resize(n);
	memorize[0] = memorize[1] = 1;
	for(int i = 2;i<n;i++) {
		memorize[i] = -1;
	}
	fibo(n);
	std::cout<<memorize[n-1]; 

	return 0;
}
/*

						5
					4		3
				3 		2|2		1
			2		1*/