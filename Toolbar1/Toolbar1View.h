
// Toolbar1View.h : CToolbar1View ��Ľӿ�
//

#pragma once


class CToolbar1View : public CView
{
protected: // �������л�����
	CToolbar1View();
	DECLARE_DYNCREATE(CToolbar1View)

// ����
public:
	CToolbar1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CToolbar1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Toolbar1View.cpp �еĵ��԰汾
inline CToolbar1Doc* CToolbar1View::GetDocument() const
   { return reinterpret_cast<CToolbar1Doc*>(m_pDocument); }
#endif

