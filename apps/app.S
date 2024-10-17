/*
 * (C) 2024, Cornell University
 * All rights reserved.
 *
 * Description: entry point of applications
 * Initialize stack pointer and call the application main()
 */
#include "memlayout.h"

    .section .text
    .global app_entry
app_entry:
    lw a0, 0(a0) /* a0 holds APPS_ARG, the address of integer argc */
    li sp, APPS_STACK_TOP
    call main
    call exit
