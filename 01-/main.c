#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"


int main(int argc, char *argv[]) {
   if (argc != 3) {
      printf("Usage: %s <buffer-path> <buffer-size>\n", argv[0]);
      return 1;
   }
   int buf_size = atoi(argv[2]);
   char* file_path = argv[1];
   FILE* file = fopen(file_path, "r");
   char* buf = allocate_buffer(buf_size);
   replace_print(buf, buf_size, file);

   return 0;
}
