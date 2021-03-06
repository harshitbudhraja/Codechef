//C++ 14
#include <iostream>
#include <cstdlib>
#include <cstdio>
 
int main() {
	int T, N, count=0;
	int score; //Temporarily store score of an astronaut
	int threshold;
	scanf("%d", &T);
	for(; T>0; --T){
		count = 0; //Reset counter for each test-case
		scanf("%d%d", &N, &threshold);
		for(; N>0; --N){
			//We can increment the counter instantaneously
			//storing the score of each astronaut isn't needed
			scanf("%d", &score);
			if(score >= threshold)
				count++;
		}
		printf("%d\n", count);
	}
}