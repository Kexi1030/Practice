using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimpleMvvmDemo.Client.ViewModels
{
    class NotificationObject : INotifyPropertyChanged // 具有通知能力的对象
    {
        public event PropertyChangedEventHandler PropertyChanged; 

        public void RaisePropertyChanged(string propertyName) // 进行封装
        {
            if(this.PropertyChanged != null)
            {
                this.PropertyChanged.Invoke(this, new PropertyChangedEventArgs(propertyName)); // 告诉binding哪个属性发生了改变
            }
        }
    }
}
