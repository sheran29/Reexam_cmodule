#include<stdio.h>
void print();
int *add();
struct std
{
	int roll;
	char name[20];
	//struct node;
};

union mark
{
	int m1;
	char m2;
};
struct std s;
union mark m;
int*add()
{
        printf("\nroll:%d",s.roll);
        printf("\nname:%s",s.name);
        printf("\nunion:%d",m.m1);
	printf("\nunion:%c",m.m2);
// 	print(add);

}
void print(struct std s)
{
	printf("from 2 function\n");

	 printf("\nroll:%d",s.roll);
        printf("\nname:%s",s.name);
        printf("\nunion:%d",m.m1);
        printf("\nunion:%c",m.m2);
	add();
}

int main()
{

   printf("enter no: \n");
   scanf("%d",&s.roll);

   printf("enter name:\n");
   scanf("%s",s.name);

   printf("enter m1:\n");
   scanf("%d",&m.m1);

   printf("enter m2:\n");
   scanf("%c",&m.m2);

   //add(s);
   print(s);


}

