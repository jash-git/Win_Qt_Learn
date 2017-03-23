Qt 4.7 學習紀錄

教學影片來源:https://www.youtube.com/watch?v=6KtOzh0StTc&list=PL2D1942A4688E9D63
Tool來源:http://qt.software.informer.com/download/

因為忽然間發現這教學資料，所以想要順便重溫研究所的所學技能，特此備份

■Tool
	-在WINDOWS上的QT安裝檔，因為要分批上傳所以將它變成壓縮檔
	
■Movie
	-C++ Qt 01 - Introduction to QT programming.mp4 [單純告知這一系列教學文件運用的QT TOOL 版本]
	-C++ Qt 02 - hello world.mp4 [撰寫第一支 Qt程式 測試安裝環境的正確性]
	-C++ Qt 03 - Intro to GUI programming [撰寫第一支 Qt GUI程式，實作預設的slot/signal機制]

■project_code
	-Qt_002 [對應 Movie-C++ Qt 02 的專案程式]
	-Qt_003 [對應 Movie-C++ Qt 03 的專案程式]
		note:
			->實作預設的slot/signal機制
			Ans:直接按照help_img.png 提示即可
			
			->How do I create a custom slot in qt4 designer?
			Ans:
			01.Switch to Edit Signals/Slots mode (F4)
			02.Drag and drop from the widget which is to emit the signal, to the widget which is to receive the signal.
			