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

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xf21447ce, "module_layout" },
	{ 0x82720eb0, "kmem_cache_destroy" },
	{ 0xc425ea86, "iget_failed" },
	{ 0x1ef11509, "kmalloc_caches" },
	{ 0x5a34a45c, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0x1aa082cd, "mark_buffer_dirty_inode" },
	{ 0x680c3547, "__bread" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x960d6e94, "generic_file_llseek" },
	{ 0xf097d60a, "__mark_inode_dirty" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0x25ec1b28, "strlen" },
	{ 0xa67c181e, "block_write_begin" },
	{ 0x25820c64, "fs_overflowuid" },
	{ 0xc01cf848, "_raw_read_lock" },
	{ 0xe61e299a, "__lock_page" },
	{ 0x6e5fc631, "__lock_buffer" },
	{ 0x346d6872, "generic_file_aio_read" },
	{ 0x3027355, "block_read_full_page" },
	{ 0xb7cc84ec, "end_writeback" },
	{ 0x16010059, "mount_bdev" },
	{ 0xdc2d1063, "generic_read_dir" },
	{ 0xbc268b0e, "unlock_buffer" },
	{ 0xbc60f07e, "generic_file_aio_write" },
	{ 0x380320fe, "__insert_inode_hash" },
	{ 0xde0bdcff, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0xb024d4f7, "d_rehash" },
	{ 0x2fa5a500, "memcmp" },
	{ 0x5eabaf0c, "find_or_create_page" },
	{ 0xffb916f1, "d_alloc_root" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0xd6e57c01, "kmem_cache_free" },
	{ 0x7f658e80, "_raw_write_lock" },
	{ 0xab1f1df5, "setattr_copy" },
	{ 0xa338d648, "page_symlink" },
	{ 0xbbd720fd, "sync_dirty_buffer" },
	{ 0x6196c3eb, "unlock_page" },
	{ 0x6ad247e7, "__brelse" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xde3b737f, "inode_init_once" },
	{ 0xb789b758, "page_follow_link_light" },
	{ 0x741e5895, "invalidate_inode_buffers" },
	{ 0xbf304acd, "kmem_cache_alloc" },
	{ 0xcc07af75, "strnlen" },
	{ 0xea8332a2, "generic_file_mmap" },
	{ 0x7ed2d333, "bdevname" },
	{ 0xcb173062, "block_write_full_page" },
	{ 0x639b079b, "block_write_end" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x118597b2, "generic_write_end" },
	{ 0x249740f1, "do_sync_read" },
	{ 0x4831f35c, "unlock_new_inode" },
	{ 0xb2bdb5ac, "kill_block_super" },
	{ 0x1241dcf2, "inode_change_ok" },
	{ 0x8b2cf515, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x12831707, "kmem_cache_create" },
	{ 0xbb50507f, "register_filesystem" },
	{ 0x8309ca1, "iput" },
	{ 0xfe79d8c6, "read_cache_page" },
	{ 0xa93b6ac7, "generic_file_fsync" },
	{ 0x37a0cba, "kfree" },
	{ 0x8640167c, "do_sync_write" },
	{ 0xf15048e4, "ihold" },
	{ 0x236c8c64, "memcpy" },
	{ 0x50f5e532, "call_rcu_sched" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xd7a32539, "vmtruncate" },
	{ 0xe27b7335, "block_truncate_page" },
	{ 0x7bb45f74, "sb_set_blocksize" },
	{ 0xa3ff3e40, "generic_readlink" },
	{ 0xa236f5dd, "put_page" },
	{ 0xcafea18b, "__bforget" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xab1ce8c4, "__block_write_begin" },
	{ 0xfa068f6b, "mark_buffer_dirty" },
	{ 0x39e10c73, "unregister_filesystem" },
	{ 0x48df2c9f, "write_one_page" },
	{ 0x828f1fa5, "init_special_inode" },
	{ 0xbc11d2fb, "new_inode" },
	{ 0x495f51e0, "generic_file_splice_read" },
	{ 0xf654862, "__getblk" },
	{ 0xf084933a, "page_put_link" },
	{ 0xe2c54604, "d_instantiate" },
	{ 0xd564d7f0, "generic_block_bmap" },
	{ 0x8b0fac8b, "iget_locked" },
	{ 0xe2f63d7c, "generic_fillattr" },
	{ 0x2a142d8b, "inode_init_owner" },
	{ 0xc3795c5b, "truncate_inode_pages" },
	{ 0xdf929370, "fs_overflowgid" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FAB1CB9D9EEE020154F3310");
