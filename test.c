#include <stdio.h>

typedef struct{
	int a;
	int b;
	int c;
}base,*bast_t;

base test1 ={
	.a=10,
	.b=20,
	.c=30,
};
base test2 ={
	.a=100,
	.b=200,
};
base test3 ={
	.a=1000,
	.b=2000,
};
bast_t	test_array[] =
{
	&test1,
	&test2,
	&test3,
	NULL,
};

int main(int argc,char**argv)
{
	base **p =(base **)&test_array;
	bast_t q;
	long* ww = test_array;
	int i;
	int aa[]={10,20,30};
	int *pa = aa;
	printf("*pa+1=%d,*(pa+1)=%d\n",*pa+1,*(pa+1));
	printf("test_array=%p\n",test_array);
	
	printf("&test_array=%p\n",&test_array);

	printf("ww+1=%p\n",ww+1);
	printf("*(ww+1)=%p\n",*(ww+1));
	printf("ww+3=%p\n",ww+3);
	printf("ww=%p\n",ww);

	printf("&test_array[0]=%p\n",&test_array[0]);
	printf("test_array[1]=%p\n",test_array[1]);
	printf("%d %d %d\n",sizeof(test_array),sizeof(*q),sizeof(test1));	
	printf("*p=%p\n",*p);
	printf("p=%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("*(p + 1)=%p\n",*(p + 1));
	printf("*(p + 2)=%p\n",*(p + 2));
	printf("(*p+ 1)=%p\n",(*p + 1));
	printf("(*p+ 2)=%p\n",(*p + 2));
	printf("*(p+ 3)=%p\n",*(p + 3));
	printf("(*p+ 3)=%p\n",(*p + 3));
	for(i=0;*(p + i)!=NULL;i++)
	{
		q = *(p + i);
		
		printf("q->a=%d,q->b=%d\n",q->a,q->b);
	}
	return 0;
	
}



