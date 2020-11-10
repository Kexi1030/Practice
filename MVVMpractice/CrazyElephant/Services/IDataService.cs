using CrazyElephant.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CrazyElephant.Services
{
    interface IDataService // 读取xml块
    {
        List<Dish> GetAllDishes();
    }
}
