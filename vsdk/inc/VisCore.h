// VisCore.h
//
// Copyright ?1998 - 2000 Microsoft Corporation, All Rights Reserved


#ifndef __VIS_INC_CORE_H__
#define __VIS_INC_CORE_H__

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


#include "VisWin.h"

#include "VisStlWrappers.h"
#include "VisArray.h"

#include "..\VisCore\VisCoreProj.h"


// UNDONE:  Remove the "b" suffix when we release the SDK.
#ifdef _DEBUG
#pragma comment(lib, VIS_CORE_DEBUG_BASE_NAME)
#else // _DEBUG
#pragma comment(lib, VIS_CORE_BASE_NAME)
#endif // _DEBUG


#endif // __VIS_INC_CORE_H__
