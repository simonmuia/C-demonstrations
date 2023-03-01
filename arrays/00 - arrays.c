// Online C compiler to run C program online
#include <stdio.h>

/**
 * This is a program that takes input of a given number of integers and prints an array as standardized on C Language
 * main - entry point
 * Return: returns 0 success
*/

int main() {
    int n = 5;
    int array[5]= {56, 57, 856, 856};
    // int i = 3;
    
    // array[5] = i;
    for (int dashes = 1; dashes < 20; ++dashes)
    {
        if (dashes != 10)
        {
            putchar('-');
        }else{
             printf(" Welcome to Array Printer ");
        }
    }
    putchar('\n');
   for (int num = 0; num < 5; ++num)
   {
       printf("Enter int %d: ", (num + 1));
       scanf("%d",&array[num]);
   }
   
   printf("array[5] = \{");
   for (int num = 0; num < 5; ++num)
   {
      if (num != 5)
      {
           printf("%d, ", array[num]);
      }
      printf("%d", array[num]);
   }
   printf("}\n");

    return 0;
}