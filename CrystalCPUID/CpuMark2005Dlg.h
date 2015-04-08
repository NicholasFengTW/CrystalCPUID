#if !defined(AFX_CPUMARK2005DLG_H__45BCA9E8_4BD2_4E16_9EC5_C9E8FF98EBA8__INCLUDED_)
#define AFX_CPUMARK2005DLG_H__45BCA9E8_4BD2_4E16_9EC5_C9E8FF98EBA8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CpuMark2005Dlg.h : �w�b�_�[ �t�@�C��
//
#include "CrystalMater.h"

/////////////////////////////////////////////////////////////////////////////
// CCpuMark2005Dlg �_�C�A���O

class CCpuMark2005Dlg : public CDialog
{
// �R���X�g���N�V����
public:
	CCpuMark2005Dlg(CWnd* pParent = NULL);   // �W���̃R���X�g���N�^
	BOOL Create();

// �_�C�A���O �f�[�^
	//{{AFX_DATA(CCpuMark2005Dlg)
	enum { IDD = IDD_CPU_MARK_2005 };
	CStatic	m_MarkCpuClock;
	CButton	m_Mark64;
	CButton	m_Mark32;
	CStatic	m_MarkCpuInfo;
	CCrystalMater	m_MarkScore64;
	CCrystalMater	m_MarkScore32;
	//}}AFX_DATA


// �I�[�o�[���C�h
	// ClassWizard �͉��z�֐��̃I�[�o�[���C�h�𐶐����܂��B
	//{{AFX_VIRTUAL(CCpuMark2005Dlg)
	public:
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �T�|�[�g
	//}}AFX_VIRTUAL

// �C���v�������e�[�V����
protected:

	// �������ꂽ���b�Z�[�W �}�b�v�֐�
	//{{AFX_MSG(CCpuMark2005Dlg)
	afx_msg void OnMark32();
	afx_msg void OnMark64();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnClose();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ �͑O�s�̒��O�ɒǉ��̐錾��}�����܂��B

#endif // !defined(AFX_CPUMARK2005DLG_H__45BCA9E8_4BD2_4E16_9EC5_C9E8FF98EBA8__INCLUDED_)
