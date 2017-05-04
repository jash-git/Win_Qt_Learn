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

	-C++ Qt 07 - Basic Application and HTML Aware Widgets.mp4[建立一個空專案之後手動建立最小的Qt應用程式，該程式只有單一個lable元件，並實驗利用HTML語法改變lable顯示狀態]
	
	-C++ Qt 08 - Horizontal and Vertical Layouts.mp4[建立一個空專案之後手動建立Qt應用程式，首先引用QPushButton、QHBoxLayout、QVBoxLayout函式庫，第二步建立一的QWidget+三個QPushButton元件，第三步建立一個QHBoxLayout元件並把三個QPushButton元件放入其中「addWidget()」，第三步把QHBoxLayout指定給QWidget當主要Layout「setLayout()」，並顯示配置結果「show()」；最後把QHBoxLayout元件替換成QVBoxLayout再看一次結果]	

	-C++ Qt 09 - QGridLayout.mp4[建立一個空專案之後手動建立Qt應用程式，延續Qt 08的主題，本次利用QGridLayout來實作版面配置應用範例]
	
	-C++ Qt 10 - Splitters.mp4[建立GUI的對話盒(Dialog)專案，並放上兩的按鈕(QPushButton)+QSplitter元件，實作簡易視窗分割可調整效果]

	-C++ Qt 11 - QDir.mp4[利用QDir學習操作檔案目錄結構]
		QDir
			可以在建構子時指定操作目錄
			可以用exists()判斷目錄是否存在
			可以用drives()取得所有磁碟機清單(06:02有範例)
			可以用mkpath()建立一個完整的目錄結構
			可以用entryInfoList()取得該層目錄的檔案和目錄
			利用QDir此類來遍歷某個目錄中所有目錄和檔案
			void chakan(QString path)
			{
				//資料來源:http://jiabaolong.cn/archives/345
				QDir dir(path);
				foreach(QFileInfo mfi ,dir.entryInfoList())
				{
					if(mfi.isFile())
					{
						qDebug()<< "File :" << mfi.fileName();
					}
					else
					{
						if(mfi.fileName()=="." || mfi.fileName() == "..")//要注意，在各種檔案系統中通常還會包含目前的目錄和上層目錄，所以，要注意在遍歷的時候要把這兩個目錄過濾掉，否則會出現閉環
							continue;
						qDebug() << "Entry Dir" << mfi.absoluteFilePath();
						chakan(mfi.absoluteFilePath());
					}
				}
			}

	-C++ Qt 12 - QFile.mp4[利用QFile學習操作檔案讀寫等操作]
		建立文字檔的寫入(Write)/讀取(Read)函數，其中QFile只是則開關檔案，而要存取文字檔內容必須利用QTextStream
		比較完整的檔案寫入和讀取的範例請參考project_code內Qt_012目錄的兩個CPP，此範例是完整的依序每次寫入和讀取都是以一行資料為單位的標準範例

	-C++ Qt 13 - Resource Files.mp4[建立qrc檔，讀取rc內定義的路徑檔案就只要在路徑前面加上冒號即可(影片03:03有明確教學)]

	-C++ Qt 14 - QLabel and QT Designer.mp4[建立對話盒(Dialog)應用程式，並利用QT Designer在對話盒上設定QLabel相關屬性(PS範例中有點出QLabel支援HTML語法設定效果)，藉此練習QT Designer的基本用法]

	-C++ Qt 15 - QPushButton.mp4[建立對話盒(Dialog)應用程式，並利用QT Designer在對話盒上新增QPushButton元件並設定相關屬性和slot/signal，最後在slot函數內撰寫顯示QMessageBox來驗證slot/signal機制動作的正確性]

	-C++ Qt 16 - QLineEdit.mp4[建立對話盒(Dialog)應用程式，並利用QT Designer在對話盒上新增QLineEdit+QPushButton元件，其中設定QLineEdit的echoMode屬性讓顯示時呈現密碼模式+新增QPushButton元件並設定相關屬性和slot/signal，最後在slot函數內撰寫顯示QMessageBox來顯示QLineEdit內容]

	-C++ Qt 17 - QCheckBox.mp4[建立對話盒(Dialog)應用程式，並利用QT Designer在對話盒上新增QCheckBox+QPushButton元件，首先在Dialog建構子內撰寫呼叫QCheckBox成員函數setChecked(true);藉此改變物件預設核選狀態，之後新增QPushButton的slot/signal機制，最後在QPushButton的slot函數內撰寫呼叫QCheckBox成員函數isChecked()判斷該物件當下核選狀態，並顯示不同的QMessageBox內容]

	-C++ Qt 18 - QRadioButton.mp4[建立對話盒(Dialog)應用程式，並利用QT Designer在對話盒上新增2*QRadioButton+1*QPushButton元件，首先新增QPushButton的slot/signal機制，最後在QPushButton的slot函數內撰寫呼叫QRadioButton成員函數isChecked()判斷該物件當下核選狀態，並顯示不同的QMessageBox內容]

	-C++ Qt 19 - QComboBox.mp4[建立對話盒(Dialog)應用程式，並利用QT Designer在對話盒上新增1*QComboBox+1*QPushButton元件，首先在Dialog建構子內撰寫呼叫QComboBox成員函數addItem();藉此新增物件內容選項，之後新增QPushButton的slot/signal機制，最後在QPushButton的slot函數內撰寫呼叫QComboBox的成員函數currentText()/currentIndex()取得當下選擇內容 文字/位置，並顯示不同的QMessageBox內容]

	-C++ Qt 20 - QListWidget.mp4[建立對話盒(Dialog)應用程式，並利用QT Designer在對話盒上新增1*QListWidget+1*QPushButton元件，首先在Dialog建構子內撰寫呼叫QListWidget成員函數addItem();藉此新增物件內容選項，之後新增QPushButton的slot/signal機制，最後在QPushButton的slot函數內撰寫呼叫QListWidget的成員函數currentItem()/currentRow()取得當下選擇內容 文字/位置，並顯示不同的QMessageBox內容]

	-C++ Qt 21 - QTreeWidget.mp4[建立對話盒(Dialog)應用程式，並利用QT Designer在對話盒上新增1*QTreeWidget+1*QPushButton元件，實作表單(Gridview)內階層樹狀結構範例]
	
	-C++ Qt 22 - QTreeWidget Continued.mp4[延續上一個範例，實做出改變選擇當前選項的文字+背景顏色( 使用 currentItem()->setBackgroundColor(index,Qt::red); 來實現 )]

	-C++ Qt 23 QActions.mp4[建立單一文件介面(SDI)應用程式，並手動新增資源檔(Qt Resource file)用來儲存ICON，藉此用來顯示在工具選單(Tool Menu)上]

	-C++ Qt 24 - QSlider and QProgressBar.mp4[建立對話盒(Dialog)應用程式，並利用QT Designer在對話盒上新增1*QSlider+1*QProgressBar元件並設定相關屬性和slot/signal，又或者直接使用程式碼的方式直接指定slot/signal關係，讓QSlider的事件直接驅動QProgressBar]
	
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

	-Qt_009 [對應 Movie-C++ Qt 09 的專案程式]
		note:
			help_img內有詳細建置專案步驟圖
			
	-Qt_012 [對應 Movie-C++ Qt 12 的專案程式]
		note:
			範例來源:https://openhome.cc/Gossip/Qt4Gossip/QTextStream.html
			
	-Qt_013 [對應 Movie-C++ Qt 13 的專案程式]
		note:
			建立一個Qt Console的專案程式而非一個QT空專案
			測試確定qrc內所指定的檔案會被包覆到執行檔中，所以在任何地方都可執行