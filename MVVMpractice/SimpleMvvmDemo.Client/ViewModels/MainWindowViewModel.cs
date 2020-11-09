using Microsoft.Win32;
using SimpleMvvmDemo.Client.Commands;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimpleMvvmDemo.Client.ViewModels
{
    class MainWindowViewModel:NotificationObject
    {
        private double input1;

        public double Input1
        {
            get { return input1; }
            set
            {
                input1 = value;
                this.RaisePropertyChanged("Input1");
            }
        }

        private double input2;

        public double Input2
        {
            get { return input2; }
            set
            {
                input2 = value;
                this.RaisePropertyChanged("Input2");
            }
        }

        private double result;

        public double Result
        {
            get { return result; }
            set
            {
                result = value;
                this.RaisePropertyChanged("Result"); // 一旦改变 通过RaisePropertyChanged方法告诉关联的databinding的result改变了
            }
        }

        public DelegateCommand AddCommand { get; set; }
        public DelegateCommand SaveCommand { get; set; }

        private void Add(object parameter)
        {
            this.Result = this.Input1 + this.Input2;
        }

        private void Save(object parameter)
        {
            SaveFileDialog dlg = new SaveFileDialog();
            dlg.ShowDialog();
        }

        public MainWindowViewModel()
        {
            this.AddCommand = new DelegateCommand();
            this.AddCommand.ExecuteAction = new Action<object>(this.Add); // 这里的是object所以上面的Add方法参数也得是object类型

            this.SaveCommand = new DelegateCommand();
            this.SaveCommand.ExecuteAction = new Action<object>(this.Save);

        }
    }
}
