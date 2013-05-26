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
	{ 0x36158358, "crypto_aead_type" },
	{ 0x333c6311, "crypto_ahash_type" },
	{ 0xb824d5f4, "crypto_ablkcipher_type" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xfba03543, "platform_driver_register" },
	{ 0x8fac4d79, "debugfs_create_file" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x5361250d, "debugfs_create_dir" },
	{ 0x6b285147, "crypto_register_ahash" },
	{ 0xbb2370ce, "_dev_info" },
	{ 0x625a486d, "dev_err" },
	{ 0x7fb2d73c, "crypto_register_alg" },
	{ 0x544253c4, "qce_hw_support" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x620134da, "dev_set_drvdata" },
	{ 0x441c192e, "qce_open" },
	{ 0xcfd9a2c0, "des_ekey" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x60f71cfa, "complete" },
	{ 0xf6288e02, "__init_waitqueue_head" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x1a9df6cc, "malloc_sizes" },
	{ 0xbb4f6c53, "kmem_cache_alloc" },
	{ 0xec6a4d04, "wait_for_completion_interruptible" },
	{ 0x6385e785, "crypto_enqueue_request" },
	{ 0x76c6f7a2, "mem_section" },
	{ 0x8927dda2, "ebi1_phys_offset" },
	{ 0xbe917b8a, "qce_aead_req" },
	{ 0xd5152710, "sg_next" },
	{ 0xcf6f9310, "page_address" },
	{ 0x27e1a049, "printk" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xad90232b, "qce_process_sha_req" },
	{ 0xb03f0e17, "qce_ablk_cipher_req" },
	{ 0x81d78209, "crypto_dequeue_request" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x8949858b, "schedule_work" },
	{ 0x71c90087, "memcmp" },
	{ 0x91dda801, "scatterwalk_map_and_copy" },
	{ 0x7a4497db, "kzfree" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x9d669763, "memcpy" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x575c81e1, "qce_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xd4ce78a4, "crypto_unregister_ahash" },
	{ 0x7de44a86, "crypto_unregister_alg" },
	{ 0x619a384c, "dev_get_drvdata" },
	{ 0xdb3ada94, "platform_driver_unregister" },
	{ 0x3506e692, "debugfs_remove_recursive" },
	{ 0x4588bf0f, "__dynamic_pr_debug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qce";


MODULE_INFO(srcversion, "2B12B3AD9154F781A49F877");
