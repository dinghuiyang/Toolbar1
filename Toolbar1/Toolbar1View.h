
// Toolbar1View.h : CToolbar1View 类的接口
//

#pragma once


class CToolbar1View : public CView
{
protected: // 仅从序列化创建
	CToolbar1View();
	DECLARE_DYNCREATE(CToolbar1View)

// 特性
public:
	CToolbar1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CToolbar1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Toolbar1View.cpp 中的调试版本
inline CToolbar1Doc* CToolbar1View::GetDocument() const
   { return reinterpret_cast<CToolbar1Doc*>(m_pDocument); }
#endif

