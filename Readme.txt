Qt 4.7 學習紀錄

教學影片來源:https://www.youtube.com/watch?v=6KtOzh0StTc&list=PL2D1942A4688E9D63
Tool來源:http://qt.software.informer.com/download/

因為忽然間發現這教學資料，所以想要順便重溫研究所的所學技能，特此備份

■Tool
	-在WINDOWS上的QT安裝檔，因為要分批上傳所以將它變成壓縮檔
	
■Movie
	-C++ Qt 01 - Introduction to QT programming.mp4 [單純告知這一系列教學文件運用的QT TOOL 版本]
	
	-C++ Qt 02 - hello world.mp4 [撰寫第一支 Qt程式 測試安裝環境的正確性]
	
	-C++ Qt 03 - Intro to GUI programming.mp4 [撰寫第一支 Qt GUI程式，實作預設的slot/signal機制]
	
	-C++ Qt 04 - Signals and Slots.mp4 [繼續講解slot/signal機制，利用progressBar+horizontalSlider兩個元件實作，單純利用程式碼建立/解除基本slot/signal機制的方法，當改變horizontalSlider拖拉值時，觸發progressBar顯示的百分比]

	-C++ Qt 05 - Displaying Windows.mp4[建立Menu+Tool Bar並建立基本slot/signal機制，另外建立自己的對話盒(Dialog)]
	
	-C++ Qt 06 - layouts, tabs and buddies.mp4[建立對話盒(Dialog)應用程式，使用Horizontally/Vetically layout+Horizontal/Vetical Spacer 實現元件版面配置和依照程式畫面大小自動縮放的功能]

■project_code
	-Qt_002 [對應 Movie-C++ Qt 02 的專案程式]
	
	-Qt_003 [對應 Movie-C++ Qt 03 的專案程式]
		note:
			->實作預設的slot/signal機制
			Ans:直接按照help_img.png 提示即可
			
			->How do I create a custom slot in qt4 designer?	[http://stackoverflow.com/questions/165637/how-do-i-create-a-custom-slot-in-qt4-designer]
			Ans:
			01.Switch to Edit Signals/Slots mode (F4)
			02.Drag and drop from the widget which is to emit the signal, to the widget which is to receive the signal.
	
	-Qt_004 [對應 Movie-C++ Qt 04 的專案程式]
		note:
			->在表單的工具列上點右鍵選擇[Remove Tool Bar]
		
			->在表單上點右鍵選擇[Remove Status Bar]
		
			->額外利用QVBoxLayout把progressBar+horizontalSlider 變成一組對其元件，方便版面排版對旗
			
			->影片在4:59有完整單純利用程式碼建立/解除基本slot/signal機制的方法
			Ans:
			connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));//手動建立slot/signal機制
			//disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));//手動解除slot/signal機制
	
	-Qt_004-1 [對應 Movie-C++ Qt 04 的專案程式] (自己獨立實作範例，影片到現在還沒有教)
		note:
			->實現自訂slot函數的做法
			Ans:
			請查看『help_img』的說明圖
			
	-Qt_005 [對應 Movie-C++ Qt 05 的專案程式]
		note:
			->將一個元件設為QMainWindow的編輯區
			
			->建立Menu+Tool Bar並建立基本slot/signal機制
			Ans:
			請查看『help_img』的說明圖，01~04
			
			->基本使用QMessageBox
			
			->建立自己的對話盒(Dialog)
			Ans:
			請查看『help_img』的說明圖，05~07			