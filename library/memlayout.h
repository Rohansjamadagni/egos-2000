#pragma once

/* Memory regions */
#define PAGE_SIZE          4096
#define RAM_END            0x90000000 /* 256MB memory in total     */
#define APPS_PAGES_BASE    0x80800000 /* 248MB initially free      */

#define APPS_STACK_TOP     0x80800000 /* 2MB app stack             */
#define SYSCALL_ARG        0x80601000 /* struct syscall            */
#define APPS_ARG           0x80600000 /* main() argc/argv          */
#define APPS_ENTRY         0x80400000 /* 2MB app code and data     */

#define EGOS_STACK_TOP     0x80400000 /* 2MB egos stack            */
#define GRASS_STRUCT_BASE  0x80201000 /* struct grass              */
#define EARTH_STRUCT_BASE  0x80200000 /* struct earth              */
#define RAM_START          0x80000000 /* 2MB egos code and data    */

#define BOARD_FLASH_ROM    0x20400000 /* 4MB disk image on ROM, only on the Arty board */
