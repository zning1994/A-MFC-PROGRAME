//Download by http://www.NewXing.com
#if !defined(AFX_RDOPARAMETER_H__9E5D12D2_7104_4D27_90CB_29C350BE782D__INCLUDED_)
#define AFX_RDOPARAMETER_H__9E5D12D2_7104_4D27_90CB_29C350BE782D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CrdoParameter wrapper class

class CrdoParameter : public COleDispatchDriver
{
public:
	CrdoParameter() {}		// Calls COleDispatchDriver default constructor
	CrdoParameter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CrdoParameter(const CrdoParameter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetType();
	void SetType(long nNewValue);
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	long GetDirection();
	void SetDirection(long nNewValue);
	void AppendChunk(const VARIANT& Chunk);
	long GetSize();
	void SetSize(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RDOPARAMETER_H__9E5D12D2_7104_4D27_90CB_29C350BE782D__INCLUDED_)
