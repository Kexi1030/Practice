# Json

---

JSON ( JavaScript对象表示法）是—种轻型的数据交换格式。

## JSON C#库

+ JavaScriptSerializer类
+ JSON.Net库

## 概括

+ 值
+ 对象 
+ 数组 
+ 将所有要素整合在一起

### 对象

+ 名称/值对使用冒号

+ 用花括号括起

+ 用逗号分隔各个对

  ​	{

  ​		名称：值

  ​		名称：值

  ​	}

### 数组
+ 值用中括号括起
+ 用逗号分隔
+ 可以是任何东西的集合 可以是对象的集合

### 将所有要素整合在一起
+ json值也可以是对象或数组
+ json对象和数组可以嵌套


## 解析\生成JSON文件
+ JavaScriptSerializer类
+ JSON.Net库
```C#
using System;
using System.Web.Script.Serialization;
using System.IO;
using System.Configuration;
using System.Net.Http.Headers;
using System.Net;
using Newtonsoft.Json;

namespace JavaScriptSerializerExample
{
    class Person
    {
        public string name { get; set; }
        public int age { get; set; }
        public override string ToString()
        {
            return string.Format("Name: {0} \nAge: {1}", name, age);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            // deserialize JSON from file
            String JSONstring = File.ReadAllText("JSON.json");
            //string dir = AppDomain.CurrentDomain.BaseDirectory;

            JavaScriptSerializer ser = new JavaScriptSerializer(); // 反序列化
            Person p1 = ser.Deserialize<Person>(JSONstring);
            Console.WriteLine(p1);

            // output JSON file

            Person p2 = new Person() { name = "Ben", age = 16 };
            string outputJson = ser.Serialize(p2);
            File.WriteAllText("OUTPUT.json", outputJson);

            Person p3 = new Person() { name = "Peter", age = 3 };
            string outputJson2 = JsonConvert.SerializeObject(p3);
            File.WriteAllText("OUTPUT.json", outputJson2);
            // System.Console.ReadKey();
        }
    }
}
```
