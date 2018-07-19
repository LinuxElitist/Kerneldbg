/* Kerneldbg
Trivial codes on Kernel debugging
*/

#include <linux/module.h>
#include <linux/sched.h>
#include <stddef.h>

int init_module()
{
        printk(KERN_INFO "offset in task_struct is 0x%lx\n", offsetof(struct task_struct, pid));
        printk(KERN_INFO "offset in task_struct is 0x%lx\n", offsetof(struct task_struct, tgid));
        printk(KERN_INFO "offset in task_struct is 0x%lx\n", offsetof(struct task_struct, comm));
        printk(KERN_INFO "offset in task_struct is 0x%lx\n", sizeof(struct task_struct));
        return 0;
}

void cleanup_module() { }
