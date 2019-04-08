#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*sum of 1-100*/
void main()
{
	int i=1,sum=0;

	while(i<=100)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
}


void main(int argc, char const *argv[])
{
	int i=1,sum=0;
	do
	{
		sum+=i;
		i++;
	}while{i<=100};
	printf("sum=%d\n",sum );
	return 0;
}

void main(int argc, char const *argv[])
{
	int i,sum=0;
	for (i=1;i<=100;i++)
		sum+=i;
	printf("sum=%d\n",sum );
	return 0;
}

/*Euclid Method, while loop for the greatest common divisor of two int*/
void main(int argc, char const *argv[])
{
	int m,n,r;

	m=135,n=891;

	while(n!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("Their greatest common divisor is %d\n",m);
	return 0;
}

/*com-loop*/
void main(int argc, char const *argv[])
{
	int i,j;

	for (int i = 0; i < 3; ++i)
	{
		printf("i=%d\n",i );
		for (int j = 0; j < 4; ++j)
			printf("j=%-4d\n", j);
		printf("\n");
	}
	return 0;
}

/*find the positive numbers and their average*/
void main(int argc, char const *argv[])
{
	int i,a,num=0;
	float sum=0;

	for (int i = 0; i < 10; ++i)
	{
		scanf("%d",&a);
		if (a<=0) continue;
		num++;
		sum=+=a;
	}
	printf("%d plus integer's sum:%.0f\n",sum,num );
	printf("average value:%.2f\n",sum/num );
	return 0;
}

/*calculate the area of triangle*/
void main(int argc, char const *argv[])
{
	float a,b,c;
	float s,area;

	if (a<=0||b<=0||c<=0)
	{
		printf("the length of three edges of triangle is error!\n");
		exit(-1);
	}
	s=(a+b+c)/2;
	s=s*(s-a)*(s-b)*(s-c);
	if(s<=0)
	{
		printf("the length of three edges of triangle is error!\n");
		exit(-1);
	}
	area=(float)sqrt(s);
	printf("area=%d\n", area);
	return 0;
}

/*验证哥德巴赫猜想
1.大于3的偶数n
2.p=1
3.do{
	4.p=p+1,q=n-p
	5.p是素数吗
	6.q是素数吗
7.}while p和q有一个不是素数
8.输出
对于7，设置两个标志量flagp和flagq，判断条件为(flagp*flagq==0)
检验是否是素数的程序：
flagp=1;
for(j=2;j<=(int)sqrt(p);j++)
	if(p除以j的余数==0)
	{
		flagp=0;
		break;
	}
*/
void main(int argc, char const *argv[])
{
	int i,n,p,q,flagp,flagq;

	if (n<4||n%2!=0)
	{
		printf("input data error!\n");
		exit(-1);
	}

	p=1;
	do{
		p++;
		q=n-p;

		//判断p是否为素数
		flagp=1;
		for (int i = 2; i < (int)sqrt(p); ++i)
		{
			if (p%i==0)
			{
				flagp=0;
				break;
			}
		}
		//判断q是否为素数
		flagq=1;
		for (int i=2;i<(int)sqrt(q);i++)
		{
			if (q%i==0)
			{
				flagq=0;
				break;
			}
		}
	}while(flagp*flagq==0);
	printf("%d=%d+%d\n",n,p,q );
	return 0;
}

void main(int argc, char const *argv[])
{
	int s=1;
	float n=1.0,t=1,pi=0;

	while(fabs(t)>=1e-6){
		pi+=t;
		n+=2;
		s=-s;
		t=s/n;
	}
	pi*=4;
	printf("pi=%d\n",pi );
	return 0;
}

/*打印大小可变的图形
   *
  ***
 *****
*******
 *****
  ***
   *
该图形的行数为size*/
void main(int argc, char const *argv[])
{
	int i,j,k,m,n,size;

	if(size<=0||size%2==0)
	{
		printf("the size is error!\n");
		exit(-1);
	}

	for (int i = 1; i <= size; ++i)
	{
		n=(i<=(size+1)/2)?i:size-i+1;
		n=2*n-1;
		m=(size-n)/2;
		for (k = 1; k <=m; ++k)
			printf(" ");
		for (j=1;j<=n;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

/*计算两个正整数之间的所有整数中，数字0-9出现的次数*/
void main(int argc, char const *argv[])
{
	int num1,num2;
	int n,s,r;
	int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;

	if(num1<0||num2<0||num1>num2)
	{
		printf("input error!\n");
		exit(-1);
	}

	for(n=num1;n<=num2;n++)
	{
		s=n;
		do{
			r=s%10;
			switch(r)
			{
				case 0:count0++;break;
				case 1:count1++;break;
				case 2:count2++;break;
				case 3:count3++;break;
				case 4:count4++;break;
				case 5:count5++;break;
				case 6:count6++;break;
				case 7:count7++;break;
				case 8:count8++;break;
				case 9:count9++;break;
			}
			s=s/10;
		}while(s!=0);
	}
	return 0;
}