In the C programming language, file I/O (input/output) is performed using functions from the standard library, such as fopen, fclose, fread, fwrite, fseek, etc. These functions allow you to open and close files, read and write data, and move the position of the file pointer within a file. Here is an example of how to write data to a file in C:

#include <stdio.h>

int main(void) {
  FILE *file;

  file = fopen("file.txt", "w");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }

  fprintf(file, "Writing to a file in C\n");

  fclose(file);

  return 0;
}
In this example, fopen is used to open a file named file.txt in write mode ("w"), and fprintf is used to write a string to the file. Finally, fclose is used to close the file when we're done with it.
