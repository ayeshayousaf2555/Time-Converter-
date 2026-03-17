
# TimeConverterCPP

A simple C++ program to convert time from 24-hour format (HHMM) into 12-hour format with AM/PM.

## 📌 Features
- Accepts time input in HHMM format (e.g., 1345 for 1:45 PM).
- Extracts hours and minutes using division and modulus.
- Converts to 12-hour format with AM/PM notation.
- Displays the result in a user-friendly format.

## 🛠️ Usage
1. Compile the program:
   ```bash
   g++ timeconverter.cpp -o timeconverter


- Run the executable:
./timeconverter
- Enter a time when prompted:
Enter time: 930
Time in 12-hour format: 9:30am
🎯 Example OutputsEnter time: 0
Time in 12-hour format: 12:0am

Enter time: 1200
Time in 12-hour format: 12:0pm

Enter time: 1345
Time in 12-hour format: 1:45pm
📖 Notes- Input should be in 24-hour HHMM format.
- Handles midnight (0000) and noon (1200) correctly.
- Great for beginners practicing arithmetic operations and conditionals in C++.
