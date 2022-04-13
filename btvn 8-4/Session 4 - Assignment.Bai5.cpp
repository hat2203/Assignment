# include <stdio.h>
int main (){
	int n;
	int max=0;
	do {
		printf ("nhap so nguyen n :");
		scanf ("%d",&n);
		
	}while (n<0);
	int m=n;
	if (n==0){
		max=0;
	}
	int i;
	do {
		i=n%10;
		if (i>max){
			max=i;
		}
	}while (m/=10);
	printf ("chu so lon nhat trong %d la %d ", n, max);
}
