//�萔�錾
#define DEF_APP_NAME	TEXT("Waveform Test")
#define DEF_MUTEX_NAME	DEF_APP_NAME			//�~���[�e�b�N�X��
#define DEF_DATAPERS 1000	//1�b�Ԃɉ��f�[�^���o�͂��邩

//�֐��錾
BOOL CALLBACK MainDlgProc( HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam );	//���C���_�C�A���O�v���V�[�W��
BOOL WinInitialize( HINSTANCE hInst, HWND hPaWnd, HMENU chID, char *cWinName, HWND PaintArea, WNDPROC WndProc ,HWND *hDC);//�q�E�B���h�E�𐶐�
UINT WINAPI TFunc( LPVOID thParam );												//�f�[�^�ǂݍ��ݗp�X���b�h
HRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);		//�q�E�B���h�E�v���V�[�W��
BOOL PLOT(HWND hWnd, int sec, int data,int bsec,int bdata);							//�g�`�`��
BOOL REPaint(HWND hWnd);															//�w�i�Ǝ��̍ĕ`��

											//�ϐ��錾
static COLORREF	color, colorPen,bkcolor;	//�F
//static HWND hPict1, hPict2,hPict3,hPict4;		//�E�B���h�E�n���h���iPictureBox�j
//static HWND hWnd1, hWnd2,hWnd3,hWnd4;		//�q�E�B���h�E�n���h��
