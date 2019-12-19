
// xmltest2Dlg.h : ヘッダー ファイル
//

#pragma once




//構成点
typedef struct SCT_COMPOSIT {

	int	i_index_composit;

	long x;
	long y;
	long h;

	bool	b_boundary;		//境界点の要素

}sctComposit;

//三角点
typedef struct SCT_TRIANGL {

	int	i_index_triangl;

	int i_composit_index_1;
	int i_composit_index_2;
	int i_composit_index_3;

}sctTriangl;




// Cxmltest2Dlg ダイアログ
class Cxmltest2Dlg : public CDialogEx
{
// コンストラクション
public:
	Cxmltest2Dlg(CWnd* pParent = nullptr);	// 標準コンストラクター

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_XMLTEST2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート



	//ファイル読み込み標準クラス
	CStdioFile	file;
	CString		fileName;
	
	CArray <sctComposit> sct_composit;				//構成点の座標値のalley
	CArray <sctTriangl> sct_triangl;				//三角データの構成要素のalley
	
	void setComposition();//ファイルからデータの読み込み








// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
