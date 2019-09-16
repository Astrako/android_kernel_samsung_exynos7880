#ifndef __EXYNOS7880_SFRBASE_H__
#define __EXYNOS7880_SFRBASE_H__

#include "../pwrcal-env.h"

#ifdef PWRCAL_TARGET_FW

#define	CMU_PERI_BASE	0x101F0000
#define	CMU_MIF0_BASE	0x10450000
#define	CMU_MIF1_BASE	0x10550000
#define	CMU_CCORE_BASE	0x10680000
#define	CMU_CPUCL1_BASE	0x10800000
#define	CMU_CPUCL0_BASE	0x10900000
#define	CMU_G3D_BASE	0x11460000
#define	CMU_MFCMSCL_BASE	0x12CB0000
#define	CMU_FSYS_BASE	0x13730000
#define	CMU_ISP_BASE	0x144D0000
#define	CMU_DISPAUD_BASE	0x148D0000

#define	PMU_ALIVE_BASE	0x106B0000
#define	PMU_CCORE_BASE	0x10690000
#define	PMU_CPUCL0_BASE	0x10920000
#define	PMU_CPUCL1_BASE	0x10820000
#define	PMU_DISPAUD_BASE	0x148E0000
#define	PMU_FSYS_BASE	0x13740000
#define	PMU_G3D_BASE	0x11470000
#define	PMU_ISP_BASE	0x144E0000
#define	PMU_MFCMSCL_BASE	0x12CC0000
#define	PMU_MIF0_BASE	0x10440000
#define	PMU_MIF1_BASE	0x10540000
#define	PMU_PERI_BASE	0x101E0000

#define	DREX0_BASE	0x10400000
#define	DREX0_SECURE_BASE	0x10410000
#define	DREX1_BASE	0x10500000
#define	DREX1_SECURE_BASE	0x10510000
#define	DDRPHY0_BASE	0x10420000
#define	DDRPHY1_BASE	0x10520000
#define VTMON0_BASE		0x10470000
#define VTMON1_BASE		0x10570000

#define SYSREG_PERI_BASE	0x101D0000
#define SYSREG_MIF0_BASE	0x10430000
#define SYSREG_MIF1_BASE	0x10530000
#define SYSREG_CCORE_BASE	0x106A0000
#define SYSREG_CPUCL1_BASE	0x10810000
#define SYSREG_CPUCL0_BASE	0x10910000
#define SYSREG_G3D_BASE	0x11450000
#define SYSREG_MFCMSCL_BASE	0x12CA0000
#define SYSREG_FSYS_BASE	0x13720000
#define SYSREG_ISP_BASE 0x144F0000
#define SYSREG_DISPAUD_BASE	0x148F0000

#endif

#ifdef PWRCAL_TARGET_LINUX

#define	CMU_PERI_BASE	0x00010000
#define	CMU_MIF0_BASE	0x00020000
#define	CMU_MIF1_BASE	0x00030000
#define	CMU_CCORE_BASE	0x00040000
#define	CMU_CPUCL1_BASE	0x00050000
#define	CMU_CPUCL0_BASE	0x00060000
#define	CMU_G3D_BASE	0x00070000
#define	CMU_MFCMSCL_BASE	0x00080000
#define	CMU_FSYS_BASE	0x00090000
#define	CMU_ISP_BASE	0x00100000
#define	CMU_DISPAUD_BASE	0x00110000

#define	PMU_ALIVE_BASE	0x00120000
#define	PMU_CCORE_BASE	0x00130000
#define	PMU_CPUCL0_BASE	0x00140000
#define	PMU_CPUCL1_BASE	0x00150000
#define	PMU_DISPAUD_BASE	0x00160000
#define	PMU_FSYS_BASE	0x00170000
#define	PMU_G3D_BASE	0x00180000
#define	PMU_ISP_BASE	0x00190000
#define	PMU_MFCMSCL_BASE	0x00200000
#define	PMU_MIF0_BASE	0x00210000
#define	PMU_MIF1_BASE	0x00220000
#define	PMU_PERI_BASE	0x00230000

#define	DREX0_BASE	0x00240000
#define	DREX0_SECURE_BASE	0x00250000
#define	DREX1_BASE	0x00260000
#define	DREX1_SECURE_BASE	0x00270000
#define	DDRPHY0_BASE	0x00280000
#define	DDRPHY1_BASE	0x00290000
#define VTMON0_BASE		0x002A0000
#define VTMON1_BASE		0x002B0000

#define SYSREG_PERI_BASE	0x002C0000
#define SYSREG_MIF0_BASE	0x002D0000
#define SYSREG_MIF1_BASE	0x002E0000
#define SYSREG_CCORE_BASE	0x002F0000
#define SYSREG_CPUCL1_BASE	0x00300000
#define SYSREG_CPUCL0_BASE	0x00310000
#define SYSREG_G3D_BASE	0x00320000
#define SYSREG_MFCMSCL_BASE	0x00330000
#define SYSREG_FSYS_BASE	0x00340000
#define SYSREG_ISP_BASE 0x00350000
#define SYSREG_DISPAUD_BASE	0x00360000

#endif

#endif