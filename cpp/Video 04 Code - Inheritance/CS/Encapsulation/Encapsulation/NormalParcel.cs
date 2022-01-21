using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Encapsulation
{
    public class NormalParcel : Parcel
    {
        
        public void DisplayNormalReceipt()
        {
            int overWeightCharges = 0;
          
            int totalOverWeight = 0;
            int totalCharges = this.fee;
            if (this.weight > 900)
            {
                totalOverWeight = this.weight - 900;
                overWeightCharges = totalOverWeight * this.feePerGram;
                totalCharges = totalCharges + (this.feePerGram * totalOverWeight);
            }
            Console.WriteLine("Shipment Receipt");
            Console.WriteLine("-------------------------");
            Console.WriteLine("Receipt No. : " + this.id);
            Console.WriteLine("Sender Name : " + this.senderName);
            Console.WriteLine("Sender Address : " + this.senderAddress);
            Console.WriteLine("Receiver Name : " + this.receiverName);
            Console.WriteLine("Receiver Address : " + this.receiverAddress);
            Console.WriteLine("Parcel Weight : " + this.weight);
            if (totalOverWeight > 0)
            {
                Console.WriteLine("OverWeight : " + totalOverWeight + "g");
            }
            else
            {
                Console.WriteLine("OverWeight : No");
            }
            Console.WriteLine("Basic Charges : " + this.fee);
            Console.WriteLine("OverWeight Charges: " + overWeightCharges);
            Console.WriteLine("Shipment Total Charges: " + totalCharges);
            Console.WriteLine("Type of Shipment: Normal");
        }
    }
}
