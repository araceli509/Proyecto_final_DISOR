#include<conio.h>
#include <stdio.h>
class numero_ulam{

main(){
	int num=0;
	printf("ingrese un numero: ");
	scanf("%d",&num);
	do
	{
		if(num%2==0)
		{
			num/=2;
			
		}
		else
		{
			num*=3;
			num+=1;
			
		} 
		printf(" -%d",num);
		
	}
	while(num!=1);
	getch();
}


};
