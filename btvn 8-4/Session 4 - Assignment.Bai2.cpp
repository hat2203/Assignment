# include <stdio.h>
int main (){
	int a;
	int b;	
		printf ("nhap a=");
		scanf ("%d", &a);
		printf ("nhap b=");
		scanf ("%d", &b);
	int i;
	int j;
	int x; 
	int y;
	
	if (a==0 && b==0){
		printf ("khong co UCLN va BCNN");
	}
	if (a==0 || b==0){
		printf ("UCLN (%d %d) la %d",a,b,a+b);
		printf ("khong co BCNN");
	}else{
		for (i=1 ; i<=a && i<=b ; i++){
			if (a%i==0 && b%i==0){
				x=i;
			}
		}
		for (j=1 ; j<=a*b ; j++){
			if (y%a==0 && y%b==0){
				y=j;
			}
		}
		printf ("UCLN (%d %d) la %d \n",a,b,x);
		printf ("BCNN (%d %d) la %d",a,b,y);
		
	}
}
	

