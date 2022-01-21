using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Encapsulation
{
    class CargoSystemNoOop
    {
         
        public void NewReceipt()
        {

            int receiptnum, weight, charges;
            string sname, saddress, rname, raddress;
            Console.Write("Enter receipt no.: ");

            receiptnum = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter sender name: ");
            sname = Console.ReadLine();
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
            Console.WriteLine("\n\nShipment Receipt");
            Console.WriteLine("-------------------------");
            Console.WriteLine("Receipt No. : " + receiptnum);
            Console.WriteLine("Sender Name : " + sname);
            Console.WriteLine("Sender Address : " + saddress);
            Console.WriteLine("Receiver Name : " + rname);
            Console.WriteLine("Receiver Address : " + raddress);
            Console.WriteLine("Parcel Weight : " + weight + " grams");
            Console.WriteLine("Parcel Shiping Charges : " + charges);
        }

    }
}
