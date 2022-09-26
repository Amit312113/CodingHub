/* #include<stdio.h>
int main()
{
	int i=10,*ptr;
	ptr=&i;
	printf("%d %d",i,&i);
	printf("\n%d %d",i,ptr);
	return 0;	
}
//--------------------------------------------------------------------------------
//pointer to constant

#include<stdio.h>
int main()
{
	int i,j=20;
	i=10;
	const int *ptr;
		
	ptr=&i;
	printf("\n Value of ptr:%d",*ptr);
	
//	ptr=*ptr+10;//error,we can not change the value of constant integer pointer
	ptr= &j;	
	printf("\n Value of nptr:%d",*ptr);
	
	return 0;	
}


//------------------------------------------------------------------------------
//Constant pointer
#include<stdio.h>
int main()
{
	int i,j=20 ;
	i=10;
	int *const ptr=&i;		
	printf("\n Value of ptr:%d",*ptr);
	//ptr= &j;//[Error] assignment of read-only variable 'ptr'
	*ptr=*ptr+10;
	printf("\n Value of ptr:%d",*ptr);
	return 0;	
}

//------------------------------------------------------------------------------
//constant pointer to constant
#include<stdio.h>
int main()
{
	int i,j;
	const int *const ptr=&i;
	printf("value at ptr:%d",*ptr);
	//ptr=&j;//[Error] assignment of read-only variable 'ptr'
	//ptr=ptr+10;//[Error] assignment of read-only variable 'ptr'
	printf("value at ptr pointing to j",*ptr);
	return 0;
}

//-------------------------------------------------------------------------------
//void pointer

#include<stdio.h>
#include<malloc.h>
int main()
{
	int i,j;
	i=10,j=20;
	int *ptr=(int*) malloc(sizeof(int)*12);
	//ptr=&i;
	printf("value at void ptr:%d",sizeof(ptr));
	ptr=&j;
	printf("\nvalue at void ptr:%d",*ptr);

	return 0;
}
//-------------

#include<stdio.h>
int main()
{
	int i=10;		
	void *ptr;//Generic pointer no (data type) we need type cast void pointer into required data type
	ptr=&i;
	printf("\nvalue at void ptr:%d",*(int*)ptr);
	return 0;
}

//----------------------------------------------------------------------------------\

//NULL pointer

#include<stdio.h>
 
int add(int,int);//declaring function in this scope
int main()
{
	int i,j,sum=0,*ptr=NULL;
	i=10;
	j=20;
	sum=add(i,j);
	printf("sum:%d",sum);
	printf("\nvalue at ptr:%d",ptr);
	printf("\nAddress of ptr:%d",&ptr);
	return 0;
	
}
 int add(int x,int y)
 {
 	int add=x+y;
 	return add;
 }

//-------------

#include<stdio.h>
#include<malloc.h>
int main()
{
	int *ptr=NULL;
	ptr=(int*)malloc(50);
	//printf("ptr pointing to:%d",ptr);
//	printf("\nvalue at *ptr:%d",*ptr);
	if(ptr==NULL)
	{
		printf("\nMemory could not be allocated");
	}
	else
	{
		printf("\nMemory allocated successfully");
	}
	return 0;
}

//-----------------------------------------------------------------------------
//function returning a pointer
#include<stdio.h>
int *fun(int *var);
void fun1();
int main(){
	int *ptr,i=10;
	ptr=fun(&i);
	printf("\n value at ptr --> %d",*ptr);
	return 0;
}
int *fun(int *var)
{
	*var=50;
	return var;
}

//int *c = (int *)malloc(sizeof(int));

*/
//-----------------------------------
//Dangling pointer
#include<stdio.h>
int main()
{
	int *ptr,*p;
//	int *ptr=(int*) malloc(sizeof(int)*5);
	ptr=(int*) malloc(sizeof(int)*12);
	p=ptr;
	*ptr=10;
	printf("\n value at ptr --> %d",*ptr);
	printf("\n value at p --> %d",*p);
	return 0;

}
