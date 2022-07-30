#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_LICENSE("haogroot");

static int hello_world(void)
{
    printk(KERN_ALERT "hello world!\n");
    return 0;
}


static void __exit hello_world_exit(void)
{
    printk(KERN_ALERT "goodbye!\n");
}

module_init(hello_world);
module_exit(hello_world_exit);
