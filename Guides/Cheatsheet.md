# 🛠️ MY GITHUB CHEAT SHEET (Professional Workflow)

### 0. PREPARE (The Daily Sync)
   * **ALWAYS run this first** to avoid "Rejected" errors:
     `git pull origin main`

### 1. START NEW PROBLEM
   * **Create & Open:** `nano TwoSum.cpp`
   * **Paste Code:** `Cmd + V`
   * **Save:** `Ctrl + O` -> `Enter`
   * **Exit:** `Ctrl + X`
   * **CRITICAL:** Use PascalCase for filenames (e.g., `TwoSum.cpp`).

### 2. ORGANIZE (The Folder Strategy)
   * **Scenario A: New File (Created < 5 mins ago)**
       `mv TwoSum.cpp Arrays/`
       *(Use `mv` because Git doesn't track it yet)*

   * **Scenario B: Old File (Already on GitHub)**
       `git mv TwoSum.cpp Arrays/`
       *(Use `git mv` to keep history)*

   * **Scenario C: New Topic**
       `mkdir Hashing`
       `mv TwoSum.cpp Hashing/`

### 3. UPLOAD CODE (The Push)
   git add .
   git commit -m "feat: solved [Problem Name] using [Technique]"
   *(See Step 5 for prefixes)*
   git push origin main

### 4. UPDATE LIST (The Menu)
   * Go to GitHub.com > README.md > Pencil Icon ✏️.
   * Copy the last row of the table and update it:
       | # | [Name](LeetCodeLink) | [Code](./Folder/File.cpp) | Topic | `O(n)` | 🟢 Easy |
   * Commit changes.

### 5. REFERENCE: COMMIT PREFIXES
   * **feat:** New solution.
   * **fix:** Correcting a bug.
   * **docs:** Updating README/Cheatsheet.
   * **refactor:** Cleaning code.
   * **chore:** Maintenance/Deleting files.

### 6. RUN CODE (Test Locally)
   * Compile: `g++ TwoSum.cpp -o output`
   * Run: `./output`
   * Clean up: `rm output`

### 7. TROUBLESHOOTING (The Panic Button)
   * **Stuck in `dquote>`?** Press `Ctrl + C` to cancel.
   * **"Updates were rejected"?** You forgot Step 0. Run `git pull origin main`.
   * **"Not under version control"?** You used `git mv` on a new file. Use `mv`.
   * **Stuck in Vim/Nano?**
       * Vim: Type `:x` then Enter.
       * Nano: `Ctrl+O` -> Enter -> `Ctrl+X`.
### 8. MOVE A FILE FROM ONE FOLDER TO ANOTHER
        * git mv Arrays/MissingNumber.cpp Math/ 
        * Then commit and git push origin main

### 9.🚑 Troubleshooting (When Git Says "No")

### **Error: `! [rejected] main -> main (fetch first)`**
* What it means:** "Traffic Jam." Someone (or you) changed the code on GitHub.com (like editing the README), and your laptop is outdated.
* The Fix (The "Inhale" Technique):**
    1.  `git pull origin main --no-edit`  *(Downloads the online changes and merges them automatically)*
    2.  `git push origin main`            *(Now you can upload safely)*

    **Error: `filename.cpp` vs `FileName.cpp` (Capitalization)**
* **What it means:** You renamed a file but Git didn't notice because Mac/Windows are case-insensitive.
  **The Fix:**
    1.  `git mv oldname.cpp NewName.cpp`
    2.  `git commit -m "fix: rename file"`
    3.  `git push origin main`
       
### 10. **Scenario: "I made a typo in my commit message!"**
* **The "No-Editor" Fix (Avoids Vim):**
    `git commit --amend -m "New correct message here"`
* **If you have already pushed:**
    1. Fix the message locally (command above).
    2. `git push --force origin main`
    * *Note: Only use force if you are sure no one else is working on your branch.*
