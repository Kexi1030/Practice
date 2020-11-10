using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CrazyElephant.Services
{
    interface IOrderService
    {
        void PlaceOrder(List<string> dishes); // 下订单接口 
    }
}
