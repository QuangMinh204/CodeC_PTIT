#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
    int n;
    scanf("%d", &n);
    int a[n+5];
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
	for (int i=0;i<n;i++) 
	    if (a[i]%2==0) printf("%d ", a[i]);
	printf("\n");
	for (int i=0;i<n;i++) 
	    if (a[i]%2==1) printf("%d ", a[i]);
}
int main(){
	solve();
}
