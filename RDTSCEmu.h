///////////////////////////////////////////////////////////////////////////////
///
/// Copyright (c) 2009 - <company name here>
///
/// Original filename: RDTSCEmu.h
/// Project          : RDTSCEmu
/// Date of creation : <see RDTSCEmu.c>
/// Author(s)        : <see RDTSCEmu.c>
///
/// Purpose          : <see RDTSCEmu.c>
///
/// Revisions:         <see RDTSCEmu.c>
///
///////////////////////////////////////////////////////////////////////////////

// $Id$

#ifndef __RDTSCEMU_H_VERSION__
#define __RDTSCEMU_H_VERSION__ 100

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

// Values defined for "Method"
// METHOD_BUFFERED
// METHOD_IN_DIRECT
// METHOD_OUT_DIRECT
// METHOD_NEITHER
// 
// Values defined for "Access"
// FILE_ANY_ACCESS
// FILE_READ_ACCESS
// FILE_WRITE_ACCESS

enum RDTSCMode
{
	constant,
	increasing
};

// emulation parameters
BOOLEAN g_RTDSCEmuMethodIncreasing = FALSE;
ULONG g_RTDSCEmuDelta = 0;
ULONGLONG g_RTDSCEmuRdtscvalue = 0;
ULONG g_RTDSCEmuConstValue = 0;

#define IOCTL_RDTSCEMU_METHOD_ALWAYS_CONST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_IN_DIRECT, FILE_ANY_ACCESS)
#define IOCTL_RDTSCEMU_METHOD_INCREASING CTL_CODE(FILE_DEVICE_UNKNOWN, 0x804, METHOD_IN_DIRECT, FILE_ANY_ACCESS)

//////////////////////////////////////////////////////////////////////////
// Function Prototypes
//////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
BOOLEAN RDTSEMU_initializeHooks(ULONGLONG, ULONG, BOOLEAN);
VOID RDTSEMU_removeHooks();
#ifdef __cplusplus
}; // extern "C"
#endif

#endif // __RDTSCEMU_H_VERSION__
