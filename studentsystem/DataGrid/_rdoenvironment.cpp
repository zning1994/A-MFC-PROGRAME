//Download by http://www.NewXing.com
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "_rdoenvironment.h"

// Dispatch interfaces referenced by this interface
#include "rdoConnections.h"
#include "_rdoconnection.h"
#include "_rdoEngine.h"


/////////////////////////////////////////////////////////////////////////////
// C_rdoEnvironment properties

/////////////////////////////////////////////////////////////////////////////
// C_rdoEnvironment operations

CrdoConnections C_rdoEnvironment::GetRdoConnections()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CrdoConnections(pDispatch);
}

CString C_rdoEnvironment::GetName()
{
	CString result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

CString C_rdoEnvironment::GetUserName_()
{
	CString result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void C_rdoEnvironment::SetUserName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

void C_rdoEnvironment::SetPassword(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

long C_rdoEnvironment::GetLoginTimeout()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_rdoEnvironment::SetLoginTimeout(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long C_rdoEnvironment::GetCursorDriver()
{
	long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_rdoEnvironment::SetCursorDriver(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long C_rdoEnvironment::GetHEnv()
{
	long result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void C_rdoEnvironment::BeginTrans()
{
	InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void C_rdoEnvironment::Close()
{
	InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void C_rdoEnvironment::CommitTrans()
{
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void C_rdoEnvironment::RollbackTrans()
{
	InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

C_rdoConnection C_rdoEnvironment::OpenConnection(LPCTSTR dsName, const VARIANT& Prompt, const VARIANT& Readonly, const VARIANT& Connect, const VARIANT& Options)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR VTS_VARIANT VTS_VARIANT VTS_VARIANT VTS_VARIANT;
	InvokeHelper(0x9, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		dsName, &Prompt, &Readonly, &Connect, &Options);
	return C_rdoConnection(pDispatch);
}
