package coe318.lab4;




/*

package coe318.lab4;

/**
 *
 * @author Sayeed Ahamad
 */
public class Bank {
    
    private String name;
    private Account[] accounts;
    private int numAccounts;

    public Bank(String name, int maxNumberAccounts) {
        this.name = name;
        accounts = new Account[maxNumberAccounts];
        numAccounts = 0;
    }

    public String getName() {
        return name; // Fix this
    }

    public int getNumAccounts() {
        return numAccounts; // Fix this
    }

    public Account[] getAccounts() {
        return accounts; // Fix this
    }

    public boolean hasAccountNumber(int accountNumber) {
        // Fix this to check if the account number exists
        for (Account account : accounts) {
            if (account != null && account.getNumber() == accountNumber) {
                return true;
            }
        }
        return false;
    }

    public boolean add(Account account) {
        if (numAccounts < accounts.length && !hasAccountNumber(account.getNumber())) {
            accounts[numAccounts] = account;
            numAccounts++;
            return true;
        }
        return false; // Fix this to check if the account can be added
    }

    @Override
    public String toString() {
        //DO NOT MODIFY THIS CODE
        String s = getName() + ": " + getNumAccounts() +
                " of " + getAccounts().length +
                " accounts open";
        for (Account account : getAccounts()) {
            if (account == null) break;
            s += "\n  " + account;
        }
        return s;
    }
}

