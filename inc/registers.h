/*
 * Copyright (c) 2020 Bitdefender
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef REGISTERS_H
#define REGISTERS_H

//
// Registers enumerations
//
enum
{
    REG_RAX, REG_RCX, REG_RDX, REG_RBX, REG_RSP, REG_RBP, REG_RSI, REG_RDI,
    REG_R8,  REG_R9,  REG_R10, REG_R11, REG_R12, REG_R13, REG_R14, REG_R15,
};

enum
{
    REG_EAX, REG_ECX, REG_EDX, REG_EBX, REG_ESP, REG_EBP, REG_ESI, REG_EDI,
    REG_R8D, REG_R9D, REG_R10D,REG_R11D,REG_R12D,REG_R13D,REG_R14D,REG_R15D,
};

enum
{
    REG_AX,  REG_CX,  REG_DX,  REG_BX,  REG_SP,  REG_BP,  REG_SI,  REG_DI,
    REG_R8W, REG_R9W, REG_R10W,REG_R11W,REG_R12W,REG_R13W,REG_R14W,REG_R15W,
};

enum
{
    REG_AL, REG_CL, REG_DL, REG_BL, REG_AH, REG_CH, REG_DH, REG_BH,
};

enum
{
    REG_AL64, REG_CL64, REG_DL64, REG_BL64, REG_SPL, REG_BPL, REG_SIL, REG_DIL,
    REG_R8L, REG_R9L, REG_R10L, REG_R11L, REG_R12L, REG_R13L, REG_R14L, REG_R15L,
};

enum
{
    REG_ES, REG_CS, REG_SS, REG_DS, REG_FS, REG_GS, REG_INV6, REG_INV7,
};

enum
{
    REG_CR0, REG_CR1, REG_CR2, REG_CR3, REG_CR4, REG_CR5, REG_CR6, REG_CR7,
    REG_CR8, REG_CR9, REG_CR10, REG_CR11, REG_CR12, REG_CR13, REG_CR14, REG_CR15,
};

enum
{
    REG_DR0, REG_DR1, REG_DR2, REG_DR3, REG_DR4, REG_DR5, REG_DR6, REG_DR7,
    REG_DR8, REG_DR9, REG_DR10, REG_DR11, REG_DR12, REG_DR13, REG_DR14, REG_DR15,
};

enum
{
    REG_TR0, REG_TR1, REG_TR2, REG_TR3, REG_TR4, REG_TR5, REG_TR6, REG_TR7,
    REG_TR8, REG_TR9, REG_TR10, REG_TR11, REG_TR12, REG_TR13, REG_TR14, REG_TR15,
};

enum
{
    REG_K0, REG_K1, REG_K2, REG_K3, REG_K4, REG_K5, REG_K6, REG_K7,
};

enum
{
    REG_BND0, REG_BND1, REG_BND2, REG_BND3,
};

enum
{
    REG_ST0, REG_ST1, REG_ST2, REG_ST3, REG_ST4, REG_ST5, REG_ST6, REG_ST7,
};

enum
{
    REG_XMM0, REG_XMM1, REG_XMM2, REG_XMM3, REG_XMM4, REG_XMM5, REG_XMM6, REG_XMM7,
    REG_XMM8, REG_XMM9, REG_XMM10, REG_XMM11, REG_XMM12, REG_XMM13, REG_XMM14, REG_XMM15,
    REG_XMM16, REG_XMM17, REG_XMM18, REG_XMM19, REG_XMM20, REG_XMM21, REG_XMM22, REG_XMM23,
    REG_XMM24, REG_XMM25, REG_XMM26, REG_XMM27, REG_XMM28, REG_XMM29, REG_XMM30, REG_XMM31,
};

enum
{
    REG_YMM0, REG_YMM1, REG_YMM2, REG_YMM3, REG_YMM4, REG_YMM5, REG_YMM6, REG_YMM7,
    REG_YMM8, REG_YMM9, REG_YMM10, REG_YMM11, REG_YMM12, REG_YMM13, REG_YMM14, REG_YMM15,
    REG_YMM16, REG_YMM17, REG_YMM18, REG_YMM19, REG_YMM20, REG_YMM21, REG_YMM22, REG_YMM23,
    REG_YMM24, REG_YMM25, REG_YMM26, REG_YMM27, REG_YMM28, REG_YMM29, REG_YMM30, REG_YMM31,
};

enum
{
    REG_ZMM0, REG_ZMM1, REG_ZMM2, REG_ZMM3, REG_ZMM4, REG_ZMM5, REG_ZMM6, REG_ZMM7,
    REG_ZMM8, REG_ZMM9, REG_ZMM10, REG_ZMM11, REG_ZMM12, REG_ZMM13, REG_ZMM14, REG_ZMM15,
    REG_ZMM16, REG_ZMM17, REG_ZMM18, REG_ZMM19, REG_ZMM20, REG_ZMM21, REG_ZMM22, REG_ZMM23,
    REG_ZMM24, REG_ZMM25, REG_ZMM26, REG_ZMM27, REG_ZMM28, REG_ZMM29, REG_ZMM30, REG_ZMM31,
};

enum
{
    REG_GDTR, REG_IDTR, REG_LDTR, REG_TR,
};

enum
{
    REG_X87_CONTROL, REG_X87_TAG, REG_X87_STATUS,
};

enum
{
    REG_XCR0, REG_XCR1, REG_XCR_ANY = 0xFF,
};

#define REG_IA32_TSC                    0x00000010
#define REG_IA32_SYSENTER_CS            0x00000174
#define REG_IA32_SYSENTER_ESP           0x00000175
#define REG_IA32_SYSENTER_EIP           0x00000176
#define REG_IA32_STAR                   0xC0000081
#define REG_IA32_LSTAR                  0xC0000082
#define REG_IA32_FMASK                  0xC0000084
#define REG_IA32_FS_BASE                0xC0000100
#define REG_IA32_GS_BASE                0xC0000101
#define REG_IA32_KERNEL_GS_BASE         0xC0000102
#define REG_IA32_TSC_AUX                0xC0000103
#define REG_MSR_ANY                     0xFFFFFFFF

#define REG_RFLAG_CF                    (1 << 0)
#define REG_RFLAG_PF                    (1 << 2)
#define REG_RFLAG_AF                    (1 << 4)
#define REG_RFLAG_ZF                    (1 << 6)
#define REG_RFLAG_SF                    (1 << 7)
#define REG_RFLAG_TF                    (1 << 8)
#define REG_RFLAG_IF                    (1 << 9)
#define REG_RFLAG_DF                    (1 << 10)
#define REG_RFLAG_OF                    (1 << 11)
#define REG_RFLAG_IOPL                  (3 << 12)
#define REG_RFLAG_NT                    (1 << 14)
#define REG_RFLAG_RF                    (1 << 16)
#define REG_RFLAG_VM                    (1 << 17)
#define REG_RFLAG_AC                    (1 << 18)
#define REG_RFLAG_VIF                   (1 << 19)
#define REG_RFLAG_VIP                   (1 << 20)
#define REG_RFLAG_ID                    (1 << 21)

#endif
