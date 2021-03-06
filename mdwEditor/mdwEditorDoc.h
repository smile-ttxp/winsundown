
// mdwEditorDoc.h : interface of the CmdwEditorDoc class
//


#pragma once


class CmdwEditorDoc : public CDocument
{
protected: // create from serialization only
	CmdwEditorDoc();
	DECLARE_DYNCREATE(CmdwEditorDoc)

// Attributes
public:
	CString m_AppPath;
	CString	m_htmlPath;
	CString m_cssPath;
	BOOL	m_bHtmlExisted;

// Operations
public:
	void checkDefaultCSS();

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CmdwEditorDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileExport();
	afx_msg void OnViewCsschange();
	afx_msg void OnViewCssdefault();
};


