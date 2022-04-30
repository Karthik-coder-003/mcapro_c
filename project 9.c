/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main(){
   FILE *fptr1, *fptr2 ; // declaring file pointer
   char filename[100], c;
   char ch;
   int i,pos;
   printf("Enter the filename to open for reading \n");
   scanf("%s",filename);
      fptr1=fopen("input.txt","r");
      if(fptr1==NULL)
      {
            printf("File does not exist..");
      }
      fseek(fptr1,0,SEEK_END);
      pos=ftell(fptr1);
      //printf("Current postion is %d\n",pos);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fptr1,-i,SEEK_END);
            ch=fgetc(fptr1);
            printf("%c ",ch);
      }
      printf("\n");
   // Open one file for reading
   fptr1 = fopen(filename, "r");
   if (fptr1 == NULL){
      printf("Cannot open file %s \n", filename);
      exit(0);
   }
   printf("Enter the filename to open for writing \n");
   scanf("%s", filename);
   // Open another file for writing
   fptr2 = fopen(filename, "w");
   if (fptr2 == NULL){
      printf("Cannot open file %s \n", filename);
      exit(0);
   }
   // Read contents from file
   c = fgetc(fptr1);
   while (c != EOF){
      fputc(c, fptr2);
      c = fgetc(fptr1);
   }
   printf("\nContents copied to %s", filename);
   fclose(fptr1);
   fclose(fptr2);
   return 0;
}
