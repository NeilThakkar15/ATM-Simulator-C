# 🏦 ATM Simulator (C CLI Application)

> A lightweight, continuous command-line ATM simulator built in C. 

This project demonstrates the transition from basic sequential programming to continuous state management. It allows users to manage a virtual account balance through a persistent, interactive menu system.

## ✨ Features

*   **Persistent Memory:** Utilizes a `while` loop to maintain the user's account balance across multiple transactions without forcing a program restart.
*   **Interactive Menu:** Clean `switch-case` navigation for Checking Balance, Depositing, and Withdrawing funds.
*   **Transaction Security:** Built-in nested `if-else` logic prevents users from withdrawing more than their available balance and blocks invalid withdrawal amounts.
*   **Input Handling:** Effectively manages the C input buffer to prevent infinite loops on invalid character entries.

## 🚀 How to Run

**Option 1: Using a Local Compiler (GCC)**
1. Clone this repository to your local machine:
   `git clone https://github.com/NeilThakkar15/atm-simulator.git`
2. Open your terminal and navigate to the folder.
3. Compile the C file:
   `gcc main.c -o atm_simulator`
4. Run the executable:
   `./atm_simulator`

**Option 2: Using an Online Compiler**
Simply copy the code from `main.c` and paste it into an online C compiler like [Programiz](https://www.programiz.com/c-programming/online-compiler/) to run it instantly in your browser.

## 🧠 Key Learnings

Building this project was a major milestone in my first year of engineering. It helped solidify my understanding of:
*   Variable scope and protecting data state.
*   Debugging cascading compiler errors caused by syntax mistakes.
*   Testing edge cases to ensure code doesn't break under unexpected user behavior.

---
**Author:** Neil Thakkar
*First-Year B.Tech CSE Student*
