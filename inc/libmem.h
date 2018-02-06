#ifndef LIBMEM_H
# define LIBMEM_H

# include <stdint.h>
# include <stddef.h>

void *mem_set(void *mem, uint8_t c, size_t n);
void *mem_cpy(void *dest, const void *src, size_t n);
void *mem_ccpy(void *dest, const void *src, uint8_t c, size_t n);
void *mem_move(void *dest, const void *src, size_t n);
void *mem_chr(const void *mem, uint8_t c, size_t n);
void *mem_rchr(const void *mem, uint8_t c, size_t n);
int mem_cmp(const void *mem1, const void *mem2, size_t n);

#endif