#include <stdlib.h>
#include <stdio.h>  
#define FILENAME "return_file.xml"

int main(void)
{
  char *line_buf = NULL;
  size_t line_buf_size = 0;
  ssize_t line_size;
  FILE *fp = fopen(FILENAME, "r");
  if (!fp)
  {
    fprintf(stderr, "Lỗi đọc file '%s'\n", FILENAME);
    return EXIT_FAILURE;
  }
  
  line_size = getline(&line_buf, &line_buf_size, fp);
  printf("%s", line_buf);
  
  fclose(fp);

  return EXIT_SUCCESS;
}