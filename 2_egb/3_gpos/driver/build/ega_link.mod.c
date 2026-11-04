#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x28440d22, "__serdev_device_driver_register" },
	{ 0x24021414, "device_destroy" },
	{ 0xf57a62f1, "class_destroy" },
	{ 0xf6d47c40, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc8955d3e, "serdev_device_close" },
	{ 0x39aa039d, "_dev_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x01000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xe2964344, "__wake_up" },
	{ 0x55e2b456, "_dev_warn" },
	{ 0xf7e659ea, "driver_unregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x043be8da, "serdev_device_write" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe0cbbba6, "serdev_device_open" },
	{ 0x3e4968a6, "_dev_err" },
	{ 0x6ee25b1b, "of_property_read_variable_u32_array" },
	{ 0x57f96c3b, "serdev_device_set_baudrate" },
	{ 0xa6ce78e9, "serdev_device_set_flow_control" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x83d9de5c, "cdev_init" },
	{ 0xb2730d06, "cdev_add" },
	{ 0x6c66ac6d, "class_create" },
	{ 0x434998eb, "device_create" },
	{ 0x150028cc, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ctd3,ega-link");
MODULE_ALIAS("of:N*T*Ctd3,ega-linkC*");

MODULE_INFO(srcversion, "11D3E95BA5D95D75121CFAA");
