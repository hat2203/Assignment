# include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d", &n);
	int s=0;
	int t=0;
	while (n!=0){
		t=n%10;
		s=s+t;
		n/=10;
		
	}
	printf ("tong cac chu so la %d",s);
}
