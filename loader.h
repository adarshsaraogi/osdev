#ifndef INCLUDE_LOADER_H
#define INCLUDE_LOADER_H

#include "types.h"

uint32_t KERNEL_VIRTUAL_BASE;

void * boot_pagedir;
void * boot_pagetab1;

#endif /* INCLUDE_LOADER_H */