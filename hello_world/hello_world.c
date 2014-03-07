/*  hello-1.c - The simplest kernel module.
 *
 *  Copyright (C) 2001 by Peter Jay Salzman
 *
 *  08/02/2006 - Updated by Rodrigo Rubira Branco <rodrigo@kernelhacking.com>
 */

/* Kernel Programming */
#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/module.h>  /* Needed by all modules */
#include <linux/kernel.h>  /* Needed for KERN_ALERT */


int init_module(void)
{
   printk("<1>Hello world 1.\n");
   printk("<1> _   _      _ _                            _     _   _ \n");
   printk("<1>| | | | ___| | | ___   __      _____  _ __| | __| | | |\n");
   printk("<1>| |_| |/ _ \\ | |/ _ \\  \\ \\ /\\ / / _ \\| '__| |/ _` | | |\n");
   printk("<1>|  _  |  __/ | | (_) |  \\ V  V / (_) | |  | | (_| | |_|\n");
   printk("<1>|_| |_|\\___|_|_|\\___/    \\_/\\_/ \\___/|_|  |_|\\__,_| (_)\n");
   printk("<1>                                                       \n");
	
   // A non 0 return means init_module failed; module can't be loaded.
   return 0;
}


void cleanup_module(void)
{
  printk(KERN_ALERT "Goodbye world 1.\n");
  printk(KERN_ALERT "  ____                 _ _                                     _     _   _ \n");
  printk(KERN_ALERT " / ___| ___   ___   __| | |__  _   _  ___  __      _____  _ __| | __| | | |\n");
  printk(KERN_ALERT "| |  _ / _ \\ / _ \\ / _` | '_ \\| | | |/ _ \\ \\ \\ /\\ / / _ \\| '__| |/ _` | | |\n");
  printk(KERN_ALERT "| |_| | (_) | (_) | (_| | |_) | |_| |  __/  \\ V  V / (_) | |  | | (_| | |_|\n");
  printk(KERN_ALERT " \\____|\\___/ \\___/ \\__,_|_.__/ \\__, |\\___|   \\_/\\_/ \\___/|_|  |_|\\__,_| (_)\n");
  printk(KERN_ALERT "                               |___/                                       \n");

}  

MODULE_LICENSE("GPL");

