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
	{ 0x8d0bc22d, "register_qdisc" },
	{ 0x8a07cf1d, "__qdisc_calculate_pkt_len" },
	{ 0x355cf546, "kfree_skb" },
	{ 0x25e4c262, "tc_classify" },
	{ 0xbe8f2dcc, "pskb_expand_head" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0xacae6b71, "qdisc_destroy" },
	{ 0xe96a6ebb, "tcf_destroy_chain" },
	{ 0x484def36, "noop_qdisc" },
	{ 0x16269304, "pfifo_qdisc_ops" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xa56dcee7, "qdisc_tree_decrease_qlen" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x27e1a049, "printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1673fa6a, "qdisc_create_dflt" },
	{ 0x1e719090, "qdisc_reset" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0xcc7e6e15, "skb_trim" },
	{ 0x5cd3521a, "nla_put" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0xba16f9d0, "unregister_qdisc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

