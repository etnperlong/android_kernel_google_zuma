/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2022 Google, LLC.
 *
 * Device Tree binding constants for ZUMA
 */

#ifndef _DT_BINDINGS_ZUMA_PM_QOS_H
#define _DT_BINDINGS_ZUMA_PM_QOS_H

/* EXYNOS_PM_QOS CLASSES IDS */
#define PM_QOS_CLUSTER0_FREQ_MIN		(1)
#define PM_QOS_CLUSTER0_FREQ_MAX		(2)
#define PM_QOS_CLUSTER1_FREQ_MIN		(3)
#define PM_QOS_CLUSTER1_FREQ_MAX		(4)
#define PM_QOS_CLUSTER2_FREQ_MIN		(5)
#define PM_QOS_CLUSTER2_FREQ_MAX		(6)
#define PM_QOS_DEVICE_THROUGHPUT		(7)
#define PM_QOS_INTCAM_THROUGHPUT		(8)
#define PM_QOS_DEVICE_THROUGHPUT_MAX		(9)
#define PM_QOS_INTCAM_THROUGHPUT_MAX		(10)
#define PM_QOS_BUS_THROUGHPUT			(11)
#define PM_QOS_BUS_THROUGHPUT_MAX		(12)
#define PM_QOS_DISPLAY_THROUGHPUT		(13)
#define PM_QOS_DISPLAY_THROUGHPUT_MAX		(14)
#define PM_QOS_CAM_THROUGHPUT			(15)
#define PM_QOS_CAM_THROUGHPUT_MAX		(16)
#define PM_QOS_MFC_THROUGHPUT			(17)
#define PM_QOS_MFC_THROUGHPUT_MAX		(18)
#define PM_QOS_TNR_THROUGHPUT			(19)
#define PM_QOS_TNR_THROUGHPUT_MAX		(20)
#define PM_QOS_BW_THROUGHPUT			(21)
#define PM_QOS_BW_THROUGHPUT_MAX		(22)
#define PM_QOS_DSU_THROUGHPUT			(23)
#define PM_QOS_DSU_THROUGHPUT_MAX		(24)
#define PM_QOS_BCI_THROUGHPUT			(25)
#define PM_QOS_BCI_THROUGHPUT_MAX		(26)
#define PM_QOS_GPU_THROUGHPUT_MIN		(27)
#define PM_QOS_GPU_THROUGHPUT_MAX		(28)
#define	PM_QOS_TPU_FREQ_MIN			(29)
#define	PM_QOS_TPU_FREQ_MAX			(30)
#define EXYNOS_PM_QOS_NUM_CLASSES		(31)

#endif