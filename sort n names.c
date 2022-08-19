#include<string.h>
#include<stdio.h>
main()
{
	int i,j,n;
	char a[50][20],t[20];
	printf("enter the number of students\t");
	scanf("%d",&n);
	flushall();
	printf("enter the names \t");
	for(i=0;i<n;i++)
	gets(a[i]);
	for(i=1;i<n;i++)
	for(j=0;j<n-1;j++)
	if(strcmp(a[j],a[j+1])>0)
	{
		strcpy(t,a[j]);
		strcpy(a[j],a[j+1]);
		strcpy(a[j+1],t);
	}
	printf("sorted array is\n");
	for(i=0;i<n;i++)
	printf("%d \t",a[i]);
}
