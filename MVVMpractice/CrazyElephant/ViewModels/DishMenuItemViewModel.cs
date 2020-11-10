using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using CrazyElephant.Models;
using Microsoft.Practices.Prism.ViewModel;

namespace CrazyElephant.ViewModels
{
    // 判断当前的菜品是否被选中
    class DishMenuItemViewModel:NotificationObject // 有可能跟界面进行交互所以需要派生自 NotificationObject
    {
        public Dish Dish { get; set; }

        private bool isSelected; // 当前的菜品是否被选中

        public bool IsSelected
        {
            get { return isSelected; }
            set
            {
                isSelected = value;
                this.RaisePropertyChanged("isSelected");
            }
        }


    }
}
