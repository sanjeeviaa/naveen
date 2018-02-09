

#include <stdio.h>
#include <string.h>
 
void main()
{
   char arr[100];
 
   printf("Enter a string to reverse\n");
   gets(arr);
 
   strrev(arr);
 
   printf("Reverse of the string is \n%s\n", arr);
 
   
}
