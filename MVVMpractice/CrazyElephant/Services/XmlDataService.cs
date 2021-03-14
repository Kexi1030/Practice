using CrazyElephant.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace CrazyElephant.Services
{
    class XmlDataService:IDataService // 继承了IDataService接口
    {
        public List<Dish> GetAllDishes() // 实现了GetAllDishes方法
        {
            List<Dish> dishList = new List<Dish>();
            string xmlFileName = System.IO.Path.Combine(Environment.CurrentDirectory, @"Data\Data.xml"); // 读取了当前文件夹下的Data的Data.xml
            XDocument xDoc = XDocument.Load(xmlFileName);
            var dishes = xDoc.Descendants("Dish");
            foreach(var d in dishes)
            {
                Dish dish = new Dish();
                dish.Name = d.Element("Name").Value;
                dish.Category = d.Element("Category").Value;
                dish.Comment = d.Element("Comment").Value;
                dish.Score = double.Parse(d.Element("Score").Value);
                dishList.Add(dish);
            }

            return dishList;
        }
    }
}
