/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coe318.lab4;

/**
 *
 * @author Sayeed Ahamad
 */
public class Account {
    
    // Instance variables
    private String name;
    private int number;
    private double balance;

    // Constructor
    public Account(String name, int number, double initialBalance) {
        this.name = name;
        this.number = number;
        this.balance = initialBalance;
    }

    // Getters
    public String getName() {
        return name;
    }

    public int getNumber() {
        return number;
    }

    public double getBalance() {
        return balance;
    }

    // Deposit money into the account
    public boolean deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            return true;
        }
        return false;
    }

    // Withdraw money from the account
    public boolean withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }

    @Override
    public String toString() { //DO NOT MODIFY
        return "(" + getName() + ", " + getNumber() + ", " + String.format("$%.2f", getBalance()) + ")";
    }

    public static void main(String[] args) {
        // Test the Account class
        Account alice = new Account("Alice Jones", 1234, 100.0);
        Account bob = new Account("Bob", 789, 0.0);

        System.out.println(alice);
        System.out.println(bob);

        alice.deposit(15.0);
        alice.withdraw(10.0);

        System.out.println(alice);
    }
}

