
#include <stdio.h>
#include <stdlib.h>

void replace_print(char* buf, int buf_size, FILE* file) {
   char aux;
   int to_upper_lower = 'A' - 'a';
   for (int i = 0; i < buf_size; i++) {
      aux = fgetc(file);
      if (aux >= 'a' && aux <= 'z')
         buf[i] = aux + to_upper_lower;
      else if (aux >= 'A' && aux <= 'Z') {
         buf[i] = aux - to_upper_lower;
      }
      else {
         buf[i] = aux;
      }
   }
   
   for (int i = 0; i < buf_size; i++) {
      printf("%c", buf[i]);
   }
}


char* allocate_buffer(int buf_size) {
   char* buf = (char*)malloc(buf_size);
   if (buf == NULL) {
      printf("Error: failed to allocate buffer\n");
      exit(1);
   }
   return buf;
}


char deallocate_buffer(char* buf) {
   free(buf);
}
