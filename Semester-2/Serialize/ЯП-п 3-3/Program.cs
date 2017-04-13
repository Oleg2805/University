using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;

namespace ЯП_п_3_3
{
    [System.Serializable]
    class Client
    {
        public string name;
        public string surname;
        public string middle_name;
        public int month;
        public int day;

        public void ReadFile(StreamReader F)
        {
            string s;
            s = F.ReadLine();
            name = s.Split(' ')[0]; 
            surname = (s.Split(' ')[1]); 
            middle_name = (s.Split(' ')[2]);
            day = int.Parse(s.Split(' ')[3]);
            month = int.Parse(s.Split(' ')[3]);
        }
       
        public void type(int number)
        {
            
            Console.WriteLine("Информация о  клиенте: " + name + " " + surname + " " + middle_name);
            Console.WriteLine("Дата рождения: " + day + " " + month);         
        }
    }

    class Program
    {
           
        static void Main(string[] args)
        {

            
                StreamReader F = null;
                try
                { F = new StreamReader("C:\\Users\\Oleg\\Documents\\Visual Studio 2015\\Projects\\source.txt", Encoding.GetEncoding(1251)); }
                catch
                { Console.WriteLine("Не удалось открыть файл для чтения."); }
                int N = int.Parse(F.ReadLine());              
                Client[] Clients = new Client[N];
                for (int i = 0; i < N; i++)
                {
                    Clients[i] = new Client();
                    Clients[i].ReadFile(F);
                }
                F.Close();

                for (int i = 0; i < N; i++)
                    Clients[i].type(i);
                BinaryFormatter formatter = new BinaryFormatter();
            FileStream fs;
            fs = new FileStream("C:\\Users\\Oleg\\Documents\\Visual Studio 2015\\Projects\\people.dat", FileMode.Open, FileAccess.Write);
            formatter.Serialize(fs, Clients);
            Console.WriteLine("готово");
            fs.Close();


        }
    }
}
