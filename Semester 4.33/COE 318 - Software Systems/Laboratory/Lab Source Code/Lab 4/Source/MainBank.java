package coe318.lab3;

public class MainBank {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Bank [] banks = {new Bank("Toronto Dominion", 3),
                         new Bank("Bank of Montreal", 5)};
        Bank td = banks[0];
        Bank bmo = banks[1];
        System.out.println(td);
        Account charlie = new Account("Charles", 234, 200.00);
        td.add(charlie);
        System.out.println(td);
        Account dora = new Account("Dora", 456, 300.00);
        td.add(dora);
        System.out.println("td has account # 456: " +
                td.hasAccountNumber(456));
        Account ed = new Account("Edward", 456, 400.00);
        for(Bank bank : banks) {
            if (bank.add(ed)) break;
        }
        for(Bank bank : banks) {
            System.out.println(bank);
        }
    }

}
