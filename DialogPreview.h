#pragma once
#include "Resource.h"
#include "afxwin.h"
#include "GsPreviewCtrl.h"
// CDialogPreview 对话框

class CDialogPreview : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogPreview)

public:
	CDialogPreview(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialogPreview();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CGsPreviewCtrl m_PreviewCtrl;
	virtual BOOL OnInitDialog();
};
