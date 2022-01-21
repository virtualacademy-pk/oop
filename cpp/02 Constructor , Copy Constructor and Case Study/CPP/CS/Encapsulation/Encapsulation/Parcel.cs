using  System;

namespace Encapsulation
{
    public class Parcel
    {
        private int id;
        private string senderName;
        private string senderAddress;
        private string receiverName;
        private string receiverAddress;
        private int weight;
        private int fee;


        public int Id
        {
            get { return this.id; }
            set { this.id = value; }
        }

        public string SenderName
        {
            get { return this.senderName; }
            set { this.senderName = value; }
        }

        public string SenderAddress
        {
            get { return this.senderAddress; }
            set { this.senderAddress = value; }
        }
        public string ReceiverName
        {
            get { return this.receiverName; }
            set { this.receiverName = value; }
        }

        public string ReceiverAddress
        {
            get { return this.receiverAddress; }
            set { this.receiverAddress = value; }
        }

        public int Weight
        {
            get { return this.weight;}
            set { this.weight = value; }
        }

        public int Fee
        {
            get { return this.fee; }
            set { this.fee = fee; }
        }
    }
   
}