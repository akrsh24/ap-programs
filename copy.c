#include <stdio.h>

void main()
{
   char ch;
   FILE *fptr1,*fptr2;
   fptr1=(fopen("student.txt","r"));
   fptr2=(fopen("student1.txt","w"));
   if(fptr1==NULL)
   {
       printf("Error!");
       exit(0);
   }
   while((ch=getc(fptr1))!=EOF)
   {
       fputc(ch,fptr2);
   }
   printf("\n file copied");
   fclose(fptr1);
   fclose(fptr2);
}
