#define FUNCS_H


char* allocate_buffer(int buf_size);
void deallocate_buffer(char* buf);
void replace_print(char* buf, int buf_size, FILE* file);
