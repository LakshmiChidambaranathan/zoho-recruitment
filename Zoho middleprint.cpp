#include<stdio.h>
void middlePrint(char a[],int n)
{
	int mid=(n/2),k=0;//To get middle elt
	char b[n];
	for(int i=mid;i<n;i++)
		b[k++]=a[i];
	for(int i=0;i<mid;i++)
		b[k++]=a[i];
		
	//Printing
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++)
			printf(" ");
		for(int j=0;j<=i;j++)
			printf("%c",b[j]);
		printf("\n");
	}
	
}
int main()
{
	char a[100];
	scanf("%s",a);
	int n;
	for(n=0;a[n];n++);
	middlePrint(a,n);
}
