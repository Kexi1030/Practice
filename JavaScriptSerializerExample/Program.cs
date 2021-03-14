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
