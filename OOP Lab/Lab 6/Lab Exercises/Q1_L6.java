
class Account {
    private String name;
    private String accNo;
    private String accType;
    public double balance;

    public Account(String name, String accNo, String accType, double balance) {
        this.name = name;
        this.accNo = accNo;
        this.accType = accType;
        this.balance = balance;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited $" +amount + ". New balance: $" + balance);
    }

    public void displayBalance() {
        System.out.println("Current balance: $" + balance);
    }

    public void withdraw(double amount) {
        if (amount > balance) {
            System.out.println("Insufficient balance.");
        } else {
            balance -= amount;
            System.out.println("Withdrew $" + amount + ". New balance: $" + balance);
        }
    }

    public double getBalance() {
        return balance;
    }
}

class CurrentAccount extends Account {
    private double minBalance;

    public CurrentAccount(String name, String accNo, double balance, double minBalance) {
        super(name, accNo, "Current", balance);
        this.minBalance = minBalance;
    }

    public void checkMinBalance() {
        if (getBalance() < minBalance) {
            double penalty = 50;
            setBalance(getBalance() - penalty);
            System.out.println("Minimum balance not maintained. Penalty of $" + penalty + " imposed. New balance: $" + getBalance());
        }
    }

    public void withdraw(double amount) {
        super.withdraw(amount);
        checkMinBalance();
    }

    public void setBalance(double balance) {
        super.balance = balance;
    }
}

class SavingsBankAccount extends Account {
    private double interestRate;

    public SavingsBankAccount(String name, String accNo, double balance, double interestRate) {
        super(name, accNo, "Savings", balance);
        this.interestRate = interestRate;
    }

    public void computeInterest() {
        double interest = getBalance() * interestRate;
        setBalance(getBalance() + interest);
        System.out.println("Interest of $" + interest + " deposited. New balance: $" + getBalance());
    }

    public void setBalance(double balance) {
        super.balance = balance;
    }
}

public class Q1_L6 {
    public static void main(String[] args) {
        // Create a CurrentAccount object
        CurrentAccount currentAccount = new CurrentAccount("John Doe", "1234567890", 5000, 1000);

        // Deposit money
        currentAccount.deposit(1000);

        // Display balance
        currentAccount.displayBalance();

        // Withdraw money
        currentAccount.withdraw(2000);

        // Create a SavingsBankAccount object
        SavingsBankAccount savingsAccount = new SavingsBankAccount("Jane Doe", "9876543210", 10000, 0.05);

        // Deposit money
        savingsAccount.deposit(500);

        // Display balance
        savingsAccount.displayBalance();

        // Compute interest
        savingsAccount.computeInterest();

        // Withdraw money
        savingsAccount.withdraw(2000);
    }
}