
// Toolbar1View.cpp : CToolbar1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CToolbar1View ����/����

CToolbar1View::CToolbar1View()
{
	// TODO: �ڴ˴���ӹ������

}

CToolbar1View::~CToolbar1View()
{
}

BOOL CToolbar1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CToolbar1View ����

void CToolbar1View::OnDraw(CDC* /*pDC*/)
{
	CToolbar1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CToolbar1View ��ӡ

BOOL CToolbar1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CToolbar1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CToolbar1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CToolbar1View ���

#ifdef _DEBUG
void CToolbar1View::AssertValid() const
{
	CView::AssertValid();
}

void CToolbar1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CToolbar1Doc* CToolbar1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CToolbar1Doc)));
	return (CToolbar1Doc*)m_pDocument;
}
#endif //_DEBUG


// CToolbar1View ��Ϣ�������
