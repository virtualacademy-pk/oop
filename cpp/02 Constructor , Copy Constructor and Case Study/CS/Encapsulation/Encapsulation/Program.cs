using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Encapsulation
{
    class Program
    {
        static void DisplayReceipt(Parcel p){
            Console.WriteLine("\n\nShipment Receipt");
            Console.WriteLine("-------------------------");
            Console.WriteLine("Receipt No. : " + p.Id);
            Console.WriteLine("Sender Name : " + p.SenderName);
            Console.WriteLine("Sender Address : " + p.SenderAddress);
            Console.WriteLine("Receiver Name : " + p.ReceiverName);
            Console.WriteLine("Receiver Address : " + p.ReceiverAddress);
            Console.WriteLine("Parcel Weight : " + p.Weight + " grams");
            Console.WriteLine("Parcel Shiping Charges : " + p.Fee);
        }

        static void Main(string[] args)
        {
           /* Employee emp = new Employee(6);
           emp.EmployeeId = 1;
            emp.EmployeeName = "Ali Imran";
            Console.WriteLine("Employee Id is " + emp.EmployeeId);
            Console.WriteLine("Employee Name is " + emp.EmployeeName);
            Console.WriteLine("Employee Religion is " + emp.Religion);
            */
            /*CargoSystemNoOop cs = new CargoSystemNoOop();
            cs.NewReceipt();*/
            int receiptnum, weight, charges;
            string sname, saddress, rname, raddress;
            Console.Write("Enter receipt no.: ");

            receiptnum = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter sender name: ");
            sname = Console.ReadLine();//cin>>sname;
            Console.Write("Enter sender address: ");

            saddress = Console.ReadLine();
            Console.Write("Enter receiver name: ");

            rname = Console.ReadLine(); ;
            Console.Write("Enter receiver address: ");

            raddress = Console.ReadLine();
            Console.Write("Enter weight(in grams)) of parcel: ");
            weight = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter shipment charges: ");
            charges = Convert.ToInt32(Console.ReadLine());
            Parcel p = new Parcel();
            p.Id = receiptnum;
            p.SenderName = sname;
            p.SenderAddress=saddress;
            p.ReceiverName =rname;
            p.ReceiverAddress = raddress;
            p.Weight =weight;
            p.Fee = charges;
            DisplayReceipt(p);
            Console.ReadLine();
        }
    }
}
