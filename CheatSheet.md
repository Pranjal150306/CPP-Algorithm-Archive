# 🛠️ MY GITHUB CHEAT SHEET (Professional Workflow)

### 1. START NEW PROBLEM
   * Create the file: `touch TwoSum.cpp`
   * Write your code and optimize it.
   * **CRITICAL:** Ensure filename uses PascalCase (e.g., `TwoSum.cpp`, not `twosum.cpp`).

### 2. ORGANIZE (The Folder Strategy)
   * **Scenario A: Folder already exists (e.g., Arrays)**
       `git mv TwoSum.cpp Arrays/`

   * **Scenario B: New Topic (e.g., Hashing)**
       `mkdir Hashing`
       `git mv TwoSum.cpp Hashing/`

   * **Scenario C: Renaming a mistake (fixing lowercase)**
       `git mv twosum.cpp TwoSum.cpp`

### 3. UPLOAD CODE (The Push)
   git add .
   git commit -m "feat: solved [Problem Name] using [Technique]"
   git push origin main

### 4. UPDATE LIST (The Menu)
   * Go to GitHub.com > README.md > Pencil Icon ✏️.
   * Copy the last row of the table and update it:
       | # | [Name](LeetCodeLink) | [Code](./Folder/File.cpp) | Topic | `O(n)` | 🟢 Easy |
   * Commit changes.
