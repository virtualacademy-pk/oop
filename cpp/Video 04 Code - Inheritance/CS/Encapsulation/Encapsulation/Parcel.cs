using  System;

namespace Encapsulation
{
    public class Parcel
    {
        protected int id;
        protected string senderName;
        protected string senderAddress;
        protected string receiverName;
        protected string receiverAddress;
        protected int weight;
        protected int fee;
        protected int feePerGram;

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
            set { this.fee = value; }
        }

        public int FeePerGram
        {
            get { return this.feePerGram; }
            set { this.feePerGram = value; }
        }
    }
   
}