#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x279a436b, "module_layout" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x620134da, "dev_set_drvdata" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x1a9df6cc, "malloc_sizes" },
	{ 0xc87c1f84, "ktime_get" },
	{ 0xcab1e907, "usb_kill_urb" },
	{ 0x5821dbfc, "__video_register_device" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x48a0f939, "mutex_lock_interruptible" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xd4c449a5, "video_unregister_device" },
	{ 0xe5ee8254, "usb_set_interface" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x555941a4, "usb_free_coherent" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd4cf8ded, "vm_insert_page" },
	{ 0x7b1825ac, "module_put" },
	{ 0xbb44beb9, "usb_submit_urb" },
	{ 0xbb4f6c53, "kmem_cache_alloc" },
	{ 0x47d785e7, "video_devdata" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x7b610b6b, "input_register_device" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x236d6e5b, "usb_clear_halt" },
	{ 0x7830bd3c, "input_free_device" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2809783b, "input_unregister_device" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3afe8b23, "usb_ifnum_to_if" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xf7a81eec, "vmalloc_to_page" },
	{ 0xb7bdb019, "usb_alloc_coherent" },
	{ 0x619a384c, "dev_get_drvdata" },
	{ 0xcb988cfb, "usb_free_urb" },
	{ 0x7091177c, "video_ioctl2" },
	{ 0x2feadb3e, "usb_alloc_urb" },
	{ 0xdf4c8767, "ns_to_timeval" },
	{ 0x85c8ff66, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

