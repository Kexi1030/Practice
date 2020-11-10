using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using CrazyElephant.Models;
using Microsoft.Practices.Prism.Commands;
using CrazyElephant.Services;
using Microsoft.Practices.Prism.ViewModel;

namespace CrazyElephant.ViewModels
{
    class MainWindowViewModel:NotificationObject
    {
        public DelegateCommand PlaceOrderCommand { get; set; } // 下单时点ORDERButton使用的
        public DelegateCommand SelectMenuItemCommand { get; set; } // 两个命令属性 选择菜品的时候使用的

        private int count; // 选中了多少菜

        public int Count
        {
            get { return count; }
            set
            {
                count = value;
                this.RaisePropertyChanged("Count");
            }
        }


        private Restaurant restaurant;

        public Restaurant Restaurant
        {
            get { return restaurant; }
            set
            {
                restaurant = value;
                this.RaisePropertyChanged("Restaurant");
            }
        }

        private List<DishMenuItemViewModel> dishMenu;

        public List<DishMenuItemViewModel> DishMenu
        {
            get { return dishMenu; }
            set
            {
                dishMenu = value;
                this.RaisePropertyChanged("DishMenu");
            }
        }

        public MainWindowViewModel()
        {
            this.LoadRestaurant();
            this.LoadDishMenu();
            this.PlaceOrderCommand = new DelegateCommand(new Action(this.PlaceOrderCommandExecute));
            this.SelectMenuItemCommand = new DelegateCommand(new Action(this.SelectMenuItemExecute));
        }

        private void LoadRestaurant()
        {
            this.Restaurant = new Restaurant();
            this.Restaurant.Name = "Crazy大象";
            this.Restaurant.Address = "北京市海淀区万泉河路紫金庄园1号楼 1层 113室";
            this.Restaurant.PhoneNumber = "15210365423 or 82650336";
        }

        private void LoadDishMenu()
        {
            IDataService ds = new XmlDataService();
            var dishes = ds.GetAllDishes(); // 先把所有菜品读入
            this.DishMenu = new List<DishMenuItemViewModel>();
            foreach (var dish in dishes) // 把每一个viewmodel的菜品添加到DishMenu
            {
                DishMenuItemViewModel item = new DishMenuItemViewModel();
                item.Dish = dish;
                this.DishMenu.Add(item);
            }
        }

        private void PlaceOrderCommandExecute() // 点击OrderButton命令穿回来的东西 怎么处理
        {
            var selectedDishes = this.DishMenu.Where(i => i.IsSelected == true).Select(i => i.Dish.Name).ToList(); 
            IOrderService orderService = new MockOrderService();
            orderService.PlaceOrder(selectedDishes);
            MessageBox.Show("订餐成功！");
        }

        private void SelectMenuItemExecute()
        {
            this.Count = this.DishMenu.Count(i => i.IsSelected == true);
        }
    }
}
