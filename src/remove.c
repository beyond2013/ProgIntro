#include <stdio.h>
int main ()
{
   int ret;
   char filename[] = "test1.txt";
   ret = remove(filename);
   if(ret == 0)
	 {
      printf("\nFile deleted successfully\n");
   }
	 else
	 {
      printf("\nError: unable to delete the file\n");
   }
   return 0;
}
