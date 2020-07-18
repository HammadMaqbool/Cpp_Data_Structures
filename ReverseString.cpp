#include<stdio.h>
#include<conio.h>
int StringLength(char a[]);
int main()
{
   	char Original[100];
   	char reverse[100];
   
  	printf("Enter the String ");
   	scanf("%s",Original);
   
   	int Result = StringLength(Original);
	Result = Result -1;
	
   	for(int i =0; Original[i]!='\0';i++)
   	{
   		reverse[i] = Original[Result];
   		Result-=1;
   	}
   	printf("The Reverse string %s = ",reverse);
}

int StringLength(char a[])
{
	int Length_ = 0;
	
	 for(int i=0; a[i]!='\0'; i++)
 	 {
		Length_=Length_+1;
 	 }
 	 return Length_;
}
