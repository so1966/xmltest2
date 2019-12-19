
// xmltest2.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// Cxmltest2App:
// このクラスの実装については、xmltest2.cpp を参照してください
//





class Cxmltest2App : public CWinApp
{
public:
	Cxmltest2App();

	// オーバーライド
public:
	virtual BOOL InitInstance();





// 実装

	DECLARE_MESSAGE_MAP()
};

extern Cxmltest2App theApp;
