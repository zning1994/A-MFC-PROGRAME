//Download by http://www.NewXing.com
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "stddataformatsdisp.h"

// Dispatch interfaces referenced by this interface
#include "dataformatdisp.h"


/////////////////////////////////////////////////////////////////////////////
// CStdDataFormatsDisp properties

/////////////////////////////////////////////////////////////////////////////
// CStdDataFormatsDisp operations

long CStdDataFormatsDisp::GetCount()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

CDataFormatDisp CStdDataFormatsDisp::GetItem(const VARIANT& Index)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		&Index);
	return CDataFormatDisp(pDispatch);
}

void CStdDataFormatsDisp::Add(LPDISPATCH pFormat, const VARIANT& Index)
{
	static BYTE parms[] =
		VTS_DISPATCH VTS_VARIANT;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 pFormat, &Index);
}

void CStdDataFormatsDisp::Remove(const VARIANT& Index)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 &Index);
}

void CStdDataFormatsDisp::Clear()
{
	InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
