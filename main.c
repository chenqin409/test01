// 头文件
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//类型定义
void MyStrcp(char dstStr[],char srcStr[])
{
	int len1=strlen(dstStr);
	int len2=strlen(srcStr);
	for(int i=0;i<len1;i++)
	{
		printf("%c",dstStr[i]);
	}
	
	if(len1==len2)
	{
		printf(" is equal long to ");
	}
	else if(len1>len2)
	{
		printf(" is longer than ");
	}
	else
	{
		printf(" is shorter than ");
	}
	
	for(int i=0;i<len2;i++)
	{
		printf("%c",srcStr[i]);
	}
	printf("\n");
}

int main()
{
	int times;
	scanf("%d",&times);
	char a[100];
	char b[100];
	
	for(int i=0;i<times;i++)
	{
		scanf("%s",a);
		scanf("%s",b);
		MyStrcp(a,b);
	}
	
	return 0;
}

 
