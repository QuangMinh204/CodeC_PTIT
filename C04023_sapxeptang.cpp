#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i=1;i<=n;i++) scanf("%d", &a[i]);
	for (int i=1;i<=n;i++)
	    for (int j=i+1;j<=n;j++)
	        if (a[i]>a[j]){
	       	    int t=a[i];
	       	    a[i]=a[j];
	       	    a[j]=t;
		    }
	for (int i=1;i<=n;i++) printf("%d ", a[i]);
}
