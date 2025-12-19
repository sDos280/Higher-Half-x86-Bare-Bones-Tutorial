
#include "multiboot_helper.h"
#include "multiboot.h"
#include "types.h"

// Entry point called by GRUB
void kernel_main(multiboot_info_t* multiboot_info_structure, uint32_t multiboot_magic)
{
    if (multiboot_magic != MULTIBOOT_BOOTLOADER_MAGIC) {
        /* */
    }

    asm volatile ("sti");
    while (1);
}
