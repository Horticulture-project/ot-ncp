/*
 * Copyright (c) 2018 Nordic Semiconductor ASA.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <init.h>
#include <hal/nrf_power.h>

static int board_e73minimal_nrf52840_init(const struct device *dev) {
	ARG_UNUSED(dev);


	return 0;
}

SYS_INIT(board_e73minimal_nrf52840_init, PRE_KERNEL_1,
	 CONFIG_KERNEL_INIT_PRIORITY_DEFAULT);
