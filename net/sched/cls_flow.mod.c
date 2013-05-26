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
	{ 0xacc6ca08, "register_tcf_proto_ops" },
	{ 0x24b349f6, "tcf_action_exec" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x37111166, "__skb_get_rxhash" },
	{ 0xa8a33214, "__tcf_em_tree_match" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2f54757a, "__pskb_pull_tail" },
	{ 0x36dfea54, "tcf_exts_change" },
	{ 0x64014628, "init_timer_deferrable_key" },
	{ 0x78ccdceb, "tcf_em_tree_validate" },
	{ 0x18341c76, "tcf_exts_validate" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4f391d0e, "nla_parse" },
	{ 0x1a9df6cc, "malloc_sizes" },
	{ 0xbb4f6c53, "kmem_cache_alloc" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1298ac43, "mod_timer" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x27e1a049, "printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9daea67, "tcf_em_tree_destroy" },
	{ 0x6227093f, "tcf_exts_destroy" },
	{ 0xd1671060, "del_timer" },
	{ 0xcc7e6e15, "skb_trim" },
	{ 0x55d8a4a6, "tcf_exts_dump_stats" },
	{ 0x1fcc7d62, "tcf_em_tree_dump" },
	{ 0xd1262158, "tcf_exts_dump" },
	{ 0x5cd3521a, "nla_put" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5d7142d7, "unregister_tcf_proto_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

