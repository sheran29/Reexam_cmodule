#include<stdio.h>
# define a 10

#define deb
 void func_1(){
	 printf("inside funnction 1\nmacro a is:%d",a);}
 void func_2(){
	 printf("inside function 2\n");}
 void func_3(){
	 enum week{ mon, sun, tue};
	 enum week c;
	 printf("inside function 3\nsun:%d",c=sun) ;}

int main()
{


  #ifdef deb
	func_1();
	func_3();
  #else
	func_2();
  #endif
	return 0;
}
