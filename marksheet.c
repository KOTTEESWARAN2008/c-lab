#include<stdio.h>
#include<conio.h>
int main()
{
	float m[5]={55,66,77,88,99};
	float tot,avg;
	printf("\n\t\t\t\tBCA-A\t\t\t\t\n");
	printf("\n_____________________________________________________________");
	printf("\nName:KOTTEEESWARAN\t\t\tReg=112534021");
	printf("\n______________________________________________________________");
	printf("\nTamil=%5.2f",m[0]);
	printf("\nEnglish=%5.2f",m[1]);
    printf("\nMathamatics=%5.2f",m[2]);
    printf("\nscience=%5.2f",m[3]);
    printf("\nsocial=%5.2f",m[4]);
    tot=m[0]+m[1]+m[2]+m[3]+m[4];
    avg=tot/5;
	printf("\n_________________________________________________________________");
	printf("\ntot=%5.2f\t\t\t\t\tavg=%5.2f",tot,avg);
	printf("\n_________________________________________________________________");
	getch();
	
}
