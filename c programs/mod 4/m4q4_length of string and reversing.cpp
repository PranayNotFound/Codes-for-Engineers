#include<stdio.h>

int string_ln(char*);
 
int main() {
   char str[20];
   int length,i;
   
   
   printf("Enter any string : ");
   gets(str);
   
   length = string_ln(str);
   printf("The length of the given string %s is : %d", str, length);
   
   printf("\nThe Reverse Of The String Is:");
	for(i=length;i>=0;i--)
		printf("%c",*(str+i));
}
 
int string_ln(char*p) /* p=&str[0] */
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}