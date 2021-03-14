using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace NlogDemo
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            init();
            InitializeComponent();
        }

        void init()
        {
            util.Logger logger1 = new util.Logger("configFileName");
            logger1.Debug("message---------",new Exception("demo exception with debug") );

            logger1.Error("error-----------");
            logger1.Error("error2-----------");
        }  

    }
}
