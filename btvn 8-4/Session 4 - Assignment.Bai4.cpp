# include <stdio.h>
int main (){
	int n;
	int i;
	
	do{
		printf ("nhap so n:");
		scanf ("%d",&n);
		
	}while (n<=0);
	int m=n;
	 do {
	 	i=m%10;
	 } while (m/=10);
	 printf ("chu so dau tien la %d ",i);
}
