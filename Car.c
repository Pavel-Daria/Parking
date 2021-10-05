using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace parking
{
    public class Car
    {
        public string Brande { get; set; }
        public string Model { get; set; }
        public string Color { get; set; }
        public string Number { get; set; }
        public string ArrivalTime { get; set; }
        public void ShowCar()
        {
            Console.WriteLine("Бренд:{0}, Модель:{1}, Цвет:{2}, Номер:{3}, Время прибытия:{4}", Brande, Model, Color, Number, ArrivalTime);
        }
    }
}
