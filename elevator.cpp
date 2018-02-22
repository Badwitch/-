#include<stdio.h>
#include<math.h>
int main()
{
	struct request
{
	int a;
	int b;
	int c;
}request[5],temp;//结构体数组request用于存入请求,变量temp用于后面排序交换。
 	int i,sum=0,s=0,t=1;
 	for(i=0;i<5;i++)
 	{
 		scanf("%d %d %d",&request[i].a,&request[i].b,&request[i].c);
	 }
	
	 for(i=1;i<5;i++)
	 {
	 	if(request[i].a<request[i-1].a)
	 	{
	 		temp=request[i];
	 		request[i]=request[i-1];
	 		request[i-1]=temp;
		 }
	}//按请求时刻排序 
		for(i=0;i<5;i++)
		{
			s+=request[i].a+fabs(request[i].c-t);
			t=request[i].c;
			sum+=s;
			printf("%d时，停靠在%d楼\n",s,t);
		 } 
		 printf("%d",sum);
	 return 0;
}
 
