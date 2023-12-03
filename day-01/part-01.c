#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *file;
  char *filename = "./input.txt";
  char *puzzle = NULL;
  size_t puzzleSize = 0;

  // Read puzzle from './input.txt' file
  file = fopen(filename, "r");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }

  int lineCount = 0;
  int solution = 0;

  while (getline(&puzzle, &puzzleSize, file) != -1) {
    // Count lines
    lineCount++;

    // Process puzzle
    char *ptr = puzzle;
    int digits[strlen(puzzle)];
    int digitCount = 0;

    while (*ptr != '\0') {
      if (*ptr >= '0' && *ptr <= '9') {
        digits[digitCount++] = *ptr - '0';
      }
      ptr++;
    }

    if (digitCount > 0) {
      int first = digits[0];
      int last = digits[digitCount - 1];
      solution += first + last;
    }
  }

  fclose(file);
  free(puzzle);

  printf("Number of lines in the file: %d\n", lineCount);
  printf("Solution: %d\n", solution);

  return 0;
}
