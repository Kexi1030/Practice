   M S B A M L   `   `   `  ����I  ESimpleMvvmDemo, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null/clr-namespace:SimpleMvvmDemoSimpleMvvmDemo  5   	       SimpleMvvmDemo.MainWindow   5   	   \ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   .localclr-namespace:SimpleMvvmDemo     5   	     � Title$  
MainWindow��5   	   $	��450��6   $	��800��6)   .��5	      �  � RowDefinitions 5
   
   �� 5      $
��Auto �6   �� 5      $��* �6   .+�5   
   o� .@�5      m� $��_File��6   .@�5      m� -   5         m�Name$ saveMunuItem��5   *   $��_Save��6   6@   5      5      � 5   
   $��1��6    5      �� 5      $
��Auto �6    �� 5      $
��Auto �6    �� 5      $
��Auto �6    �� 5      $��* �6    .+�5      �� -   5         ��Name$ slider1��5      $��0��6&   
����ح� � Minimum$
 -100Q�6J    � Maximum$	 100Q�6Y   $��4q�6g   �� 5      -   5        $ slider2��5      $��1��6&   
����ح�$
 -100Q�6J   $	 100Q�6Y   $��4q�6g   �� 5      -   5        $ slider3��5      $��2��6&   
����ح�$
 -100Q�6J   $	 100Q�6Y   $��4q�6g   �� 5      -   5         ��Name$ 	addButton��5      $��3��6(   $	��Add��65   $	��120��6C   $��80��6O   5      5      5       