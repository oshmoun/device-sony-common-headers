/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef WCD9XXX_CODEC_DIGITAL_H
#define WCD9XXX_CODEC_DIGITAL_H
#define WCD9XXX_A_CHIP_CTL (0x00)
#define WCD9XXX_A_CHIP_CTL__POR (0x00000000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CHIP_STATUS (0x01)
#define WCD9XXX_A_CHIP_STATUS__POR (0x00000000)
#define WCD9XXX_A_CHIP_ID_BYTE_0 (0x04)
#define WCD9XXX_A_CHIP_ID_BYTE_0__POR (0x00000000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CHIP_ID_BYTE_1 (0x05)
#define WCD9XXX_A_CHIP_ID_BYTE_1__POR (0x00000000)
#define WCD9XXX_A_CHIP_ID_BYTE_2 (0x06)
#define WCD9XXX_A_CHIP_ID_BYTE_2__POR (0x00000000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CHIP_ID_BYTE_3 (0x07)
#define WCD9XXX_A_CHIP_ID_BYTE_3__POR (0x00000001)
#define WCD9XXX_A_CHIP_VERSION (0x08)
#define WCD9XXX_A_CHIP_VERSION__POR (0x00000020)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_SB_VERSION (0x09)
#define WCD9XXX_A_SB_VERSION__POR (0x00000010)
#define WCD9XXX_A_SLAVE_ID_1 (0x0C)
#define WCD9XXX_A_SLAVE_ID_1__POR (0x00000077)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_SLAVE_ID_2 (0x0D)
#define WCD9XXX_A_SLAVE_ID_2__POR (0x00000066)
#define WCD9XXX_A_SLAVE_ID_3 (0x0E)
#define WCD9XXX_A_SLAVE_ID_3__POR (0x00000055)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CTL (0x80)
#define WCD9XXX_A_CDC_CTL__POR (0x00000000)
#define WCD9XXX_A_LEAKAGE_CTL (0x88)
#define WCD9XXX_A_LEAKAGE_CTL__POR (0x00000004)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_INTR_MODE (0x90)
#define WCD9XXX_A_INTR_MASK0 (0x94)
#define WCD9XXX_A_INTR_STATUS0 (0x98)
#define WCD9XXX_A_INTR_CLEAR0 (0x9C)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_INTR_LEVEL0 (0xA0)
#define WCD9XXX_A_INTR_LEVEL1 (0xA1)
#define WCD9XXX_A_INTR_LEVEL2 (0xA2)
#define WCD9XXX_A_RX_HPH_CNP_EN (0x1AB)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_RX_HPH_CNP_EN__POR (0x80)
#define WCD9XXX_A_RX_HPH_CNP_EN (0x1AB)
#define WCD9XXX_A_RX_HPH_CNP_EN__POR (0x80)
#define WCD9XXX_A_BIAS_CENTRAL_BG_CTL (0x101)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_BIAS_CENTRAL_BG_CTL__POR (0x50)
#define WCD9XXX_A_CLK_BUFF_EN1 (0x108)
#define WCD9XXX_A_CLK_BUFF_EN1__POR (0x04)
#define WCD9XXX_A_CLK_BUFF_EN2 (0x109)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CLK_BUFF_EN2__POR (0x02)
#define WCD9XXX_A_RX_COM_BIAS (0x1A2)
#define WCD9XXX_A_RX_COM_BIAS__POR (0x00)
#define WCD9XXX_A_RC_OSC_FREQ (0x1FA)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_RC_OSC_FREQ__POR (0x46)
#define WCD9XXX_A_BIAS_OSC_BG_CTL (0x105)
#define WCD9XXX_A_BIAS_OSC_BG_CTL__POR (0x16)
#define WCD9XXX_A_RC_OSC_TEST (0x1FB)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_RC_OSC_TEST__POR (0x0A)
#define WCD9XXX_A_CDC_CLK_MCLK_CTL (0x311)
#define WCD9XXX_A_CDC_CLK_MCLK_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_EN_CTL (0x3C0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_EN_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_FIR_B1_CFG (0x3C1)
#define WCD9XXX_A_CDC_MBHC_FIR_B1_CFG__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_FIR_B2_CFG (0x3C2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_FIR_B2_CFG__POR (0x06)
#define WCD9XXX_A_CDC_MBHC_TIMER_B1_CTL (0x3C3)
#define WCD9XXX_A_CDC_MBHC_TIMER_B1_CTL__POR (0x03)
#define WCD9XXX_A_CDC_MBHC_TIMER_B2_CTL (0x3C4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_TIMER_B2_CTL__POR (0x09)
#define WCD9XXX_A_CDC_MBHC_TIMER_B3_CTL (0x3C5)
#define WCD9XXX_A_CDC_MBHC_TIMER_B3_CTL__POR (0x1E)
#define WCD9XXX_A_CDC_MBHC_TIMER_B4_CTL (0x3C6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_TIMER_B4_CTL__POR (0x45)
#define WCD9XXX_A_CDC_MBHC_TIMER_B5_CTL (0x3C7)
#define WCD9XXX_A_CDC_MBHC_TIMER_B5_CTL__POR (0x04)
#define WCD9XXX_A_CDC_MBHC_TIMER_B6_CTL (0x3C8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_TIMER_B6_CTL__POR (0x78)
#define WCD9XXX_A_CDC_MBHC_B1_STATUS (0x3C9)
#define WCD9XXX_A_CDC_MBHC_B1_STATUS__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_B2_STATUS (0x3CA)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_B2_STATUS__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_B3_STATUS (0x3CB)
#define WCD9XXX_A_CDC_MBHC_B3_STATUS__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_B4_STATUS (0x3CC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_B4_STATUS__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_B5_STATUS (0x3CD)
#define WCD9XXX_A_CDC_MBHC_B5_STATUS__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_B1_CTL (0x3CE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_B1_CTL__POR (0xC0)
#define WCD9XXX_A_CDC_MBHC_B2_CTL (0x3CF)
#define WCD9XXX_A_CDC_MBHC_B2_CTL__POR (0x5D)
#define WCD9XXX_A_CDC_MBHC_VOLT_B1_CTL (0x3D0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_VOLT_B1_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_VOLT_B2_CTL (0x3D1)
#define WCD9XXX_A_CDC_MBHC_VOLT_B2_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_VOLT_B3_CTL (0x3D2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_VOLT_B3_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_VOLT_B4_CTL (0x3D3)
#define WCD9XXX_A_CDC_MBHC_VOLT_B4_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_VOLT_B5_CTL (0x3D4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_VOLT_B5_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_VOLT_B6_CTL (0x3D5)
#define WCD9XXX_A_CDC_MBHC_VOLT_B6_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_VOLT_B7_CTL (0x3D6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_VOLT_B7_CTL__POR (0xFF)
#define WCD9XXX_A_CDC_MBHC_VOLT_B8_CTL (0x3D7)
#define WCD9XXX_A_CDC_MBHC_VOLT_B8_CTL__POR (0x07)
#define WCD9XXX_A_CDC_MBHC_VOLT_B9_CTL (0x3D8)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_VOLT_B9_CTL__POR (0xFF)
#define WCD9XXX_A_CDC_MBHC_VOLT_B10_CTL (0x3D9)
#define WCD9XXX_A_CDC_MBHC_VOLT_B10_CTL__POR (0x7F)
#define WCD9XXX_A_CDC_MBHC_VOLT_B11_CTL (0x3DA)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_VOLT_B11_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_VOLT_B12_CTL (0x3DB)
#define WCD9XXX_A_CDC_MBHC_VOLT_B12_CTL__POR (0x80)
#define WCD9XXX_A_CDC_MBHC_CLK_CTL (0x3DC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_CLK_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_INT_CTL (0x3DD)
#define WCD9XXX_A_CDC_MBHC_INT_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_DEBUG_CTL (0x3DE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_MBHC_DEBUG_CTL__POR (0x00)
#define WCD9XXX_A_CDC_MBHC_SPARE (0x3DF)
#define WCD9XXX_A_CDC_MBHC_SPARE__POR (0x00)
#define WCD9XXX_A_MBHC_SCALING_MUX_1 (0x14E)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MBHC_SCALING_MUX_1__POR (0x00)
#define WCD9XXX_A_RX_HPH_OCP_CTL (0x1AA)
#define WCD9XXX_A_RX_HPH_OCP_CTL__POR (0x68)
#define WCD9XXX_A_MICB_1_CTL (0x12B)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_1_CTL__POR (0x16)
#define WCD9XXX_A_MICB_1_INT_RBIAS (0x12C)
#define WCD9XXX_A_MICB_1_INT_RBIAS__POR (0x24)
#define WCD9XXX_A_MICB_1_MBHC (0x12D)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_1_MBHC__POR (0x01)
#define WCD9XXX_A_MICB_CFILT_2_CTL (0x12E)
#define WCD9XXX_A_MICB_CFILT_2_CTL__POR (0x40)
#define WCD9XXX_A_MICB_CFILT_2_VAL (0x12F)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_CFILT_2_VAL__POR (0x80)
#define WCD9XXX_A_MICB_CFILT_2_PRECHRG (0x130)
#define WCD9XXX_A_MICB_CFILT_2_PRECHRG__POR (0x38)
#define WCD9XXX_A_MICB_2_CTL (0x131)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_2_CTL__POR (0x16)
#define WCD9XXX_A_MICB_2_INT_RBIAS (0x132)
#define WCD9XXX_A_MICB_2_INT_RBIAS__POR (0x24)
#define WCD9XXX_A_MICB_2_MBHC (0x133)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_2_MBHC__POR (0x02)
#define WCD9XXX_A_MICB_CFILT_3_CTL (0x134)
#define WCD9XXX_A_MICB_CFILT_3_CTL__POR (0x40)
#define WCD9XXX_A_MICB_CFILT_3_VAL (0x135)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_CFILT_3_VAL__POR (0x80)
#define WCD9XXX_A_MICB_CFILT_3_PRECHRG (0x136)
#define WCD9XXX_A_MICB_CFILT_3_PRECHRG__POR (0x38)
#define WCD9XXX_A_MICB_3_CTL (0x137)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_3_CTL__POR (0x16)
#define WCD9XXX_A_MICB_3_INT_RBIAS (0x138)
#define WCD9XXX_A_MICB_3_INT_RBIAS__POR (0x24)
#define WCD9XXX_A_MICB_3_MBHC (0x139)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_3_MBHC__POR (0x00)
#define WCD9XXX_A_MICB_4_CTL (0x13D)
#define WCD9XXX_A_MICB_4_CTL__POR (0x16)
#define WCD9XXX_A_MICB_4_INT_RBIAS (0x13E)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_4_INT_RBIAS__POR (0x24)
#define WCD9XXX_A_MICB_4_MBHC (0x13F)
#define WCD9XXX_A_MICB_4_MBHC__POR (0x01)
#define WCD9XXX_A_MICB_CFILT_1_VAL (0x129)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_CFILT_1_VAL__POR (0x80)
#define WCD9XXX_A_RX_HPH_L_STATUS (0x1B3)
#define WCD9XXX_A_RX_HPH_L_STATUS__POR (0x00)
#define WCD9XXX_A_MBHC_HPH (0x1FE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MBHC_HPH__POR (0x44)
#define WCD9XXX_A_RX_HPH_CNP_WG_TIME (0x1AD)
#define WCD9XXX_A_RX_HPH_CNP_WG_TIME__POR (0x2A)
#define WCD9XXX_A_RX_HPH_R_DAC_CTL (0x1B7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_RX_HPH_R_DAC_CTL__POR (0x00)
#define WCD9XXX_A_RX_HPH_L_DAC_CTL (0x1B1)
#define WCD9XXX_A_RX_HPH_L_DAC_CTL__POR (0x00)
#define WCD9XXX_A_TX_7_MBHC_EN (0x171)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_TX_7_MBHC_EN__POR (0x0C)
#define WCD9XXX_A_PIN_CTL_OE0 (0x010)
#define WCD9XXX_A_PIN_CTL_OE0__POR (0x00)
#define WCD9XXX_A_PIN_CTL_OE1 (0x011)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_PIN_CTL_OE1__POR (0x00)
#define WCD9XXX_A_MICB_CFILT_1_CTL (0x128)
#define WCD9XXX_A_LDO_H_MODE_1 (0x110)
#define WCD9XXX_A_LDO_H_MODE_1__POR (0x65)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MICB_CFILT_1_CTL__POR (0x40)
#define WCD9XXX_A_TX_7_MBHC_TEST_CTL (0x174)
#define WCD9XXX_A_TX_7_MBHC_TEST_CTL__POR (0x38)
#define WCD9XXX_A_MBHC_SCALING_MUX_2 (0x14F)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MBHC_SCALING_MUX_2__POR (0x80)
#define WCD9XXX_A_TX_COM_BIAS (0x14C)
#define WCD9XXX_A_TX_COM_BIAS__POR (0xF0)
#define WCD9XXX_A_MBHC_INSERT_DETECT (0x14A)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MBHC_INSERT_DETECT__POR (0x00)
#define WCD9XXX_A_MBHC_INSERT_DET_STATUS (0x14B)
#define WCD9XXX_A_MBHC_INSERT_DET_STATUS__POR (0x00)
#define WCD9XXX_A_MAD_ANA_CTRL (0x150)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_MAD_ANA_CTRL__POR (0xF1)
#define WCD9XXX_A_CDC_CLK_OTHR_CTL (0x30C)
#define WCD9XXX_A_CDC_CLK_OTHR_CTL__POR (0x00)
#define WCD9XXX_A_BUCK_MODE_1 (0x181)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_BUCK_MODE_1__POR (0x21)
#define WCD9XXX_A_BUCK_MODE_2 (0x182)
#define WCD9XXX_A_BUCK_MODE_2__POR (0xFF)
#define WCD9XXX_A_BUCK_MODE_3 (0x183)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_BUCK_MODE_3__POR (0xCC)
#define WCD9XXX_A_BUCK_MODE_4 (0x184)
#define WCD9XXX_A_BUCK_MODE_4__POR (0x3A)
#define WCD9XXX_A_BUCK_MODE_5 (0x185)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_BUCK_MODE_5__POR (0x00)
#define WCD9XXX_A_BUCK_CTRL_VCL_1 (0x186)
#define WCD9XXX_A_BUCK_CTRL_VCL_1__POR (0x48)
#define WCD9XXX_A_BUCK_CTRL_VCL_2 (0x187)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_BUCK_CTRL_VCL_2__POR (0xA3)
#define WCD9XXX_A_BUCK_CTRL_VCL_3 (0x188)
#define WCD9XXX_A_BUCK_CTRL_VCL_3__POR (0x82)
#define WCD9XXX_A_BUCK_CTRL_CCL_1 (0x189)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_BUCK_CTRL_CCL_1__POR (0xAB)
#define WCD9XXX_A_BUCK_CTRL_CCL_2 (0x18A)
#define WCD9XXX_A_BUCK_CTRL_CCL_2__POR (0xDC)
#define WCD9XXX_A_BUCK_CTRL_CCL_3 (0x18B)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_BUCK_CTRL_CCL_3__POR (0x6A)
#define WCD9XXX_A_BUCK_CTRL_CCL_4 (0x18C)
#define WCD9XXX_A_BUCK_CTRL_CCL_4__POR (0x58)
#define WCD9XXX_A_BUCK_CTRL_PWM_DRVR_1 (0x18D)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_BUCK_CTRL_PWM_DRVR_1__POR (0x50)
#define WCD9XXX_A_BUCK_CTRL_PWM_DRVR_2 (0x18E)
#define WCD9XXX_A_BUCK_CTRL_PWM_DRVR_2__POR (0x64)
#define WCD9XXX_A_BUCK_CTRL_PWM_DRVR_3 (0x18F)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_BUCK_CTRL_PWM_DRVR_3__POR (0x77)
#define WCD9XXX_A_BUCK_TMUX_A_D (0x190)
#define WCD9XXX_A_BUCK_TMUX_A_D__POR (0x00)
#define WCD9XXX_A_NCP_EN (0x192)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_NCP_EN__POR (0xFE)
#define WCD9XXX_A_NCP_STATIC (0x194)
#define WCD9XXX_A_NCP_STATIC__POR (0x28)
#define WCD9XXX_A_NCP_BUCKREF (0x191)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_NCP_BUCKREF__POR (0x00)
#define WCD9XXX_A_CDC_CLSH_B1_CTL (0x320)
#define WCD9XXX_A_CDC_CLSH_B1_CTL__POR (0xE4)
#define WCD9XXX_A_CDC_CLSH_B2_CTL (0x321)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CLSH_B2_CTL__POR (0x00)
#define WCD9XXX_A_CDC_CLSH_B3_CTL (0x322)
#define WCD9XXX_A_CDC_CLSH_B3_CTL__POR (0x00)
#define WCD9XXX_A_CDC_CLSH_BUCK_NCP_VARS (0x323)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CLSH_BUCK_NCP_VARS__POR (0x00)
#define WCD9XXX_A_CDC_CLSH_IDLE_HPH_THSD (0x324)
#define WCD9XXX_A_CDC_CLSH_IDLE_HPH_THSD__POR (0x12)
#define WCD9XXX_A_CDC_CLSH_IDLE_EAR_THSD (0x325)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CLSH_IDLE_EAR_THSD__POR (0x0C)
#define WCD9XXX_A_CDC_CLSH_FCLKONLY_HPH_THSD (0x326)
#define WCD9XXX_A_CDC_CLSH_FCLKONLY_HPH_THSD__POR (0x18)
#define WCD9XXX_A_CDC_CLSH_FCLKONLY_EAR_THSD (0x327)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CLSH_FCLKONLY_EAR_THSD__POR (0x23)
#define WCD9XXX_A_CDC_CLSH_K_ADDR (0x328)
#define WCD9XXX_A_CDC_CLSH_K_ADDR__POR (0x00)
#define WCD9XXX_A_CDC_CLSH_K_DATA (0x329)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CLSH_K_DATA__POR (0xA4)
#define WCD9XXX_A_CDC_CLSH_I_PA_FACT_HPH_L (0x32A)
#define WCD9XXX_A_CDC_CLSH_I_PA_FACT_HPH_L__POR (0xD7)
#define WCD9XXX_A_CDC_CLSH_I_PA_FACT_HPH_U (0x32B)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CLSH_I_PA_FACT_HPH_U__POR (0x05)
#define WCD9XXX_A_CDC_CLSH_I_PA_FACT_EAR_L (0x32C)
#define WCD9XXX_A_CDC_CLSH_I_PA_FACT_EAR_L__POR (0x60)
#define WCD9XXX_A_CDC_CLSH_I_PA_FACT_EAR_U (0x32D)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CLSH_I_PA_FACT_EAR_U__POR (0x09)
#define WCD9XXX_A_CDC_CLSH_V_PA_HD_EAR (0x32E)
#define WCD9XXX_A_CDC_CLSH_V_PA_HD_EAR__POR (0x00)
#define WCD9XXX_A_CDC_CLSH_V_PA_HD_HPH (0x32F)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CLSH_V_PA_HD_HPH__POR (0x00)
#define WCD9XXX_A_CDC_CLSH_V_PA_MIN_EAR (0x330)
#define WCD9XXX_A_CDC_CLSH_V_PA_MIN_EAR__POR (0x00)
#define WCD9XXX_A_CDC_CLSH_V_PA_MIN_HPH (0x331)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_CLSH_V_PA_MIN_HPH__POR (0x00)
#define WCD9XXX_A_CDC_RX1_B6_CTL (0x2B5)
#define WCD9XXX_A_CDC_RX1_B6_CTL__POR (0x80)
#define WCD9XXX_A_CDC_RX2_B6_CTL (0x2BD)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_RX2_B6_CTL__POR (0x80)
#define WCD9XXX_A_RX_HPH_L_GAIN (0x1AE)
#define WCD9XXX_A_RX_HPH_L_GAIN__POR (0x00)
#define WCD9XXX_A_RX_HPH_R_GAIN (0x1B4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_RX_HPH_R_GAIN__POR (0x00)
#define WCD9XXX_A_RX_HPH_CHOP_CTL (0x1A5)
#define WCD9XXX_A_RX_HPH_CHOP_CTL__POR (0xB4)
#define WCD9XXX_A_RX_HPH_BIAS_PA (0x1A6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_RX_HPH_BIAS_PA__POR (0x7A)
#define WCD9XXX_A_RX_HPH_L_TEST (0x1AF)
#define WCD9XXX_A_RX_HPH_L_TEST__POR (0x00)
#define WCD9XXX_A_RX_HPH_R_TEST (0x1B5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_RX_HPH_R_TEST__POR (0x00)
#define WCD9XXX_A_CDC_CLK_RX_B1_CTL (0x30F)
#define WCD9XXX_A_CDC_CLK_RX_B1_CTL__POR (0x00)
#define WCD9XXX_A_NCP_CLK (0x193)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_NCP_CLK__POR (0x94)
#define WCD9XXX_A_RX_HPH_BIAS_WG_OCP (0x1A9)
#define WCD9XXX_A_RX_HPH_BIAS_WG_OCP__POR (0x2A)
#define WCD9XXX_A_RX_HPH_CNP_WG_CTL (0x1AC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_RX_HPH_CNP_WG_CTL__POR (0xDE)
#define WCD9XXX_A_RX_HPH_L_PA_CTL (0x1B0)
#define WCD9XXX_A_RX_HPH_L_PA_CTL__POR (0x42)
#define WCD9XXX_A_RX_HPH_R_PA_CTL (0x1B6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_RX_HPH_R_PA_CTL__POR (0x42)
#define WCD9XXX_A_CDC_CONN_RX2_B1_CTL (0x383)
#define WCD9XXX_A_CDC_CONN_RX2_B1_CTL__POR (0x00)
#define WCD9XXX_A_CDC_PA_RAMP_B1_CTL (0x361)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_PA_RAMP_B1_CTL__POR (0x00)
#define WCD9XXX_A_CDC_PA_RAMP_B2_CTL (0x362)
#define WCD9XXX_A_CDC_PA_RAMP_B2_CTL__POR (0x00)
#define WCD9XXX_A_CDC_PA_RAMP_B3_CTL (0x363)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_PA_RAMP_B3_CTL__POR (0x00)
#define WCD9XXX_A_CDC_PA_RAMP_B4_CTL (0x364)
#define WCD9XXX_A_CDC_PA_RAMP_B4_CTL__POR (0x00)
#define WCD9330_A_LEAKAGE_CTL (0x03C)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9330_A_LEAKAGE_CTL__POR (0x04)
#define WCD9330_A_CDC_CTL (0x034)
#define WCD9330_A_CDC_CTL__POR (0x00)
#define WCD9XXX_A_CDC_RX0_RX_PATH_CFG0 (0xB42)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_CDC_RX1_RX_PATH_CFG0 (0xB56)
#define WCD9XXX_A_CDC_RX2_RX_PATH_CFG0 (0xB6A)
#define WCD9XXX_A_CDC_CLSH_K1_MSB (0xC08)
#define WCD9XXX_A_CDC_CLSH_K1_LSB (0xC09)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_A_ANA_RX_SUPPLIES (0x608)
#define WCD9XXX_A_ANA_HPH (0x609)
#define WCD9XXX_A_CDC_CLSH_CRC (0xC01)
#define WCD9XXX_FLYBACK_EN (0x6A4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_FLYBACK_VNEG_CTRL_1 (0x6A5)
#define WCD9XXX_FLYBACK_VNEGDAC_CTRL_2 (0x6AF)
#define WCD9XXX_RX_BIAS_FLYB_BUFF (0x6C7)
#define WCD9XXX_HPH_L_EN (0x6D3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_HPH_R_EN (0x6D6)
#define WCD9XXX_HPH_REFBUFF_UHQA_CTL (0x6DD)
#define WCD9XXX_CLASSH_CTRL_VCL_2 (0x69B)
#define WCD9XXX_CDC_CLSH_HPH_V_PA (0xC04)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_CDC_RX0_RX_PATH_SEC0 (0xB49)
#define WCD9XXX_CDC_RX1_RX_PATH_CTL (0xB55)
#define WCD9XXX_CDC_RX2_RX_PATH_CTL (0xB69)
#define WCD9XXX_CDC_CLK_RST_CTRL_MCLK_CONTROL (0xD41)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_CLASSH_CTRL_CCL_1 (0x69C)
#define WCD9XXX_CDC_RX1_RX_VOL_CTL (0xB59)
#define WCD9XXX_CDC_RX1_RX_VOL_MIX_CTL (0xB5C)
#define WCD9XXX_CDC_RX1_RX_PATH_SEC1 (0xB5E)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_CDC_RX2_RX_VOL_CTL (0xB6D)
#define WCD9XXX_CDC_RX2_RX_VOL_MIX_CTL (0xB70)
#define WCD9XXX_CDC_RX2_RX_PATH_SEC1 (0xB72)
#define WCD9XXX_HPH_CNP_WG_CTL (0x06cc)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WCD9XXX_FLYBACK_VNEG_CTRL_4 (0x06a8)
#define WCD9XXX_HPH_NEW_INT_PA_MISC2 (0x0738)
#define WCD9XXX_RX_BIAS_HPH_LOWPOWER (0x06bf)
#define WCD9XXX_HPH_PA_CTL1 (0x06d1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
