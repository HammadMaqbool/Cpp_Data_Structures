#include<iostream.h>
#include<conio.h>
class Temp{
private:
char a[100], b[100];
public:
Copy()
{
cout<<"Enter a string to copy in other ";
cin>>a;
cout<<endl;
for(int i =0;a[i]!='\0'; i++)
{
b[i]=a[i];
b[i+1]='\0';
}
cout<<"Copied is = "<<b;
}
};
void main ()
{
Temp obj;
obj.Copy();
}
