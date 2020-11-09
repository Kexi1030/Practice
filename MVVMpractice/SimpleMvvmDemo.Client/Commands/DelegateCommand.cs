using System;
using System.Collections.Generic;
using System.Dynamic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;

namespace SimpleMvvmDemo.Client.Commands
{
    class DelegateCommand : ICommand // 传输命令
    {
        public event EventHandler CanExecuteChanged;

        public bool CanExecute(object parameter) // 用来帮助命令的呼叫者命令能否执行
        {
            if(this.CanExecuteFunc == null)
            {
                return true;
            }

            return this.CanExecuteFunc(parameter);
            
        }

        public void Execute(object parameter) // 当命令执行时需要做什么
        {
            if(this.ExecuteAction == null)
            {
                return;
            }
            this.ExecuteAction(parameter); // 命令把要执行的事情委托给了exc所指向的方法
        }

        public Action<object> ExecuteAction { get; set; }
        public Func<object,bool> CanExecuteFunc { get; set; }
    }
}
