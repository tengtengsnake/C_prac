# C_prac  
+ C 語言可攜性佳(porability),很像java 說的跨平台(cross platform)  
+ 程式寫好後,叫做source code,必須透過轉換器轉成機器看得懂的語言叫做machine code  
+ 轉換器有兩種:  
1.直譯器(interpreter) 逐行翻譯,有錯直接停下,占用記憶體少,但執行速度慢    
2.編譯器(compiler) 先檢查所有code是否有錯,然後編譯成可執行檔,效率高  
+ C 語言編譯與執行過程:  
+ ![](https://static.javatpoint.com/cpages/images/compilation-process-in-c2.png)
+ #include (pre-processor directive) 前置處理器    #include<stdio.h>,裡面stdio.h 就做header 標頭檔  
+ 程式的規劃與實作:  
1.規劃程式  
![flowchar symbols](https://uploads-ssl.webflow.com/6184b461a39ff13bfb8c0556/61de99e8171cc6468145551d_flowchart-symbols-800.png)  
![](https://i.pinimg.com/originals/bb/9a/9c/bb9a9c752bb5b6c07b92a78abd76dec5.gif)  
2.撰寫code  
3.註解,編譯code
4.執行code  
5.debug & test  
6.程式碼修飾與儲存  
+ **基本資料型態以及其記憶體使用大小**  
+ ![基本資料型態以及其記憶體使用大小](https://cdn.techbeamers.com/wp-content/uploads/2019/01/C-Datatypes-Range-and-Sizes.png)  
+ ![Datatypes](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191113115600/DatatypesInC.png)  
+ / escape char  跳脫字元  
+ n,t 之類的叫做控制碼  
+ \n,\t escape sequence 跳脫序列  
+ C的goto statement 就是組合語言傳下來的,功能就是跟function相同  
+ 運算子(oerator),就是數學運算符號,運算元(operand),就是變數之類的  
+ system("pause") 函數呼叫系統指令pause,使code 執行到此列(row)暫停,理由是當程式執行完成後,dev c++ 會將dos 視窗關閉,會看不見輸出結果  
+ return 0; 如果沒有出問題,由main() 回傳 0 表示沒問題
+ 
