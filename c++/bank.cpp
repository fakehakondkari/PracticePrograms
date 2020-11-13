/*Abstract classes are used for implementing specific frameworks of processes. One example of such a process is NEFT (National Electronic bank Transfer) bank transfers. This process is adopted by all the banks throughout India. The entire process is strictly standardized and certain steps and data are mandatory for all banks to follow.
In the example below we will like to explain how such a system is implemented. This system is a much simpler version of actual NEFT implementation that is adopted by all banks. This is only presented to understand the use of abstract classes.
NEFT Process Standard
Let us create an NEFT class that directs the banks what processes needs to follow.*/
class NEFT
{
	private :
		char bank_frsc_code[13];
		char bank_code [10];
		int sender_bank_account_id;
		int date_of_transfer;
		int time_of_transfer;
		int reciever_bank_account_id;
		double amount_transfered;
	public :
		virtual int authnticate()=0;
		virtual int prepare()=0;
		virtual int commit()=0;
		virtual int confirm()=0;

};
/*The above class is created with the assumption that entire process takes place in four steps.
1. Authenticate : Here the bank checks the transferor’s validity.
2. Prepare : In this place bank will get the relevant information needed for the transfer.
3. Commit : The actual transaction is committed and the transferor’s and Transferee’s bank
    account is updated.
4. Confirm : This process will raise a final confirmation on the transaction if it is successful.
The Bank’s Perspective
It is the bank that implements the NEFT process in their system . Bank’s own system may need many information in 
addition to what is needed by standard method laid down by government. So here we will build a class for the bank
 specific NEFT process. Banks will implement the process in their own way but not ignoring what has been laid down by the government. 
 In the class structure shown below we show HSBC a leading private bank may have implemented its NEFT system laid down by government.*/
class HSBC_NEFT : public NEFT
{
	int authenticate()
	{
		// HSBC has his own authentication process
	}
	int prepare()
	{
		// HSBC has his own information need for the process
		// It uses the fields that are provided by NEFT in addition to
		// whatever HSBC Bank system needs to keep track of transaction
	}
	int commit()
	{
		// HSBC will update its books of account
		// and also fulfill the NEFT process needs
	}
	int confirm()
	{
		// If each of the previous processes are performed successfully
		// the function sends a success code
		// else it sends a failure code
	}

};
