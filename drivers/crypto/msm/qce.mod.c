#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x279a436b, "module_layout" },
	{ 0x526efb72, "clk_enable" },
	{ 0xf1208820, "dma_unmap_sg" },
	{ 0x7a520488, "dma_map_sg" },
	{ 0x1a9df6cc, "malloc_sizes" },
	{ 0xc5728e13, "clk_disable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xd5152710, "sg_next" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0x5f754e5a, "memset" },
	{ 0x625a486d, "dev_err" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0xe4d14011, "msm_dmov_enqueue_cmd" },
	{ 0x117ea38b, "dma_free_coherent" },
	{ 0x7ca8db12, "platform_get_resource" },
	{ 0x8927dda2, "ebi1_phys_offset" },
	{ 0xf17b709a, "dma_alloc_coherent" },
	{ 0xbb2370ce, "_dev_info" },
	{ 0xbb4f6c53, "kmem_cache_alloc" },
	{ 0x69cde83a, "clk_get" },
	{ 0x8c8a3980, "platform_get_resource_byname" },
	{ 0x37a0cba, "kfree" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8ff97ceb, "__msm_ioremap" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DF855483E8E9FB41EC929F8");
