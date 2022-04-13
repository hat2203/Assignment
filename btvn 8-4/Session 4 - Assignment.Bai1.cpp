# include <stdio.h>
int main() {
	int n;
	int s=0;
	do{
		printf ("nhap n=");
		scanf ("%d",&n);
		if (n<=0){
			printf ("vui long nhap lai n > 0");
		}
	}
	while (n<=0);
	
	int i=1;
	while (i<=n){
		if (n%i==0){
			s+=i;
			
		}
		i++;
	}
	printf ("tong uoc so cua %d la : %d ",n,s);
	
}
