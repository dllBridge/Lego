

// ���� ���� ����� (���� ������) ��� ������� � ���������� ��������� �������.



#include <windows.h>                                  //    ���������� (������������ ���� ) ���������� ������� WinAPI  

#include  "C:\\dllBridge\\le_Go\\ScreenSavers\\ScrSaver_1.h" 



namespace Lego                    //  ���������� ���������� ��� ����� �������. ���������� ������������� ��� - "Lego"
{
		
   extern  int        	     Timer_CLK,                              //  ���������� ��� �������� ������������ �������
                      	     MouseMove,                
                    	   Key_Pressed,                              //  ��� ��������� ������� ������ (�� ����������) 
			        	   Key_Counter,                              //  ������� ������� ������       (�� ����������)   
                       	      DemoBusy,
                        	   X_width,                                                      // ������� ���� (������)
                       		  Y_height,
					    	   Menu_hY,                                                      //   ������ Windows-����
                      	     StatusBar,
                        	   ToolBar,
					      	     xMove,
					             yMove;  
							   
   extern   HBITMAP               hbit;							    
					           
   extern   int             maxX, maxY; 					           
					      
   extern   char            szMsg[100];

   extern   HWND                  hWnd;     //  ����� ��������! ���� ������ ���������� ���������� � ����� ����� �����  
   extern   HDC             memdc, hdc; 
   extern   HINSTANCE        hInstance; 			             //  ��������� ���� ��������� ���� ��������� �������� 

   extern   HMENU             hMenu[5];

         //  � ����� ���� ���� ���������� ��������� �������� � �������. ������� ���� � 31 ������� �� ��������� �� ���
                                                                          // ��������� �� ���� Windows-���� ���������.
   extern   int              color[20];                                               //  color[0] - ׸���� ���� ����   
   extern   HPEN              hPen[10];                                    //  ���� ������ �� �����, ��� ���  (Black)  
   extern   HBRUSH             hBr[10];                           // �������� ����� ������ �� �����, ��� ���  (Black) 
   
   extern   HFONT            hFont[10];

// extern    WNDCLASS         WndClass;                                          // ������ ������� ������� ���������	


   extern   RECT             rc_Global;

   extern   PAINTSTRUCT    paintStruct;

   ////////////////////////////////////////////////////////////    ��������� (���������) �������   //////////////////
   
   void xPrint(int x, int y, const char *pChar);   
   
   void    ScanKeyBoard(WPARAM wParam);                                   // �������� �������, ������� ����� ������� ����... 
   void    ScanMenuItems(int     item); 
   
//   void           StartScreenSaver_1();

} //=========================================== namespace Lego ======================================================




void                            INIT();
void                           START(); 
void                       mainPAINT();
void ScanButtonsAndMenuItems(int, int);  













































