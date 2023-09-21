#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(int n){
	if (n==0) return;
	solve(n/2);
	printf("%d", n%2);
}
int main(){
	int n;
	scanf("%d", &n);
	if (n==0) printf("0");
    else solve(n);
}
