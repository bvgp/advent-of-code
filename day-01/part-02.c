#include <stdio.h>
#include <regex.h>

#define MAX_LINE_LENGTH 1000

const char *nums[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

int main() {
  const char *pattern = "^\\d|one|two|three|four|five|six|seven|eight|nine|ten";
  regex_t regex;
  int reti = regcomp(&regex, pattern, REG_EXTENDED);

  FILE *file = fopen("./input.txt", "r");

  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }

  char line[MAX_LINE_LENGTH];

  int solution = 0;

  while (fgets(line, sizeof(line), file) != NULL) {
    regmatch_t matches[3]; // Array to store matched substrings and offsets
    // printf("Line: %s", line);

    char digit[100] = scanf("%[a-zA-Z]", line);
    printf("%s", digit);

    // reti = regexec(&regex, line, 3, matches, 1);

    // if (!reti) {
    //   printf("'''%s''' is a valid match!\n", line);
    // }
  }

  fclose(file);

  printf("Solution: %d\n", solution);
  
  regfree(&regex);

  return 0;
}
