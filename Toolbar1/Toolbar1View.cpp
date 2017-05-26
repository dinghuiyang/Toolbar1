
// Toolbar1View.cpp : CToolbar1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Toolbar1.h"
#endif

#include "Toolbar1Doc.h"
#include "Toolbar1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CToolbar1View

IMPLEMENT_DYNCREATE(CToolbar1View, CView)

BEGIN_MESSAGE_MAP(CToolbar1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CToolbar1View 构造/析构

CToolbar1View::CToolbar1View()
{
	// TODO: 在此处添加构造代码

}

CToolbar1View::~CToolbar1View()
{
}

BOOL CToolbar1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CToolbar1View 绘制

void CToolbar1View::OnDraw(CDC* /*pDC*/)
{
	CToolbar1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CToolbar1View 打印

BOOL CToolbar1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CToolbar1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CToolbar1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CToolbar1View 诊断

#ifdef _DEBUG
void CToolbar1View::AssertValid() const
{
	CView::AssertValid();
}

void CToolbar1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CToolbar1Doc* CToolbar1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CToolbar1Doc)));
	return (CToolbar1Doc*)m_pDocument;
}
#endif //_DEBUG


// CToolbar1View 消息处理程序
