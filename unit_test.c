#include <stdio.h>

int fib(int n){
	if (n < 3){
		return 1;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}

int main(){
	for (int i = 1; i < 50; i++){
		printf("Fib(%d) = %d\n", i, fib(i));
	}
}