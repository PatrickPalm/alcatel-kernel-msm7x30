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
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x744479e8, "put_mtd_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x760a0f4f, "yield" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x71c90087, "memcmp" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xc79ae302, "get_mtd_device" },
	{ 0x27e1a049, "printk" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

