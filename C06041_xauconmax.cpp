#include<stdio.h>
#include<string.h>
int main(){
	char s[100005];
	scanf("%s", &s);
	int max=97, imax;
	int a[130]={0}, b[130];
	int n=strlen(s);
	for (int i=0;i<n;i++){
	    a[s[i]]=1;
	    b[s[i]]=i;
	}
	int d=130;
	for (int i=0;i<n;i++){
		while (a[d]==0) d--;
		if (s[i]==d){
		    printf("%c", s[i]);
		    if (i==b[d]) d--;
		}
	}
}
