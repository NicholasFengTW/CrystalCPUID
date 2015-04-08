#if !defined(AFX_CRYSTALMATER_H__D3F527CE_654F_4DCA_B0D5_259A26E6DA1C__INCLUDED_)
#define AFX_CRYSTALMATER_H__D3F527CE_654F_4DCA_B0D5_259A26E6DA1C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CrystalMater.h : �w�b�_�[ �t�@�C��
//

/////////////////////////////////////////////////////////////////////////////
// CCrystalMater �E�B���h�E

class CCrystalMater : public CStatic
{
// �R���X�g���N�V����
public:
	CCrystalMater();
	void SetString(CString);
	void SetWidth(int);
	void SetMaxWidth(int);
	void SetFontSize(int);
	void SetFontColor(COLORREF color1,COLORREF color2,COLORREF color3,COLORREF color4);
	void SetMaterColor(COLORREF);
// �A�g���r���[�g
public:

// �I�y���[�V����
public:

// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CCrystalMater)
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
public:
	virtual ~CCrystalMater();

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
protected:
	//{{AFX_MSG(CCrystalMater)
	afx_msg void OnPaint();
	//}}AFX_MSG

	CFont m_Font;
	CString m_Cstr;
	COLORREF m_MColor[4];
	COLORREF m_SColor[4];
	COLORREF m_MaterColor;
	int m_x;
	int m_y;
	int m_Width;
	int m_MaxWidth;
	int m_FontSize;

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_CRYSTALMATER_H__D3F527CE_654F_4DCA_B0D5_259A26E6DA1C__INCLUDED_)
