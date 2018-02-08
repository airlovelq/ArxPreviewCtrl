// DialogPreview.cpp : 实现文件
//

#include "stdafx.h"
#include "DialogPreview.h"
#include "afxdialogex.h"


// CDialogPreview 对话框

IMPLEMENT_DYNAMIC(CDialogPreview, CDialogEx)

CDialogPreview::CDialogPreview(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDialogPreview::IDD, pParent)
{

}

CDialogPreview::~CDialogPreview()
{
}

void CDialogPreview::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PREVIEW, m_PreviewCtrl);
}


BEGIN_MESSAGE_MAP(CDialogPreview, CDialogEx)
END_MESSAGE_MAP()


// CDialogPreview 消息处理程序


BOOL CDialogPreview::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	
	//AcDbDatabase *pDb = new AcDbDatabase();
	
	//m_PreviewCtrl.SetDatabase(pDb);
	AcDbLine *pLine = new AcDbLine(AcGePoint3d(0,0,0),AcGePoint3d(1500,1500,0));
	pLine->setColorIndex(1);
	//m_PreviewCtrl.AppendTempEntity(pLine);
	m_PreviewCtrl.SetDwgFile(_T("f:\\十字槽盘头螺钉M3x7.dwg20171129155421.dwg"));
	m_PreviewCtrl.AppendTempEntity(pLine);
	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}
