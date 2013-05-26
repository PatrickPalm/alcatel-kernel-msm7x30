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
	{ 0x5f754e5a, "memset" },
	{ 0xd63d295c, "sysdev_create_file" },
	{ 0xd6fdcedc, "sysdev_register" },
	{ 0xac67882, "sysdev_class_register" },
	{ 0x54992aec, "sysdev_class_unregister" },
	{ 0x83fe4d03, "sysdev_unregister" },
	{ 0xf2e723ca, "sysdev_remove_file" },
	{ 0x8cf51d15, "up" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x328a05f1, "strncpy" },
	{ 0x85df9b6c, "strsep" },
	{ 0x176156dd, "down_timeout" },
	{ 0x41a8ea0a, "mem_text_write_kernel_word" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

