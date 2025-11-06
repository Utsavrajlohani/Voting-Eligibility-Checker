# Voting-Eligibility-Checker
A simple C program that checks whether a person is eligible to vote in India based on their age and citizenship status.

📘 Project Overview

The Voting Eligibility Checker is a beginner-friendly program written in C.
It asks the user for their age and whether they are an Indian citizen (Y/N),
then determines if they are eligible to vote according to Indian election rules.

⚙️ Features

✅ Accepts user input for age and citizenship
✅ Validates voting eligibility based on conditions:
Must be 18 years or older
Must be an Indian citizen
✅ Provides clear messages for each possible case
✅ Uses simple if-else logic and character input

🧠 Logic / Workflow
Input age from user
Input citizenship (Y/N)
If age >= 18 and citizen == Y/y → Eligible
If age < 18 and citizen == Y/y → Not eligible (too young)
If citizen == N/n → Not eligible (not an Indian citizen)

🧰 How to Run

Save the file as voting_eligibility.c

Compile the program:
gcc voting_eligibility.c -o voting_eligibility

Run the executable:
./voting_eligibility

📄 License
This project is open source and available under the MIT License.

👨‍💻 Author
Utsav Raj
📘 GitHub Profile

💬 “Simple code, clear logic!”
