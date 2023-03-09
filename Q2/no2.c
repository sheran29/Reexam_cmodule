#include<stdio.h>
#include<stdlib.h>

void main()
{

        //int fd1,fd2;
	char c;
	FILE*fp1= fopen("file.txt","r");
	FILE*fp2= fopen("file2.txt","w");
 
	if(fp1 == NULL || fp2== NULL )
                {
                        puts("file not found");
                        exit(0);
                }
                while((c = fgetc(fp1)) !=EOF)
                {
                        fputc(c,fp2);
                }
  /*              while((c = fgetc(fp2)) !=EOF)
                {
                        fout(c,fp2);
                }
*/
	fclose(fp1);
	fclose(fp2);
}

	


