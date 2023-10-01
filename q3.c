#include <stdio.h>
#include <string.h>

char encrypt_character(char character) {
  if (character >= 'a' && character <= 'z') {
    return character + 3;
  } else if (character >= 'A' && character <= 'Z') {
    return character + 3;
  } else if (character >= '0' && character <= '9') {
    return character + 3;
  } else {
    return character;
  }
}

char *encrypt_message(char *message) {
  int i;
  char *encrypted_message = malloc(strlen(message) + 1);
  for (i = 0; i < strlen(message); i++) {
    encrypted_message[i] = encrypt_character(message[i]);
  }
  encrypted_message[i] = '\0';
  return encrypted_message;
}

int main() {
  int n, i;
  char *message;
  char *encrypted_message;

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    message = malloc(1000 + 1);
    scanf("%s", message);
    encrypted_message = encrypt_message(message);
    printf("%s\n", encrypted_message);
    free(message);
    free(encrypted_message);
  }

  return 0;
}