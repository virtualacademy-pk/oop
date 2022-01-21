using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Encapsulation 
{
    public class UrgentParcel : Parcel
    {
        private int additionalFeePerGram;

        public int AdditionalFeePerGram
        {
            get {return additionalFeePerGram;}

            set {additionalFeePerGram = value;}
        }
        public void DisplayUrgentReceipt()
        {
            int overWeightCharges = 0;
            float totalCharges = 0;
            int totalOverWeight = 0;
            float basicCharges = 0;
             
            basicCharges = (Fee + (Fee * 0.5f));
            Console.WriteLine("Basic..............."+basicCharges);
            totalCharges = basicCharges;

            if (this.weight > 900)
            {

                totalOverWeight = this.weight - 900;
                int appliedRate = (this.feePerGram + this.additionalFeePerGram);

                overWeightCharges = totalOverWeight * appliedRate;
                totalCharges = (basicCharges + (appliedRate * totalOverWeight));
            }
            Console.WriteLine("\n\nShipment Receipt");
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

            Console.WriteLine("Basic Charges : " + basicCharges);
            Console.WriteLine("OverWeight Charges: " + overWeightCharges);
            Console.WriteLine("Shipment Total Charges: " + totalCharges);
            Console.WriteLine("Type of Shipment: Urgent");

        }
    }
}
