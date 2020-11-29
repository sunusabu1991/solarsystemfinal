
// solarsystemlastView.cpp : implementation of the CsolarsystemlastView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "solarsystemlast.h"
#endif

#include "solarsystemlastDoc.h"
#include "solarsystemlastView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CsolarsystemlastView

IMPLEMENT_DYNCREATE(CsolarsystemlastView, CView)

BEGIN_MESSAGE_MAP(CsolarsystemlastView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CsolarsystemlastView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CsolarsystemlastView construction/destruction

CsolarsystemlastView::CsolarsystemlastView() noexcept
{
	// TODO: add construction code here

}

CsolarsystemlastView::~CsolarsystemlastView()
{
}

BOOL CsolarsystemlastView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CsolarsystemlastView drawing

void CsolarsystemlastView::OnDraw(CDC* pDC)
{
	CsolarsystemlastDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CPen pen1(PS_SOLID, 1, RGB(255, 0, 0));
	CPen* pOldpen1 = pDC->SelectObject(&pen1);
	pDC->Ellipse(50, 50, 500, 300);
	CBrush brush1(RGB(0, 0, 255));
	CBrush* pBrush1 = pDC->SelectObject(&brush1);
	pDC->Ellipse(80, 80, 110, 110);
	pDC->SelectObject(pBrush1);
	CPen pen(PS_SOLID, 1, RGB(0,192,0));
	CPen* pOldpen= pDC->SelectObject(&pen);
	pDC->Ellipse(100, 100, 400, 250);
	CBrush brush(RGB(165,42,42));
	CBrush* pBrush = pDC->SelectObject(&brush);
	pDC->Ellipse(115, 115, 145, 145);
	pDC->SelectObject(pBrush);
	CBrush brush2(RGB(0, 0, 0));
	CBrush* pBrush2 = pDC->SelectObject(&brush2);
	pDC->Ellipse(190, 190, 225, 225);
	pDC->SelectObject(pBrush2);


	// TODO: add draw code for native data here
}


// CsolarsystemlastView printing


void CsolarsystemlastView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CsolarsystemlastView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CsolarsystemlastView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CsolarsystemlastView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CsolarsystemlastView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CsolarsystemlastView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CsolarsystemlastView diagnostics

#ifdef _DEBUG
void CsolarsystemlastView::AssertValid() const
{
	CView::AssertValid();
}

void CsolarsystemlastView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CsolarsystemlastDoc* CsolarsystemlastView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CsolarsystemlastDoc)));
	return (CsolarsystemlastDoc*)m_pDocument;
}
#endif //_DEBUG


// CsolarsystemlastView message handlers
