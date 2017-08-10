// =======================================
// = CS136, S14: Assignment 6, Problem 0 =
// = =================================== =
// = Author: C Master [1337]             =
// =======================================

// Interactive C testing program to test the case_catcher module.

#include <stdio.h>

#include "case-catcher.h"

// Stores the size of the buffer. This is the length of the string. This can be 
// increased and decreased as needed.
static const int BUFFER_SIZE = 1024;

int main(void) {
  char buffer[BUFFER_SIZE + 1];
  char c;

  // Zero-fills the buffer.
  for (int i = 0; i < BUFFER_SIZE + 1; ++i) {
    buffer[i] = '\0';
  }

  for (int i = 0; (EOF != (c = getchar())) && (i < BUFFER_SIZE); ++i) {
    buffer[i] = c;
  }
  
  printf("%c\n", is_sentence_case(buffer) ? 'y' : 'n');

  return 0;
}
