using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Encapsulation
{
    class Program
    {


        static void Main(string[] args)
        {

            int receiptnum, weight, charges, serviceType, overFee;
            string sname, saddress, rname, raddress;
            while (true)
            {
                Console.WriteLine("Enter 1 for normal and 2 for urgent service.");
                serviceType = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Selected Type of Serice  : " + serviceType);
                if (serviceType == 1 || serviceType == 2)
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Selected Type Of Service is Incorrect");
                }
                
            }
            Console.Write("Enter receipt no.: ");
            receiptnum = Convert.ToInt32(Console.ReadLine());
                Console.Write("Enter sender name: ");
                sname = Console.ReadLine(); //cin>>sname;
                Console.Write("Enter sender address: ");

                saddress = Console.ReadLine();
                Console.Write("Enter receiver name: ");

                rname = Console.ReadLine();
                ;
                Console.Write("Enter receiver address: ");

                raddress = Console.ReadLine();
                Console.Write("Enter weight(in grams)) of parcel: ");
                weight = Convert.ToInt32(Console.ReadLine());

                Console.Write("Basic Charges of Parcel: ");
                charges = Convert.ToInt32(Console.ReadLine());
                Console.Write("Fee per Gram (Overweight): ");
                overFee = Convert.ToInt32(Console.ReadLine());
                int additionalFee = 0;
                if (serviceType == 2)
                {
                    Console.Write("Enter Additional Fee Per Gram : ");
                    additionalFee = Convert.ToInt32(Console.ReadLine());
                    UrgentParcel p = new UrgentParcel();
                    p.Id = receiptnum;
                    p.AdditionalFeePerGram = additionalFee;
                    p.SenderName = sname;
                    p.SenderAddress = saddress;
                    p.ReceiverName = rname;
                    p.ReceiverAddress = raddress;
                    p.Weight = weight;
                    p.Fee = charges;
                    p.FeePerGram = overFee;
                    p.DisplayUrgentReceipt();

                }
                else
                {
                    NormalParcel p = new NormalParcel();
                    p.Id = receiptnum;
                     
                    p.SenderName = sname;
                    p.SenderAddress = saddress;
                    p.ReceiverName = rname;
                    p.ReceiverAddress = raddress;
                    p.Weight = weight;
                    p.Fee = charges;
                
                    p.FeePerGram = overFee;
                    p.DisplayNormalReceipt();

                    
                }
            Console.ReadLine();
        }

        }
    }
