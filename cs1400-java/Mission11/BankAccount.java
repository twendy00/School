public class BankAccount
{
	private String name;
	private int accountNum;
	private double balance;

	//Constructor that sets the customer name and account number when account is created
	public BankAccount (String n, int a)
	{
		this.name = n;
		this.accountNum = a;
	}

	//Increases the account balance by the amount of the deposit
	public void deposit (double amount)
	{
		this.balance = balance + amount;
	}

	//Reduces the account balance by the amount of the withdrawal
	public void withdraw (double amount)
	{
		this.balance = balance - amount;
	}

	//Returns the account balance
	public double getBalance ()
	{
		return this.balance;
	}

	//Returns the account holder's name
	public String getName ()
	{
		return this.name;
	}

	//Returns the account holder's account number
	public int getAccountNum ()
	{
		return this.accountNum;
	}

}