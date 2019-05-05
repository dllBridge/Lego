

// Этот файл нужен (кому угодно) для доступа к глобальным переменнм проекта.



#include <windows.h>                                  //    Подключаем (заголовочный файл ) библиотеки функций WinAPI  

#include  "C:\\dllBridge\\le_Go\\ScreenSavers\\ScrSaver_1.h" 



namespace Lego                    //  Глобальные переменные для всего проекта. Ограничены пространством имён - "Lego"
{
		
   extern  int        	     Timer_CLK,                              //  переменная для подсчёта срабатываний таймера
                      	     MouseMove,                
                    	   Key_Pressed,                              //  Код последней нажатой кнопки (на клавиатуре) 
			        	   Key_Counter,                              //  Счётчик нажатий кнопок       (на клавиатуре)   
                       	      DemoBusy,
                        	   X_width,                                                      // размеры окна (Ширина)
                       		  Y_height,
					    	   Menu_hY,                                                      //   Высота Windows-окна
                      	     StatusBar,
                        	   ToolBar,
					      	     xMove,
					             yMove;  
							   
   extern   HBITMAP               hbit;							    
					           
   extern   int             maxX, maxY; 					           
					      
   extern   char            szMsg[100];

   extern   HWND                  hWnd;     //  хедер ГЛАВНОГО! окна сделан глобальной переменной и будет виден везде  
   extern   HDC             memdc, hdc; 
   extern   HINSTANCE        hInstance; 			             //  Экземпляр этой программы тоже глобально объявлен 

   extern   HMENU             hMenu[5];

         //  К цвету фона окна существоет множество привязок в проекте. Поменяв цвет в 31 строчке Вы повлияете на все
                                                                          // зависимые от фона Windows-окна параметры.
   extern   int              color[20];                                               //  color[0] - Чёрный цвет фона   
   extern   HPEN              hPen[10];                                    //  Перо такого же цвета, как фон  (Black)  
   extern   HBRUSH             hBr[10];                           // Создадим кисть такого же цвета, как фон  (Black) 
   
   extern   HFONT            hFont[10];

// extern    WNDCLASS         WndClass;                                          // Создаём элемент оконной структуры	


   extern   RECT             rc_Global;

   extern   PAINTSTRUCT    paintStruct;

   ////////////////////////////////////////////////////////////    Прототипы (заголовки) функций   //////////////////
   
   void xPrint(int x, int y, const char *pChar);   
   
   void    ScanKeyBoard(WPARAM wParam);                                   // Прототип функции, котораю будет вызвана ниже... 
   void    ScanMenuItems(int     item); 
   
//   void           StartScreenSaver_1();

} //=========================================== namespace Lego ======================================================




void                            INIT();
void                           START(); 
void                       mainPAINT();
void ScanButtonsAndMenuItems(int, int);  













































