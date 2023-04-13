#include <stdlib.h>
#include "main.h"

/**
 **malloc_cheched-allocates memory usiing malloc
 *@B: number of bytes to allocate
 *
 *return: a pointer to allocated memoty
 */

void *malloc_checked(unsigned int B)
{

  void *ptr;

  ptr = malloc(B);

  if (ptr == NULL)

    exit(98);

  return (ptr);

}
