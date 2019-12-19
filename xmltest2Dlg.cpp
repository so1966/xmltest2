
// xmltest2Dlg.cpp : 実装ファイル
//

#include "pch.h"
#include "framework.h"
#include "xmltest2.h"
#include "xmltest2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cxmltest2Dlg ダイアログ



Cxmltest2Dlg::Cxmltest2Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_XMLTEST2_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cxmltest2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(Cxmltest2Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &Cxmltest2Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &Cxmltest2Dlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// Cxmltest2Dlg メッセージ ハンドラー

BOOL Cxmltest2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// このダイアログのアイコンを設定します。アプリケーションのメイン ウィンドウがダイアログでない場合、
	//  Framework は、この設定を自動的に行います。
	SetIcon(m_hIcon, TRUE);			// 大きいアイコンの設定
	SetIcon(m_hIcon, FALSE);		// 小さいアイコンの設定

	//ShowWindow(SW_MAXIMIZE);

	//ShowWindow(SW_MINIMIZE);

	// TODO: 初期化をここに追加します。

	return TRUE;  // フォーカスをコントロールに設定した場合を除き、TRUE を返します。
}

// ダイアログに最小化ボタンを追加する場合、アイコンを描画するための
//  下のコードが必要です。ドキュメント/ビュー モデルを使う MFC アプリケーションの場合、
//  これは、Framework によって自動的に設定されます。

void Cxmltest2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 描画のデバイス コンテキスト

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// クライアントの四角形領域内の中央
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// アイコンの描画
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ユーザーが最小化したウィンドウをドラッグしているときに表示するカーソルを取得するために、
//  システムがこの関数を呼び出します。
HCURSOR Cxmltest2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Cxmltest2Dlg::OnBnClickedButton1()
{
	// TODO: ここにコントロール通知ハンドラー コードを追加します。
	CString strMsg;

	CFileDialog dlg(TRUE, 
					_T("*.xml"),
					_T(""),
					OFN_HIDEREADONLY,
					_T("XMLファイル（*.xml)|*.xml|全て(*.*)|*.*||"),
					this
					);

	

	if (dlg.DoModal() == IDOK) {
		
		strMsg.Format(_T("ファイル名：%s\nパス：%s"), dlg.GetFileName(),dlg.GetFolderPath()
			/*.m_szFileTitle, dlg.m_szFileName*/);

		fileName.Format(_T("%s\\%s"), dlg.GetFolderPath(), dlg.GetFileName());
		

		MessageBox(strMsg);
	}


}


void Cxmltest2Dlg::OnBnClickedButton2()
{
	// TODO: ここにコントロール通知ハンドラー コードを追加します。
	
	//File	
	
	if (file.Open(fileName, CFile::modeRead)) {
		
		setComposition();

		file.Close();
	}
	else {


		MessageBox(_T("File Open Error"));
	}


	//

	   	  
}

void Cxmltest2Dlg::setComposition()
{

	int				i = 0;
	sctComposit		tmpC;			//読み込み用
	sctTriangl		tmpT;			//読み込み用


	//初期化
	sct_composit.RemoveAll();
	sct_triangl.RemoveAll();


	//ファイルポインタを先頭にセット
	file.SeekToBegin();

	//一行読み込んではTINの構成ポイントの座標データがある位置まで移動
	for (;;) {




		//もしもEOFがきたらループから抜ける


	}

	



	//もしも見つかったら構成要素を読み込んでアレーにセット



	//先頭にファイルポインタを再セットし三角データの構成の文字列を検索



	//もしも見つかったら要素をアレーに読み込む








}



//構成要素1から三角データを検索し、三角データの構成要素を検索することで構成点が面の中心にあるかどうかが判断できる
//戻ってこない場合、境界点として判断できる。
//ただし、三角データが１つの場合、２つの場合は全部境界点とする。








