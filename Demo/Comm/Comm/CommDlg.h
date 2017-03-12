
// CommDlg.h : ͷ�ļ�
//

#pragma once
#include "SerialPort.h"
#include "afxwin.h"
#include <tchar.h>

#define WM_TEST 1000

extern CSerialPort m_SerialPort;

// CCommDlg �Ի���
class CCommDlg : public CDialogEx
{
// ����
public:
	CCommDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_COMM_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg LRESULT OnReceiveStr(WPARAM str, LPARAM commInfo);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CComboBox m_PortNr;
	CComboBox m_BaudRate;
	afx_msg void OnBnClickedButtonOpenClose();
	CButton m_OpenCloseCtrl;
	afx_msg void OnBnClickedButtonSend();
	CEdit m_Send;
	CEdit m_ReceiveCtrl;
	afx_msg void OnClose();
};